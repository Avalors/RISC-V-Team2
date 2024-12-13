# Personal Statement: Antoine Divet

**Name:** Antoine Divet

**CID:** 02379818   

**Github Username:** aa6dcc

## Overview
- [Summary of Contributions](#summary-of-contributions)
    - [Lab 4](#lab-4)
        - [Top Level Testbenching](#Top-Level-Testbenching)
        - [Top Level Integration](#Top-Level-Integration)
        - [Doit.sh script](#Doit.sh-script)
        - [Assembly instructions](#Assembly-instructions)     
    - [Single Cycle](#Single-cycle)
        - [Data memory](#Data-memory)
        - [Analyse.py](#Analyse.py) 
    - [Cache](#Cache)
        - [One-way set associative cache](#One-way-set-associative-cache)
        - [Two-way set associative cache](#Two-way-set-associative-cache)
        - [Verification using assembly](#Verification-using-assembly)
    - [Branch Prediction](#branch-prediction)
        - [Two-bit simple dynamic branch predictor](#Two-bit-simple-dynamic-branch-predictor)
        - [Integration](#Integration)
        - [Testing via assembly](#Testing-via-assembly)
    - [As repo master](#As-repo-master)
- [What I learned](#what-i-learned)
- [Mistakes I made](#mistakes-i-made)
- [What I would do differently](#what-i-would-do-differently)

## Summary of Contributions

### Lab 4

#### Top Level Testbenching

For lab 4, I fully implemented the top level testbench called `top-lab4_tb.cpp` (before later being renamed `top_tb.cpp`), which was a comprehensive testbench for verifying the functionality of the CPU module using Google Test and Verilator frameworks.

It ran four different tests:
    - InitialStateTest
    - ResetBehaviourTest
    - InstructionExecutionTest
    - FullCycleTest

I got to learn about the basics of testbenching, such as:
```C
runSimulation(1);
```
which runs the clock for 1 cycle, as well as EXPECT_EQ that verifies the relationship between its arguments. I also got to discover the different header files which need to be called in order to run a testbench in C++. 

```C
EXPECT_EQ(top->a0, 0);    // Register a0 should be 0 after reset
EXPECT_NE(top->a0, 0);    // Register a0 should change after reset is de-asserted
EXPECT_EQ(top->a0, cycle + 1); // Expect a0 to increment with each cycle
```
The code below really helped me understand the logic behind simulation; by toggling the clock and using eval() to simulate the design. 
```C
void runSimulation(int cycles = 1)
{
    for (int i = 0; i < cycles; ++i)
    {
        top->clk = !top->clk; // Toggle clock
        top->eval();          // Evaluate the design
    }
}
```

#### Top Level Integration



#### Doit.sh script

#### Assembly instructions

### Single Cycle

#### Data memory

#### Analyse.py

### Cache

#### One-way set associative cache

#### Two-way set associative cache

#### Verification using assembly

### Branch Prediction

#### Two-bit simple dynamic branch predictor

#### Integration

#### Testing via assembly 

## What I learned
- Using learning materials correctly: "Digital Design and Computer Architecture", online courses, videos, lecture slides...
- Working as a team, planning work in advance
- Gained technical skills whilst integrating the different modules, writing testbenches for each of them, debugging each module...
- Learnt to use Git and Linux


## Mistakes I made
- Syntax errors (forgetting newlines, getting the number of bits wrong...)
- Took some time for me to learn the importance of teamwork and helping one another 

## What I would do differently
- Do background research before the project
- Set goals in advance
