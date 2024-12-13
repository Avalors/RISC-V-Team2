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

I implemented a SystemVerilog module called `TopLevelCPU.sv` which takes clock and reset inputs and outputs the value of register a0, implementing a simple processor, along with register file access and control logic.

I integrated several modules such as the program counter, control unit, instruction memory, sign extension, ALU, register file. For the ALU, I used RD1 and ALUop1 as operands, which was later amended to ALUop1 and ALUop2. 
I also had to define a variety of different internal signals, where the 32-bit signals indicate we are implementing a 32-bit architecture. 
```SV
logic [31:0] PC;                      // Program Counter
logic [31:0] instr;                   // Current instruction
logic [31:0] ImmOp;                   // Sign-extended immediate value
logic [31:0] ALUop1, ALUop2, ALUout;  // ALU operands and result
logic EQ;                             // Equality output from ALU
logic [31:0] RD1, RD2, WD3;           // Register file read/write data
logic RegWrite, ALUsrc, PCsrc;        // Control signals
logic [1:0] ImmSrc;                   // 2-bit Immediate source signal
logic [2:0] ALUctrl;
```
For example, the control unit takes the 7-bit opcode and equality flag to generate all control signals. 
```SV
ControlUnit ControlUnit (
    .opcode(instr[6:0]),    // Opcode from instruction
    .EQ(EQ),                // Equality signal from ALU
    .RegWrite(RegWrite),    // Register write enable
    .ALUsrc(ALUsrc),        // ALU source select
    .ImmSrc(ImmSrc),        // Immediate source select
    .PCsrc(PCsrc),          // Program Counter source select
    .ALUctrl(ALUctrl)       // ALU control signal
);
```
For example, the register file below uses a classic 3-port register design with synchronous write and asynchronous read. 
```SV
RegisterFile RegFile (
    .clk(clk),
    .WE3(RegWrite),         // Write Enable
    .AD1(instr[19:15]),     // rs1 - source register 1
    .AD2(instr[24:20]),     // rs2 - source register 2
    .AD3(instr[11:7]),      // rd - destination register
    .WD3(WD3),              // Write data
    .RD1(RD1),              // Read data 1
    .RD2(RD2)               // Read data 2
);
```
For instruction memory, we can see we are dealing with an asynchronous read with 5-bit addressing (32 instructions maximum) and 4-byte instructions. The data memory hadn't been implemented yet, so this ROM is for logic operations. 
```SV
rom #(
    .ADDRESS_WIDTH(5),
    .DATA_WIDTH(32)
) InstructionMemory (
    .clk(clk),
    .addr(PC[6:2]), // Address from PC (word-aligned)
    .instr(instr)
);
```
Below, we use a blocking assignment to directly access the register 10 (a0), register 10 being an output register.
```SV
assign a0 = RegFile.register[10];
```
I thought the direct register visibility was important for testing - it makes it easier to handle verification. 

#### Doit.sh script

I fully implemented the `doit.sh` script for lab 4, that is a bash script that automates the process of running the team's CPU testbenches. It handles compilation of SystemVerilog code using Verilator, builds the resulting C++ project, and executes tests while tracking their success/failure. The script essentially creates a complete automated testing pipeline for your CPU implementation.

