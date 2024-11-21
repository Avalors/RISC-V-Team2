#!/bin/bash

# Script to compile and test Verilog code with C++ testbenches

# Constants
RTL_FOLDER=$(realpath "rtl")
TESTBENCH_FOLDER=$(realpath "tb/test")
ASM_FOLDER=$(realpath "tb/asm")
LOG_FOLDER=$(realpath "logs")
TOP_MODULE="TopLevelCPU"
GREEN=$(tput setaf 2)
RED=$(tput setaf 1)
RESET=$(tput sgr0)

# Variables
data_files=()
passes=0
fails=0

# Handle terminal arguments
if [[ $# -eq 0 ]]; then
    # If no arguments provided, run all testbenches
    files=(${TESTBENCH_FOLDER}/*_tb.cpp)
else
    # If arguments provided, use them as input files
    files=("$@")
fi

# Cleanup
rm -rf obj_dir ${LOG_FOLDER}
mkdir -p ${LOG_FOLDER}

# Iterate through testbench files
for file in "${files[@]}"; do
    name=$(basename "$file" _tb.cpp)

    echo "Running test for ${name}..."

    # Translate Verilog -> C++ including the testbench
    verilator   -Wall --coverage --trace \
                -cc "${RTL_FOLDER}/${TOP_MODULE}.sv" \
                --exe ${file} \
                -y "${RTL_FOLDER}" \
                --prefix "V${name}" \
                -o "V${name}" \
                -CFLAGS "-fprofile-generate -fprofile-correction" \
                -LDFLAGS "-lgtest -lpthread -fprofile-generate" \
                --top-module ${TOP_MODULE}

    # Build the C++ project with the auto-generated Makefile
    make -j -C obj_dir/ -f V${name}.mk

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

    # Add file pointer of coverage data file to array
    data_files+=( "${LOG_FOLDER}/coverage_${name}.dat" )
done

# Generate code coverage data
verilator_coverage  --annotate ${LOG_FOLDER}/annotate \
                    --annotate-all --annotate-min 1 \
                    --write-info ${LOG_FOLDER}/merged.info ${data_files[*]}

# Create an HTML code-coverage report using LCOV
genhtml ${LOG_FOLDER}/merged.info --output-directory ${LOG_FOLDER}/html

# Print summary and exit with success or failure
if [ $fails -eq 0 ]; then
    echo "${GREEN}Success! All ${passes} test(s) passed!${RESET}"
    exit 0
else
    total=$((passes + fails))
    echo "${RED}Failure! Only ${passes} test(s) passed out of ${total}.${RESET}"
    exit 1
fi
