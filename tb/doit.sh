#!/bin/bash

SCRIPT_DIR=$(dirname "$(realpath "$0")")
TEST_FOLDER=$(realpath "$SCRIPT_DIR/test")
RTL_FOLDER=$(realpath "$SCRIPT_DIR/../rtl")
GREEN=$(tput setaf 2)
RED=$(tput setaf 1)
RESET=$(tput sgr0)

passes=0
fails=0

if [[ $# -eq 0 ]]; then
    files=(${TEST_FOLDER}/*.cpp)
else
    files=("$@")
fi

rm -rf obj_dir

cd $SCRIPT_DIR

for file in "${files[@]}"; do

    # If verify.cpp -> we are testing the top module
    #if [ $name=="verify.cpp" ]; then
      #  name="top"
    #fi

    name=$(basename "$file" _tb.cpp | cut -f1 -d\-)

    verilator   -Wall --trace \
                -cc ${RTL_FOLDER}/${name}.sv \
                --exe ${file} \
                -y ${RTL_FOLDER} \
                --prefix "Vdut" \
                -o Vdut \
                -CFLAGS "-isystem /opt/homebrew/Cellar/googletest/1.15.2/include" \
                -LDFLAGS "-L/opt/homebrew/Cellar/googletest/1.15.2/lib -lgtest -lgtest_main -lpthread" \
                --coverage

    make -j -C obj_dir/ -f Vdut.mk

    ./obj_dir/Vdut

    if [ $? -eq 0 ]; then
        ((passes++))
    else
        ((fails++))
    fi
    
done

if [ $fails -eq 0 ]; then
    echo "${GREEN}Success! All ${passes} test(s) passed!"
    #exit 0
else
    total=$((passes + fails))
    echo "${RED}Failure! Only ${passes} test(s) passed out of ${total}."
    exit 1
fi