First, I had to implement the directory structure setup, which required changing folder names and locations in our repo. Below, I simply made sure testbenches are in the test directory. 
```bash
SCRIPT_DIR=$(dirname "$(realpath "$0")")
TEST_FOLDER=$(realpath "$SCRIPT_DIR/test")
RTL_FOLDER=$(realpath "$SCRIPT_DIR/../rtl")
```
The verilator command below compiles SystemVerilog to C++, links with the Google Test framework, enables waveform tracing and sets up coverage reporting, all key for debugging purposes. 
```bash
verilator   -Wall --trace \
            -cc ${RTL_FOLDER}/${name}.sv \
            --exe ${file} \
            -y ${RTL_FOLDER} \
            --prefix "Vdut" \
            -o Vdut \
            -CFLAGS "-isystem /opt/homebrew/Cellar/googletest/1.15.2/include"\
            -LDFLAGS "-L/opt/homebrew/Cellar/googletest/1.15.2/lib -lgtest -lgtest_main -lpthread" \
            --coverage
```
I also made sure to handle files appropriately, here for example, this instruction either runs all the .cpp files in the test folder or specific files given as arguments.  
```bash
if [[ $# -eq 0 ]]; then
    files=(${TEST_FOLDER}/*.cpp)
else
    files=("$@")
fi
```
Regarding the build process, I used parallel compilation (-j) to created files in the obj_dir folder (even though this was eventually placed in the `.gitignore`)
```bash
make -j -C obj_dir/ -f Vdut.mk
```
For the test results tracking, I maintained a running count of passed/failed tests using bash arithmetic expansion, and then used terminal control codes for colored output, making pass/fail status visually clear.
```bash
if [ $? -eq 0 ]; then
        ((passes++))
    else
        ((fails++))
    fi
    
done

if [ $fails -eq 0 ]; then
    echo "${GREEN}Success! All ${passes} test(s) passed!"
    exit 0
else
    total=$((passes + fails))
    echo "${RED}Failure! Only ${passes} test(s) passed out of ${total}."
    exit 1
fi
```

#### Assembly instructions

I implemented 3 assembly programs for lab4: `counter.s`, `or.s` and `xor.s`. 

`counter.s` implements a nested loops structure, which allowed us to verify if our CPU was counting all the way up to 255. 
The value is continuously output through register a0.
Here,  t1 is a constant holding 255 (0xFF), which acts as the de facto loop boundary. It uses immediate addition from zero register to load the value
```ASM
addi    t1, zero, 0xff 
```
The inner loop copies counter value to output register, and uses addi for increments. 
```ASM
addi    a0, a1, 0           # load a0 with a1
addi    a1, a1, 1           # increment a1
```
For the loop control, we chose to use bne (branch if not equal). The second bne is effectively an unconditional jump since t1 (255) will never equal zero
```ASM
bne     a1, t1, iloop       # if a1 = 255, branch to iploop
bne     t1, zero, mloop     #  ... else always brand to mloop
```
Here is an example of me using GTKwave: in this example I was running the 'counter.s' file

