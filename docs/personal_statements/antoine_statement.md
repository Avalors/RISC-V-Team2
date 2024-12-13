# Personal Statement: Antoine Divet

**Name:** Antoine Divet

**CID:** 02379818   

**Github Username:** aa6dcc

To see a chronological evolution of my contributions, please find my logbook attached: [Antoine-Logbook](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/logbooks/antoine_log.md)

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

I also implemented a `doit.sh` script which is fully commented out, line by line so the team members could fully understand what each line was doing: [commit](https://github.com/aa6dcc/RISC-V-Team2/commit/28ca6bac0710ecb4394eee240b3122a09837c235)

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

I also considered adding an element of randomness to the f1_lights.s file by using an LCG (Linear Congruential Generator), a proven historical algorithm. 

![image](https://github.com/user-attachments/assets/bb455c75-9987-446e-8215-eeb59be6c2d4)

### Cache

#### One-way set associative cache

Cache memory was introduced into this project, allowing us to have a faster type of memory with limited storage accessible to the processor.
An efficient cache is crucial for a CPU, because as we know, computer performance depends on:
  - Processor performance
  - Memory system performance

The ideal memory is:
  - fast
  - cheap
  - large

We had to amend single cycle because in reality, memory devices aren't asynchronous, but synchronous for both read and write. 
All prcoessors now include cache memory to mitigate against the disparity between processor and memory speed. 
    
In order to make memory accesses fast, we have to exploit the principle of locality.

Temporal Locality:

  • Locality in time
  
  • If data used recently, likely to use it again soon
  
  • How to exploit: keep recently accessed data in higher levels of memory hierarchy
  
Spatial Locality:

  • Locality in space
  
  • If data used recently, likely to use nearby data soon
  
  • How to exploit: when access data, bring

  I successfully implemented a direct-mapped cache with performance monitoring. 

  Firstly, a direct-mapped cache was designed with a cache line of 60 bits:
  
	- 32 (least significant bits) assigned to `DATA` 
 
	- 27 (next significant bits) assigned to `TAG`
 
	- 1 (most significant bit) assigned to `VALID` 

 I decided to use a packet structure to create a clean, organized cache entry structure. This makes the code more maintainable and clearly shows the components of each cache line.
 ```SV
typedef struct packed {
    logic valid;           // Valid bit
    logic [26:0] tag;     // Tag for address comparison
    logic [DATA_WIDTH-1:0] data; // Cached data
} cache_entry;
```

![image](https://github.com/user-attachments/assets/6b7658e2-1c95-4ed2-89a0-e0791c891345)

The data is read from cache if both:

  - the block is valid (`VALID` = 1) 
  - the `TAG` matches the input address signal

The cache implements multiple read modes which support byte loading, halfword loading and word loading. 

```SV
case (AddrMode)
    3'b000: out = {{24{cache_mem[set].data[7]}}, cache_mem[set].data[7:0]};   // LB
    3'b001: out = {{16{cache_mem[set].data[15]}}, cache_mem[set].data[15:0]}; // LH
    3'b010: out = cache_mem[set].data;                                         // LW
```

The cache implements write operations with byte granularity:

```SV
// Write logic
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            // Reset all cache entries
            for (int i = 0; i < 8; i++) begin
                cache_mem[i].valid <= 1'b0;
                cache_mem[i].tag <= 27'b0;
                cache_mem[i].data <= 32'b0;
            end
            // Reset performance counters
            access_counter <= 0;
            hit_counter <= 0;
            miss_counter <= 0;
            hit <= 1'b0;
        end else begin
            // Update performance counters
            // Only update performance counters for load/store operations
            if (AddrMode == 4'b0010 || AddrMode == 4'b0111 || AddrMode == 4'b0000 || AddrMode == 4'b0001 || AddrMode == 4'b0101 || AddrMode == 4'b0110) begin
                access_counter <= access_counter + 1;
                if (cache_mem[set].valid && cache_mem[set].tag == tag) begin
                    hit_counter <= hit_counter + 1; // Cache hit
                end else begin
                    miss_counter <= miss_counter + 1; // Cache miss
                    // Update cache on miss (simulate memory fetch)
                    cache_mem[set].valid <= 1'b1; // Mark as valid
                    cache_mem[set].tag <= tag;    // Update tag
                    cache_mem[set].data <= RD;   // Fetch data from memory
                end
            end

            // Handle write operations
            case (AddrMode)
                4'b0101: begin // SB (store byte)
                    case (byte_offset)
                        2'b00: cache_mem[set].data[7:0]   <= WD[7:0];
                        2'b01: cache_mem[set].data[15:8]  <= WD[7:0];
                        2'b10: cache_mem[set].data[23:16] <= WD[7:0];
                        2'b11: cache_mem[set].data[31:24] <= WD[7:0];
                    endcase
                end
                4'b0110: begin // SH (store halfword)
                    case (byte_offset[1]) // Upper or lower halfword
                        1'b0: cache_mem[set].data[15:0] <= WD[15:0];
                        1'b1: cache_mem[set].data[31:16] <= WD[15:0];
                    endcase
                end
                4'b0111: begin // SW (store word)
                    cache_mem[set].data <= WD;
                end
            endcase
        end
    end
```

After I fully implemented the direct mapped cache, Elson was able to test it and integrate it successfully:

![image](https://github.com/user-attachments/assets/365ed837-3105-4299-9552-04039bc5d0c8)

This cache line maps to the memory addressing of the cache:
| # of Bits | Part | Purpose |
|-|-|-|
| 27 | `TAG` | Identifying data stored in direct-mapped memory |
| 3 | `SET` | Establish and index the cache storage in memory |
| 2 | `BYTE OFFSET` | Accommodate word addressing and byte addressing |

A memory address of 32 bits allows for both modes of addressing, controlled by a signal `AddrMode`. A set size of $2^3 = 8$ allows for fast compact memory.

Finally an internal `HIT` signal was implemented, to ease the debugging, enhance testing and calculate the performance increase specified later in the results.

The cache implements comprehensive performance counters:

```SV
output logic [31:0] total_accesses,
output logic [31:0] total_hits,
output logic [31:0] total_misses
```

A hit occurs when the cache line is valid and the tag matches the incoming address tag:
```SV
if (cache_mem[set].valid && cache_mem[set].tag == tag) begin
    hit_reg = 1'b1;
```

whereas on a miss:
  - the miss counter increments
  - the cache line is updated with new data
  - the cache line is updated with new data
  - the tag is updated

```SV
miss_counter <= miss_counter + 1;
cache_mem[set].valid <= 1'b1;
cache_mem[set].tag <= tag;
cache_mem[set].data <= RD;
```

We also had to make sure to synchronise the hit signal at the end of the module:
```SV
 always_ff @(posedge clk) begin
        hit <= hit_reg;
    end
```

The full code can be located here: [`cache.sv`](../../rtl/cache.sv)

#### Two-way set associative cache

The tag was changed from 27 to 28 bits (to compensate for fewer sets), and the number of sets went from 8 to 4. The cache line was a total of 61 bits: [commit](https://github.com/aa6dcc/RISC-V-Team2/commit/a1d3a1880ebee152cc4fcbb94383289f2a1d46a4)
We also managed to implement a LRU policy:
```SV
logic [NUM_SETS-1:0] lru_bits;  // 0 means way 0 is LRU, 1 means way 1 is LRU
```
which was managed accordingly:
```SV
if (hit) begin
    hit_counter <= hit_counter + 1;
    // Update LRU - mark the other way as LRU
    lru_bits[set] <= ~hit_way;
end
```

The read logic of the two-way set associative cache was as follows:
```SV
for (int i = 0; i < NUM_WAYS; i++) begin
    if (cache[set][i].valid && cache[set][i].tag == tag) begin
        way_hits[i] = 1'b1;
        hit = 1'b1;
        hit_way = i[0:0];
        out = cache[set][i].data;
    end
end
```

The read operation:
  - Checks both ways in parallel
  - Sets hit flags for matching ways
  - Records which way hit for LRU update

On the other hand, the write operation was as follows:
For a miss:
```SV
miss_counter <= miss_counter + 1;
// On miss, update the LRU way
cache[set][lru_bits[set]].data <= RD;
cache[set][lru_bits[set]].valid <= 1'b1;
cache[set][lru_bits[set]].tag <= tag;
```
For a hit:
```SV
if (hit && AddrMode == 3'b111) begin  // Store operation
    case (byte_offset)
        2'b00: cache[set][hit_way].data[7:0] <= WD[7:0];
        // ... other byte offsets
    endcase
end
```
I maintained a write-through policy which updates both cache and memory on an LRU based replacement. 

Compared to the direct-mapped cache, the main improvements were:
  - Conflict Resolution
      - Two ways per set reduce conflict misses
      - LRU policy for intelligent replacement
  - Address Space Mapping
      - Larger tag field (28 bits vs 27 bits)
      - More flexible mapping with two ways
  - Set Organization
      - 4 sets × 2 ways = 8 total cache lines
      - Same total capacity, better utilization

![image](https://github.com/user-attachments/assets/6c9e37fb-a3a4-4239-9b5b-4fa671f2c288)

On the last day, we finally got the two-way cache successfully working, an achievement I am very proud of. 

#### Verification using assembly

In order to test my cache, I used three different assembly files: 
	- [`010-cache_read.s`](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/tb/asm/010-cache_read.s)
 	- [`011-cache_temporal_locality.s`](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/tb/asm/011-cache_temporal_locality.s)
  	- [`012-overwrite_byte.s`](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/tb/asm/012-overwrite_byte.s)

The first file is a cache hit/miss test. It writes sequential values to memory locations and then performs specific read operations designed to test my cache's behavior. By writing to consecutive addresses and then reading them in a specific pattern, it verifies whether my cache correctly identifies hits and misses.

The second file tests memory access patterns and loop behavior. It implements a loop that loads from different memory locations with varying offsets. This tests how my cache handles repeated access to the same memory locations over multiple iterations, particularly useful for verifying the cache's performance with loops and branch instructions.

The third file tests byte-level operations and memory coherency. It writes individual bytes to consecutive memory locations, reads them back as a word, modifies some bytes, and reads again. This verifies that my cache correctly handles byte-level operations and maintains consistency between different types of memory accesses (byte stores vs. word loads).

Together, these test files are a strong tool for the cache implementation, testing different access patterns, data sizes, and cache behaviors. 

### Branch Prediction

#### Two-bit simple dynamic branch predictor

The first step was to gain a strong intuition regarding 5-stage pipelining, but also understanding the program counter and top modules. 

Before implementing the branch predictor, I had to go over the pipelining branch to understand what each signal was doing, what was being implemented at each stage and how/when to fetch, stall, flush or forward.

The pipelining stages in order are:
  - Fetch
  - Decode
  - Execute
  - Memory
  - Writeback

For the fetch stage:
  - Branch predictor makes prediction (pred_taken signal)
  - Program counter uses prediction to speculatively fetch:
      - If pred_taken: PC = PC + ImmOp - pred_taken is for speculative execution, flush is for correction if the speculation was wrong
      - If not pred_taken: PC = PC + 4
   
and for the execute stage:
  - Actual branch outcome (BranchCondE) is compared with prediction
  - On misprediction:
      - PCsrcE set to correct path
      - Flush signal triggered
      - Pipeline flushed to handle misprediction

For the branch prediction module, I set the default state as STRONGLY NOT TAKEN. We had also considered implementing a static predictor with dynamic initial allocation: 
  - Forward branches (positive offset) → Start at WEAKLY_NOT_TAKEN
  - Backward branches (negative offset) → Start at WEAKLY_TAKEN

Prediction is based on the most significant bit (MSB):
  - MSB = 1: Predict taken
  - MSB = 0: Predict not taken

I implemetented the simple dynamic 2-bit branch prediction using historical information for prediction. The logic behind this is: if branch was taken last time, predict will also be taken next time: [commit](https://github.com/aa6dcc/RISC-V-Team2/commit/6bf5a97c89c84997f2d1140afb834e01b31e491c)

We want to maintain a table of branch instructions (called branch target buffer, which includes destination address of branch) and what happened most recently.

I was able to use my knowledge of FSMs thanks to the work I did in lab 3. 

![image](https://github.com/user-attachments/assets/4ce2c804-8c76-414b-809e-1bfebffe659e)

I started by defining the states
```SV
typedef enum logic [1:0] {
    STRONGLY_TAKEN       = 2'b11,
    WEAKLY_TAKEN        = 2'b10,
    WEAKLY_NOT_TAKEN    = 2'b01,
    STRONGLY_NOT_TAKEN  = 2'b00
} state_t;
```
and set the default to STRONGLY_NOT_TAKEN: 
```SV
always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= STRONGLY_NOT_TAKEN; // Reset to strongly not taken
        end else if (branch_valid) begin
            current_state <= next_state;
        end
    end
```
then used simple binary prediction to group states into taken/not taken categories
```SV
always_comb begin
    case (current_state)
        STRONGLY_TAKEN, WEAKLY_TAKEN: prediction = 1;
        WEAKLY_NOT_TAKEN, STRONGLY_NOT_TAKEN: prediction = 0;
```
This is a two-level decision making:
	- First level: Taken vs Not Taken prediction
	- Second level: Strong vs Weak confidence
 with a conservative transition strategy:
 	- States change gradually (strong → weak → opposite)
	- Requires multiple mispredictions to completely change prediction

 ![image](https://github.com/user-attachments/assets/ecd59193-6644-41a8-aa9c-d83ead6e0264)

The branch predictor I fully implemented was fully tested by Elson's testbench, unfortunately we didn't have time to fully integrate it.

![image](https://github.com/aa6dcc/RISC-V-Team2/commit/28ca6bac0710ecb4394eee240b3122a09837c235)

#### Integration

In order to try and integrate the 2-bit branch predictor, I had to make changes to the program counter and top module. 

For the program counter, I implemented a two-level MUX:
    - First choose based on prediction
    - Then override with PCsrcE if prediction was wrong

Here we can see the edited program counter module which accounts for branch prediction and imports signals from pipelining such as stall. 

![image](https://github.com/user-attachments/assets/7645b9a2-9c57-4b4c-a0b7-ccb6c5900c5f)

Within the top module adjusted for branch prediction:

![image](https://github.com/user-attachments/assets/f586d0bc-fb26-45a5-b4ea-66a5e642a9c4)

I added two new signals:

// Branch Prediction signals

logic pred_taken;         // From predictor: tells if branch predicted taken

logic prediction_wrong;   // Indicates if prediction was incorrect

and the PCSrcE logic was altered: 

![image](https://github.com/user-attachments/assets/a20510a6-5f12-4932-ae97-b4d2f2d7e2d6)

I also added a flush signal to the hazard unit:

.flush(flush | prediction_wrong)  // Added prediction_wrong to flush

After using new signals, we had to update the actual branch prediction module and we obtained:

![image](https://github.com/user-attachments/assets/a80e4b7d-e599-49cd-a211-83c7dcb9d968)

I also had to edit the state transition logic:

![image](https://github.com/user-attachments/assets/4eb893c6-e408-49ba-a4a4-f2ef655f64b5)

and use the BranchCondE signal:

![image](https://github.com/user-attachments/assets/3a935c2a-f37a-4a04-a348-148a9d60b24d)

The draft modules I made can be found here:
	- [branch_prediction.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/extra/branch_prediction_draft.sv)
 	- [PC_branch_prediction.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/extra/PC_branch_prediction.sv)
  	- [top_branch_prediction.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/extra/top_branch_prediction.sv)

#### Testing via assembly 

I also used the following assembly file to test my branch prediction module. 
```ASM
main:
  addi s1, zero, 0    #s1 = sum = 0
  addi s0, zero, 0    #s0 = i = 0
  addi t0, zero, 10   #t0 = 10
  
for: //looped 10 times
  bge s0, t0, done    #i>=10
  add s1, s1, s0      #sum = sum + i
  addi s0, s0, 1      #i = i + 1
  j for               #repeat loop

done: 
```
This assembly code implements a simple for loop that calculates the sum of numbers from 0 to 9 (first 10 natural numbers).
It initializes three registers:
	- s1 is initialized to 0 (will hold the running sum)
	- s0 is initialized to 0 (loop counter i)
	- t0 is set to 10 (loop boundary)

The loop:
	- Uses bge (branch if greater or equal) to check if i >= 10
	- Adds the current counter value to the sum (s1 = s1 + s0)
	- Increments the counter
	- Jumps back to loop start

## What I learned
- Using learning materials correctly: "Digital Design and Computer Architecture", online courses, videos, lecture slides...
- Working as a team, planning work in advance
- Gained technical skills whilst integrating the different modules, writing testbenches for each of them, debugging each module...
- Learnt to use Git (first experience with source control for me, and I got to merge branches, clone repos, edit commits...) and Linux
- I learnt extensively about RISC-V architecture, how the different units behave and work together
- I considerably increased my skills in SystemVerilog and hardware design in general
- Learnt the importance of debugging and learning how to use different tools to do so

## Mistakes I made
- Syntax errors (forgetting newlines, getting the number of bits wrong...)
- Name github commits better, use co-authoring
- Took some time for me to learn the importance of teamwork and helping one another

Case study - `AddrMode in cache.sv`:

```SV
case (AddrMode)
                4'b0101: begin // SB (store byte)
                    case (byte_offset)
                        2'b00: cache_mem[set].data[7:0]   <= WD[7:0];
                        2'b01: cache_mem[set].data[15:8]  <= WD[7:0];
                        2'b10: cache_mem[set].data[23:16] <= WD[7:0];
                        2'b11: cache_mem[set].data[31:24] <= WD[7:0];
                    endcase
                end
                4'b0110: begin // SH (store halfword)
                    case (byte_offset[1]) // Upper or lower halfword
                        1'b0: cache_mem[set].data[15:0] <= WD[15:0];
                        1'b1: cache_mem[set].data[31:16] <= WD[15:0];
                    endcase
                end
                4'b0111: begin // SW (store word)
                    cache_mem[set].data <= WD;
                end
            endcase
```

I initially made a draft for `cache.sv` in which the AddrMode signal was only 3 bits, but later amended it to 4 for several reasons.

The 4-bit encoding gives me 16 possible operation types versus 8 with 3 bits, providing more flexibility in operation encoding and making the control logic clearer by having distinct patterns for each operation type.
This was particularly important when I needed to distinguish between:
	- Operation type (load/store)
	- Data width (byte/halfword/word)
	- Sign extension (signed/unsigned for loads)

 This amendment allowed me to debug `cache.sv` and hence successfully implement the direct-mapped cache. 

## What I would do differently
- Do background research before the project
- Set goals in advance
- Create a clear timeline to follow
- I would've loved to have a bit more time to try fully implementing my integrated branch prediction, as well as running our CPU on an FPGA and having a go at cache netting
