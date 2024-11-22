#!/bin/bash

# Script to compile and test Verilog code with C++ testbenches

# Constants
RTL_FOLDER=$(realpath "rtl")
TESTBENCH_FOLDER=$(realpath "tb/test")
ASM_FOLDER=$(realpath "tb/asm")
LOG_FOLDER=$(realpath "logs")
GREEN=$(tput setaf 2)
RED=$(tput setaf 1)
RESET=$(tput sgr0)

# Variables
data_files=()
passes=0
fails=0

# Ensure required directories exist
if [[ ! -d ${RTL_FOLDER} ]] || [[ ! -d ${TESTBENCH_FOLDER} ]] || [[ ! -d ${ASM_FOLDER} ]]; then
    echo "Error: One or more required directories are missing!"
    exit 1
fi

# Handle terminal arguments
if [[ $# -eq 0 ]]; then
    # If no arguments provided, run all testbenches
    files=(${TESTBENCH_FOLDER}/*_tb.cpp)
else
    # If arguments provided, use them as input files
    files=("$@")
fi

# Cleanup old files
if [[ -d obj_dir ]]; then
    rm -rf obj_dir
fi

if [[ -d ${LOG_FOLDER} ]]; then
    rm -rf ${LOG_FOLDER}
fi

# Create log folder
mkdir -p ${LOG_FOLDER}

# Iterate through testbench files
for file in "${files[@]}"; do
    name=$(basename "$file" _tb.cpp)
    
    # Determine top module and source file based on test name
    if [[ "$name" == "alu" ]]; then
        TOP_MODULE="alu"
        RTL_FILE="alu.sv"
    elif [[ "$name" == "top_lab4" ]]; then
        TOP_MODULE="TopLevelCPU"
        RTL_FILE="TopLevelCPU.sv"
    else
        echo "${RED}Unknown test ${name}, skipping...${RESET}"
        ((fails++))
        continue
    fi

    echo "Running test for ${name}..."

    # Translate Verilog -> C++ including the testbench
    verilator -Wall --coverage --trace \
              --public \
              --public-flat-rw \
              -cc "${RTL_FOLDER}/${RTL_FILE}" \
              --exe ${file} \
              -y "${RTL_FOLDER}" \
              --prefix "V${name}" \
              -o "V${name}" \
              -CFLAGS "-fprofile-generate -fprofile-correction" \
              -LDFLAGS "-lgtest -lpthread -fprofile-generate" \
              --top-module ${TOP_MODULE}

    # Check if verilator command was successful
    if [[ $? -ne 0 ]]; then
        echo "${RED}Verilator failed for ${name}.${RESET}"
        ((fails++))
        continue
    fi

    # Build the C++ project with the auto-generated Makefile
    make -j -C obj_dir/ -f V${name}.mk

    # Check if the build was successful
    if [[ $? -ne 0 ]]; then
        echo "${RED}Compilation failed for ${name}.${RESET}"
        ((fails++))
        continue
    fi

    # Run the simulation executable
    ./obj_dir/V${name}

    # Check if the test succeeded
    if [ $? -eq 0 ]; then
        echo "${GREEN}Test for ${name} passed!${RESET}"
        ((passes++))
    else
        echo "${RED}Test for ${name} failed.${RESET}"
        ((fails++))
    fi

    # Add coverage file to the list
    data_files+=( "${LOG_FOLDER}/coverage_${name}.dat" )
done

# Generate code coverage data if coverage files exist
if [[ ${#data_files[@]} -gt 0 ]]; then
    verilator_coverage --annotate ${LOG_FOLDER}/annotate --annotate-all --annotate-min 1 --write-info ${LOG_FOLDER}/merged.info ${data_files[*]}
    genhtml ${LOG_FOLDER}/merged.info --output-directory ${LOG_FOLDER}/html
else
    echo "No coverage data found."
fi

# Print summary and exit with success or failure
total=$((passes + fails))
if [ $fails -eq 0 ]; then
    echo "${GREEN}Success! All ${passes} test(s) passed!${RESET}"
    exit 0
else
    echo "${RED}Failure! ${passes} out of ${total} test(s) passed.${RESET}"
    exit 1
fi