This is from the 'waveform.vcd' file:
![image](https://github.com/user-attachments/assets/bfb0e1e4-b835-4a2b-ad42-11fff2f5103b)

`or.s` is a simple RISC-V assembly program that demonstrates the OR logical operation. It loads two values and performs a bitwise OR between them.
For the initial value loading, we load a0 with decimal 15 (binary 00001111)
```ASM
main:
    addi a0, zero, 15   # a0 = 15 (binary: 00001111)
    addi a1, zero, 10   # a1 = 10 (binary: 00001010)
    or a0, a0, a1       
    
	# EXPECTED OUTPUT = 15 (binary: 00001111)
```
and for the second value loading, we load a1 with decimal 10 (binary 00001010)
```ASM
addi a1, zero, 10   # a1 = 10 (binary: 00001010)
```
then, performs a bitwise OR between a0 and a1, storing result in a0, which in this case gives 0000 1111 in binary or 15 in decimal.
```ASM
or a0, a0, a1
```

`xor.s` is a RISC-V assembly program demonstrating the XOR (exclusive OR) logical operation. 
At the start, a0 is loaded with 15 (00001111 in binary)
```ASM
addi a0, zero, 15   # a0 = 15 (binary: 00001111)
```
the second value loads a1 with 10 (00001010 in binary)
```ASM
addi a1, zero, 10   # a1 = 10 (binary: 00001010)
```
and then we perform a bitwise XOR between a0 and a1, storing result in a0
```ASM
xor a0, a0, a1
```

### Single Cycle

#### Data memory

For data memory, I started working with Ahmed and we both agree to opt for a little-endian storage

![image](https://github.com/user-attachments/assets/dead0385-ac2f-406e-a7cc-0d8518593d85)

I chose to implement a `little_endian.s` assembly file, a program that demonstrates memory operations and byte-level access, testing both store word (sw) and load byte (lb) instructions. 
```ASM
main:
    li x10, 0x12345678      # Pseudo-instruction: regfile[x10] = 0x12345678
    sw x10, 0(x11)          # Store the word from regfile[x10] into data location indexed 0
    lb x12, 0(x11)          # Load first byte  | regfile[x12] = 0x78
    lb x13, 1(x11)          # Load second byte | regfile[x13] = 0x56
    lb x14, 2(x11)          # Load third byte  | regfile[x14] = 0x34
    lb x10, 3(x11)          # Load fourth byte | regfile[x10] = 0x12
    
# regfile[x11] = 32'b0, therefore using 'base + offset' addressing we accessing the first 4 (0 through to 3)
# memory locations in the data memory.
```
![image](https://github.com/user-attachments/assets/551c4b0f-357e-4647-baf3-b0616f4f2a73)

I then tried to make a draft for the data memory, and then updated it with Ahmed, as seen here [commit](https://github.com/aa6dcc/RISC-V-Team2/blob/3e585a9d6a521a006d7788d3563aa2bd31bece07/rtl/data_mem.sv).
We chose to use 20 bits for the width of the address (leaving us with 2^20 total memory locations), and used an intermediate temp register for combinational logic. We also used a continuous assignment for read data. 
```SV
assign RD = temp;
```
We then implemented all the RISC-V load/store operations with little-endian byte ordering. Most of this came from Ahmed, but I was still able to contribute to this section. 
```SV
// load byte
        3'b000:begin
            temp = {24{array[A][7]},array[A]};
        end
        
        // load half
        3'b001:begin
            temp = {{16{array[A+1][7]}}, array[A+1], array[A]};
        end

        // load word
        3'b010:begin
            temp = {array[A+3], array[A+2], array[A+1], array[A]};
        end

        // load byte unsigned
        3'b011:begin
            temp = {24'b0, array[A]};
        end


        // load half unsigned
        3'b100:begin
            temp = {16'b0, array[A+1], array[A]};
        end


        // store byte
        3'b101:begin
            array[A] = WD[7:0];
        end
        
        // store half
        3'b110:begin
            array[A] = WD[7:0];
            array[A+1] = WD[15:8];
        end


        // store word
        3'b111:begin
            array[A] = WD[7:0]; // stores the least significant byte
            array[A+1] = WD[15:8];
            array[A+2] = WD[23:16];
            array[A+3] = WD[32:24]; // stores the most significant byte
        end
```
I also got to show my understanding of little-endian storage by working on the synchronous version of the store word operation:
```SV
else if(AddrMode == 4'b0111)begin
            array[A] <= WD[7:0]; // stores the least significant byte
            array[A+1] <= WD[15:8];
            array[A+2] <= WD[23:16];
            array[A+3] <= WD[31:24]; // stores the most significant byte
        end
```

![image](https://github.com/user-attachments/assets/692bd481-65ae-44a2-bd66-2e4efb3db5f5)
 
I also tried to work on a draft for the testbench in order to develop some intuition, but my draft was never fully used ([commit](https://github.com/aa6dcc/RISC-V-Team2/commit/2b868068dcbeb311ae430f8b233fe275991bf74d)). My logic was to try and make many `if` statements, which would then run different instructions depending on the clock cycle (which could tell us if the data memory was synced as expected). The idea was to use gtkwave to see what instructions should be running on what clock cycle and then amend the code according to that (as all the tests would be within a large for loop). This would imply making many if statements ie. (if == 2) where i corresponds to the clock cycle to make sure the module and testbench are synchronised. 
I didn't get to spend much time on this draft and so quickly moved on to the cache. 

#### Analyse.py

I briefly tried to work on using plotly (Python) to show the gaussian, noisy, sine, triangle graphs of the PDF, but Elson picked up on the project instead and fully implemented `graphs.py`.
My idea was to make a Python script which serves as a performance analysis and visualization tool for a CPU implementation. It would process test output logs to extract key performance metrics, particularly focusing on cache behavior and branch prediction accuracy. Through a command-line interface, users could have run the tool in three modes: analyzing instruction testbench results, plotting performance data, or running a complete automated demo that handles testing and visualization. 
The extended objective would then have been to generate various graphs showing cache hit rates and branch prediction accuracy, helping validate the CPU implementation and identify potential performance optimizations.

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
