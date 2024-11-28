#!/bin/bash
#This shebang specifies the interpreter for the code, which is bash

# This script runs the testbench
# Usage: ./doit.sh <file1.cpp> <file2.cpp>

# Constants
SCRIPT_DIR=$(dirname "$(realpath "$0")") #stores the absolute path of the directory containing this script
TEST_FOLDER=$(realpath "$SCRIPT_DIR/test") #absolute path of the test folder inside the script's directory
RTL_FOLDER=$(realpath "$SCRIPT_DIR/../rtl") # absolute path of the rtl folder (assumed to be one level above the script's directory)
GREEN=$(tput setaf 2) #stores the terminal command to change text color to green
RED=$(tput setaf 1) #stores the terminal command to change text color to red
RESET=$(tput sgr0) #stores the terminal command to reset the terminal text formatting to default

# Variables
# These keep track of how many test cases pass or fail during script execution
passes=0 # Initialize passes to 0
fails=0 # Initialize fails to 0

# Handle terminal arguments
if [[ $# -eq 0 ]]; then #checks if the number of arguments passed to the script is 0
    # [[ ... ]] is a conditional expression used in bash; -eq checks if the two values are equal
    # If no arguments provided, run all tests
    files=(${TEST_FOLDER}/*.cpp) #If no arguments are given, it sets files to include all .cpp files located in the TEST_FOLDER
    #files is an array containing these file paths
else
    # If arguments provided, use them as input files
    files=("$@") #Sets files to the list of arguments passed to the script
    #$@ represents all the script's arguments as an array
fi

# Cleanup
rm -rf obj_dir #Removes the directory obj_dir and its contents (if it exists)
#rm is the remove command

cd $SCRIPT_DIR #Changes the working directory to the script's directory, stored in the SCRIPT_DIR variable
#cd is the change directory command

# Iterate through files
for file in "${files[@]}"; do
    name=$(basename "$file" _tb.cpp | cut -f1 -d\-)
    
    # If verify.cpp -> we are testing the top module
    if [ $name=="verify.cpp" ]; then
        name="top"
    fi

    # Translate Verilog -> C++ including testbench
    # Uses Verilator to compile Verilog source files into C++ code for simulation
    # Wall: Enables all warning messages - Trace: Enables waveform tracing for debugging
    # -cc ${RTL_FOLDER}/${name}.sv \ : Specifies the Verilog source file to compile
    # --exe ${file} \ : Includes the C++ testbench file in the build
    # -y ${RTL_FOLDER} \ : Specifies the directory containing additional Verilog files
    # --prefix "Vdut" \ : Sets a prefix for generated files
    # -o Vdut \ : Names the generated executable as Vdut
    # -CFLAGS "-isystem /opt/homebrew/Cellar/googletest/1.15.2/include"\ : Provide include paths and linker flags for Google Test and its dependencies.
    # -LDFLAGS "-L/opt/homebrew/Cellar/googletest/1.15.2/lib -lgtest -lgtest_main -lpthread" \
    verilator   -Wall --trace \
                -cc ${RTL_FOLDER}/${name}.sv \ 
                --exe ${file} \ 
                -y ${RTL_FOLDER} \ 
                --prefix "Vdut" \ #Sets a prefix for generated files
                -o Vdut \ #Names the generated executable as Vdut
                -CFLAGS "-isystem /opt/homebrew/Cellar/googletest/1.15.2/include"\ 
                -LDFLAGS "-L/opt/homebrew/Cellar/googletest/1.15.2/lib -lgtest -lgtest_main -lpthread" \
                --coverage #Enables coverage reporting for the simulation

    # Build C++ project with automatically generated Makefile
    make -j -C obj_dir/ -f Vdut.mk #Compiles the project using the make utility
    # -j: Enables parallel compilation for faster builds
    # -C obj_dir/: Specifies the directory (obj_dir) where the build files are located
    # -f Vdut.mk: Uses the automatically generated Vdut.mk Makefile
    
    # Run executable simulation file
    ./obj_dir/Vdut #Executes the compiled simulation executable (Vdut) from the obj_dir directory
    
    # Check if the test succeeded or not
    # After executing each test, this block checks the exit status ($?) of the last executed command:
    # If the exit status is 0 (indicating success), the passes counter is incremented
    # Otherwise, the fails counter is incremented
    if [ $? -eq 0 ]; then
        ((passes++))
    else
        ((fails++))
    fi
    
done #Marks the end of the for loop that iterates over all test files'

# Exit as a pass or fail (for CI purposes)
# Checks if there were any failures:
# If fails is 0, all tests passed. The script:
# Prints a success message in green using the ${GREEN} formatting variable.
# Exits with a status of 0 (success).
if [ $fails -eq 0 ]; then
    echo "${GREEN}Success! All ${passes} test(s) passed!"
    exit 0
else
    total=$((passes + fails))
    echo "${RED}Failure! Only ${passes} test(s) passed out of ${total}."
    exit 1
fi
