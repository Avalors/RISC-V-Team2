# Personal Statement: Elson Tho

**Name:** Elson Tho  

**CID:** 02381489 

**Github username:** 3lson  

_______________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________

## Overview 

- [Summary of Contributions](#summary)
    - [Lab 4](#lab-4)
        - [ALU](#alu-and-register-file)
        - [Register File](#alu-and-register-file)
        - [Control Unit](#control-unit)
        - [Bookkepping, debugging and instruction memory](#bookkeepping-and-instruction-memory)
    - [Single Cycle](#Single-cycle)
        - [F1 Lights](#f1-lights)
        - [Illustration of expected pdf graphs](#python-pdf-graphs)
        - [Pdf Testing](#pdf-testing)
    - [Pipeline](#pipeline)
        - [Pipeline registers and Hazard Unit Foundation](#pipeline)
    - [Full ISA](#Full-ISA)
        - [Full RV32I implemented](#full-rv32i-implemented)
    - [Cache](#Cache)
        - [Testing DM_Cache](#dm-cache)
        - [Testing TW_Cache](#tw-cache)
    - [Branch Prediction](#branch-predicition)
        - [Branch Prediction Testing](#branch-predicition-testing)
- [What I learned](#what-i-learned)
- [Mistakes I made](#mistakes-i-made)
- [What I would do differently](#what-i-would-do-differently)

## Summary

- I was responsible for the **ALU**, **Control Unit**, **RegisterFile**, and **InstrMem** modules and writing the respective **testbenches** for them
- I was also responsible to doing the testbenching for the **cache** and **branch prediction** modules
- I was in charge of implementing the **complete RV32I instruction set** and did testbenching with assembly codes for every instruction. 

- I was responsible for team debugging both in person and online using the VS Code Live Share feature. This allowed me to directly contribute by editing code on my teammates' IDEs during collaboration sessions, although some commits were made by them.

- I also introduced the VSCode Liveshare feature to my team for us to work more efficiently on one IDE during debugging sessions

## Contributions

### Lab 4

#### ALU and Register File
- [RegisterFile, ALU, and MUX done](https://github.com/aa6dcc/RISC-V-Team2/commit/c84f24871c5a7911610828e2e62cf69224e74bcf)

I mainly added the module implementations for the alu, registerfile, and the alu mux based on the diagram in Lab4

```SV
    always_comb begin
        // Perform addition operation
        SUM = ALUop1 + ALUop2;

        // Set EQ flag to 1 if ALUop1 is equal to ALUop2, otherwise 0
        EQ = (ALUop1 == ALUop2);
    end
```
- **ALU**: ALU performs arithmetic and logical operations. In this implementation, we focus on:
    - Addition of two 32-bit operands
    - Equality comparison to toggle a flag for branch decisions
    - Features:
        - Combinational Logic: Uses `always_comb` to ensure purely combinational behaviour
        - Addition: adds two 32-bit operands and outputs the result
        - Equality Flag: Sets the `EQ` flag to `1` if operands are equal, otherwise `0`
     
```SV
    logic [31:0] register [31:0]; // Register array: 32 registers, each 32 bits wide

    assign RD1 = register[AD1];   // Read data from register[AD1]
    assign RD2 = register[AD2];   // Read data from register[AD2]

    always_ff @(posedge clk) begin
        if (WE3 && AD3 != 5'b0) begin
            register[AD3] <= WD3;  // Write to register AD3
        end
    end
```

- **RegisterFile**: A memory array consisting of 32 registers, each 32 bits wide. This version supports:
    - Two read ports to read data from register asynchronously
    - One write port to write data into a register synchronously on the rising edge of the clock


**Design Considerations**:
Below are some  explanations of the implementation I decided to use for my modules

1. **Zero Register Protection:**
- The zero register (`x0`) is hardwired to `0` and cannot be modified. This behaviour is enforced by the condition `AD3 != 5'b0` in the RegisterFile
2. **Combinational vs Sequential Logic:**
   - The ALU uses `always_comb` for purely combinational operations.
   - The `RegisterFile` uses `always_ff` to ensure synchronous updates to the registers.
3. **Expandability:**
   - Additional ALU operations (e.g., subtraction, bitwise operations) can be added by extending the `always_comb` block in the ALU.

 
#### Control Unit 
- [Added controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5fa1a412a6342c5cc21ca651c8444c2814a2f9e5)
- [Fixed the control unit testbench and brought in the new doit.sh script](https://github.com/aa6dcc/RISC-V-Team2/commit/5773432255b8a4a536ed3b52fe3cfc900075aa9f)

```SV
    always_comb begin
        RegWrite = 0;
        ALUsrc = 0;
        ImmSrc = 2'b00;
        PCsrc = 0;    
        ALUctrl = 3'b000; 
        case (opcode)
            7'b0010011: begin // addi (I-type)
                RegWrite = 1;
                ALUsrc = 1; 
                ImmSrc = 2'b00; 
                PCsrc = 0; 
                ALUctrl = 3'b000; 
            end
            7'b1100011: begin // bne (B-type)
                RegWrite = 0;
                ALUsrc = 0; 
                ImmSrc = 2'b01; 
                PCsrc = EQ ? 0 : 1; 
                ALUctrl = 3'b001; 
            end
            default: begin
                RegWrite = 0;
                ALUsrc = 0;
                ImmSrc = 2'b00;
                PCsrc = 0;
                ALUctrl = 3'b000;
            end
        endcase
    end
```

Features:
- Opcode Decoding: Handles I-type (`addi`) and B-type (`bne`) instructions
- Control Signals: Generating signals to control ALU operatiosn, register writes, immediate source selection and program counter branching
- Default behaviour of the control signals when opcode is unrecognised


#### Bookkeeping and instruction memory
- [Restructure folder](https://github.com/aa6dcc/RISC-V-Team2/commit/f9f399da2d43315a25bb588428c69cf0d946753d)
- [Added .gitignore to ignore large files and gave our team merge conflicts](https://github.com/aa6dcc/RISC-V-Team2/commit/9af8479508d7274a99b07ba0c5b31bc86df42bb3)

**Bookkeeping:**
- **Folder Restructuring:** Reorganized folders for better maintainability.
- **`.gitignore` Additions:** Prevents large files and temporary build artifacts (e.g., `obj_dir`) from causing merge conflicts.
- **Team Collaboration:** Debugging and testing were performed collaboratively using VSCode Live Share.

- [Worked on Antoine's Liveshare of VSCode as a team for debugging and testbenching](https://github.com/aa6dcc/RISC-V-Team2/commit/e3fd87fdfd4d9f00b7447949e95964d28db9bb20#diff-9b9a6efe51731ef72a27f44c26c78fb4b1e55f3e88676bf0140041f7af99e2ee): For more detail and evidence see [Team Log (27/11)](../logbooks/team_log.md#team-meetup-27-11).
- [Instruction Memory implementation and Lab 4 debugging: Counter fully working](https://github.com/aa6dcc/RISC-V-Team2/commit/edc939dadaaca6523c7ef921765ea0f2ed3c03f0): For more detail and evidence see [Team Log (30/11)](../logbooks/team_log.md#team-meetup-30-11).

**Debugging:** Debugging here was mainly done through liveshare of VSCode on my team members IDE as it made it easier for us as a team to work together in debugging and observe the changes immediately on gtkwave.

**Instruction Memory**: During the second debugging session on (30/11) I implemented the instruction memory on the side on Ahmed's liveshare VScode IDE which was aimed to replace the `rom.sv` as this new module would instead read directly from a file called `program.hex` which is written into by `compile.sh` when it compiles an assembly code. I also wrote the respective testbench for this and swapped out the row with instruction memory on the top level integration which worked correctly. 
Features:
- **File-Based Initialization:** Loads instructions from `program.hex` during simulation.
- **32-bit Instruction Fetch:** Combines 4 bytes from memory into a single 32-bit instruction.
- **Parameterization:** Supports configurable address and data widths for flexibility.

```SV
initial begin
    $display("Loading program into instruction memory...");
    $readmemh("../rtl/program.hex", array);
end
```

### Single-Cycle

#### F1 Lights
- [F1Lights asm code and testbench foundation](https://github.com/aa6dcc/RISC-V-Team2/commit/0a6c948daec468a1f3c2d683eaa48e9bb5bda528
- [Completed F1Light verification and Vbuddy simulation](https://github.com/aa6dcc/RISC-V-Team2/commit/1a246636d7341bde9bddb56b764e818dfad377fd)

Here I implemented the assembly code to simulate the F1 lights. The though process I had was to essentially write to the output `a0` adding in the following way:

```ASM
    addi 	a0, zero, 0x1
    addi 	a0, zero, 0x3
    addi 	a0, zero, 0x7
    addi 	a0, zero, 0xf
    addi 	a0, zero, 0x1f
    addi 	a0, zero, 0x3f
    addi 	a0, zero, 0x7f
    addi 	a0, zero, 0xff
    addi 	a0, zero, 0x00
```

The idea was essentially to write to each of the 8 LED lights at each `addi` instruction whilst keeping the previous lights still on.
So imagine our code above it would look something like this:
1) `a0` before any `addi` instructions 0000 0000
2) `addi a0, zero, 0x1` gives 0000 0001
3) `addi a0, zero, 0x3` gives 0000 0011
4) This will continue until 1111 1111 before in next state it turns off 

I also implemented the respective testbench for this and connection to Vbuddy.

Future Work:
A randomiser for the lights to randomly switch them off was planned but not implemented due to time constraints

#### Python PDF Graphs 
- [Added graphs.py to just illustrate our expected graphs for pdf](https://github.com/aa6dcc/RISC-V-Team2/commit/7ad78983211d06f3bb87f3062504e860277b382c)

Python us used to generate four distinct datasets: Gaussian, Sine, Triangle, and Noisy. The datasets are visualised using Plotly to provide interactive graphs.

```python
import numpy as np
import plotly.graph_objects as go
from plotly.subplots import make_subplots

# Generate datasets
gaussian_data = np.random.normal(loc=125, scale=25, size=10000)
sine_data = (np.sin(2 * np.pi * np.linspace(0, 250, 1000) / 50) + 1) * 100
triangle_data = np.abs(np.arange(0, 250, 1) % 100 - 50)
noisy_data = sine_data + np.random.normal(loc=0, scale=20, size=len(sine_data))

# Create subplots and add traces
fig = make_subplots(rows=2, cols=2, subplot_titles=["Gaussian", "Sine", "Triangle", "Noisy"])
fig.add_trace(go.Scatter(x=np.histogram(gaussian_data, bins=100)[1][:-1], y=np.histogram(gaussian_data, bins=100)[0], mode='lines', name='Gaussian'), row=1, col=1)
fig.add_trace(go.Scatter(x=np.arange(len(sine_data)), y=sine_data, mode='lines', name='Sine'), row=1, col=2)
fig.add_trace(go.Scatter(x=np.arange(len(triangle_data)), y=triangle_data, mode='lines', name='Triangle'), row=2, col=1)
fig.add_trace(go.Scatter(x=np.histogram(noisy_data, bins=100)[1][:-1], y=np.histogram(noisy_data, bins=100)[0], mode='lines', name='Noisy'), row=2, col=2)

# Update layout and show figure
fig.update_layout(title="Line Graphs for Different Datasets", height=800, width=900, showlegend=False)
fig.show()
```

1. Gaussian Data: Data generated using a normal distribution with a mean of 125 and a standard deviation of 25
2. Sine Data: A sine wave is generated and sacled to oscillate between 0 and 200, simulating periodic data
3. Triangle Data: A triangular wave is created using the modulo operation on a range of values
4. A sine wave with added Gaussian noise is generated to simulate noisy real-world data

#### PDF Testing 
- [PDF fully tested with data/.mem files](https://github.com/aa6dcc/RISC-V-Team2/commit/bd1db301e6254e29d24291ed513287c550939ff7)

Testing the PDF: The PDF functionality was fully tested using .mem data files. These files contain memory-stored values, and the functionality was verified by simulating them on Vbuddy.

File Restructuring: To ensure a clean workflow, several files were restructured for better organization during the testing process.

### Pipeline

- [Pipelining registers implemented and started the hazard unit](https://github.com/aa6dcc/RISC-V-Team2/commit/34617373aca98c16134c2862ff86bcb8c228c509)
- [Added WR3Src signal into pipeline](https://github.com/aa6dcc/RISC-V-Team2/commit/47a367c96ebce4d240b61f4a011d2dea61e3c596)
- [Fixed minor signals spelling bugs: still not functional
](https://github.com/aa6dcc/RISC-V-Team2/commit/d3df6d10afd85b6dbf4cccfc0d6f6bc7fa467649)

<img width="1016" alt="Screenshot 2024-12-13 at 8 50 56 PM" src="https://github.com/user-attachments/assets/40893f4b-4578-4712-9800-91f6d161942b" />

In a five-stage pipeline architecture, instructions are executed in multiple stages, with each stage handling a different part of the instruction processing. The five stages typically consist of:

1. Instruction Fetch (IF): Fetch the instruction from memory.
2. Instruction Decode (ID): Decode the instruction and read registers.
3. Execution (EX): Perform arithmetic or logical operations, or calculate the address for memory operations.
4. Memory Access (MEM): Access memory if the instruction involves reading or writing to memory.
5. Write Back (WB): Write the result of the operation back to the register file.

My main responsibility was to establish the foundation for the pipeline registers that link these five stages together. Here's a more detailed breakdown of the process:

1. Pipeline Registers:
A pipeline register is introduced between each stage (IF, ID, EX, MEM, and WB) to store data and control signals between the stages.
These registers ensure that each stage can work on a different instruction simultaneously without conflicts, allowing multiple instructions to be in progress at different stages in the pipeline.
I was responsible for creating the initial design and mapping of these pipeline registers, which transfer critical information like instruction data, ALU results, and control signals from one stage to the next.

2. Mapping Signals:
Each pipeline register holds specific signals for each stage. For example:
The IF/ID register holds the instruction fetched during the IF stage and passes it to the ID stage.
The ID/EX register holds the decoded instruction and registers' values, forwarding them to the EX stage.
The EX/MEM register holds the ALU result or memory address and forwards it to the MEM stage.
The MEM/WB register holds the result from the MEM stage, which is then written back to the register file during the WB stage.
These mappings ensure that the correct information flows between the stages without any overlap or conflict.

3. Hazard Unit Foundation:
Although the hazard unit (which handles data hazards, control hazards, and structural hazards) was not fully implemented by me, I laid the groundwork for it. By implementing the pipeline registers, I helped set up the structure that would later allow the hazard unit to monitor and manage dependencies between instructions.
For example, data hazards can occur when an instruction in the pipeline depends on a result from a previous instruction that has not yet completed. The pipeline registers store intermediate results, which is crucial for detecting and handling such hazards.

### Full-ISA

#### Full RV32I Implemented
- [Added all R-type instr and verification, added the rest of I, J, U, B in controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5eccb99f8b08752ab7b98ed65e42157b3a14a190)
- [Completed full RV32I instructions and testbench and asm code for verification](https://github.com/aa6dcc/RISC-V-Team2/commit/14e4e17063317b12e1dfb36917cbb79eb7aec45a)

**Overview**
In this implementation, I was responsible for testing a set of RV32I instructions, including arithmetic operations, logical operations, shift operations, and comparisons. The goal was to ensure that each instruction behaves as expected, which was verified through a series of tests in assembly code.

Each test performs an operation and then checks whether the result matches an expected value. If the result matches, the program proceeds to the next test; otherwise, it jumps to a fail block. If all tests pass, the program ends successfully, indicating success with a special value (150).

<img width="547" alt="FullRV32I" src="https://github.com/user-attachments/assets/d114aaa6-9fb9-421b-b083-97e6cf5a3f15" />

**Test Sequence**
The tests are organized sequentially, where each test checks a different RV32I instruction. Below is a breakdown one sample of the assembly code for R-type instructions:

```ASM
addi a0, zero, 32         # a0 = 32
addi a0, a0, 101          # a0 = 32 + 101 = 133
addi a1, zero, 52         # a1 = 52
addi a1, a1, 61           # a1 = 52 + 61 = 113
add a0, a0, a1            # a0 = 133 + 113 = 246
```

Purpose: Test addition of positive integers.
Expected Result: a0 = 246
The program compares a0 to the expected value 246 using bne (branch if not equal) to check if the calculation is correct.

```ASM
addi a0, zero, -32        # a0 = -32
addi a0, a0, -101         # a0 = -32 - 101 = -133
addi a1, zero, -52        # a1 = -52
addi a1, a1, -61          # a1 = -52 - 61 = -113
add a0, a0, a1            # a0 = -133 - 113 = -246
```

Purpose: Test addition of negative integers.
Expected Result: a0 = -246
The program checks if the result of the addition of two negative numbers is correct.

And so on.. for the rest of the tests till:
**Failure Handling**
For each test, if the result doesn't match the expected value, the program will jump to the fail_test label and set a0 to -1, indicating that the test has failed. If all tests pass, the program jumps to the success_test label, setting a0 to 150 as an indication of success.

For more detail please refer to the Full RV32I and assembly code testing in the [Single-Cycle.md](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/team_statement_sections/single_cycle_statement.md)

### Cache

#### DM cache
Here I worked on a initial testing branch for cache branched from Single-Cycle whilst pipeline was still in development. Then I synced the cache modules to be integrated into the full pipeline RV32I

- [Edited direct mapped cache.sv, added testbenches and asm code for testing](https://github.com/aa6dcc/RISC-V-Team2/commit/7a61fd2918b27e52af0d4cc86411fd7ff472ffdd)
- [Direct-mapped cache completed](https://github.com/aa6dcc/RISC-V-Team2/commit/ca013aad029b479c8335ec7aebd2990b17f65c63)
- [Merged full pipeline RV32I onto DM cache and tested a TW cache: TW cache not completely successful yet
](https://github.com/aa6dcc/RISC-V-Team2/commit/c118a1d49282d4a143e912e7bd6a1d6fee3edfa4)

I was mainly responsible for doing the testbenching for the direct mapped cache as well as top-level integration of the cache module. For more evidence please refer to the testing and testbenching section in [cache_statement.md](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/team_statement_sections/cache_statement.md)

**Cache Testing Procedure**:
1. Initial Testing (Before Integration):

<img width="790" alt="Cache" src="https://github.com/user-attachments/assets/1d0412b0-cc71-4539-8e5d-d7ecb945931b" />

I initially tested the cache as an independent module, verifying how it handles memory accesses (reads and writes).

By using specific test code, I monitored cache hits and misses. For example, if I executed a store instruction followed by a load instruction, the cache would miss on the first access (store), but the subsequent load would hit, demonstrating temporal locality.

3. Hit and Miss Analysis:
During testing, the results showed that the cache experienced:

<img width="692" alt="Screenshot 2024-12-13 at 5 45 17 PM" src="https://github.com/user-attachments/assets/5d15187c-4285-40c9-9491-de1e9a8b1822" />

4 misses and 3 hits when using the store instructions.
This was because the store instructions caused the cache to miss, but subsequent loads from the same address hit due to temporal locality (i.e., data is reused shortly after it is written).
Upon further investigation, I found that if you preloaded data in the program.hex file (which initializes memory), the cache hit behavior improved:

<img width="691" alt="Screenshot 2024-12-13 at 5 45 28 PM" src="https://github.com/user-attachments/assets/f8b5a292-981f-4df4-af46-3f6079d2044a" />

2 hits and 1 miss were observed, which matched the expected behavior.
The first load instruction resulted in a miss, but the second load instruction hit, demonstrating spatial locality (i.e., nearby memory locations are likely to be accessed soon after).

4. Integration Testing with Full Pipeline:
After ensuring the cache worked on its own, I integrated the direct-mapped cache with the full RV32I pipeline, running tests to ensure the cache interacts properly within the context of the complete processor pipeline.

5. Test Results and Observations:
I was able to observe cache behavior through tools like gtkwave, which allowed me to visualize cache accesses in terms of hits and misses.
For example, when I executed store/load instructions, I could see the cache miss initially due to the store, but subsequent loads would hit, confirming the expected behavior based on the locality principles.


#### TW Cache

- [Completed a new test to show TW cache working](https://github.com/aa6dcc/RISC-V-Team2/commit/5b7e1cb20ec2663d99f11d20c90e06a9060b265f)

[Individual level](../../tb/test/tw_cache_tb.cpp)

<img width="429" alt="Screenshot 2024-12-13 at 11 45 30 PM" src="https://github.com/user-attachments/assets/f0748a6d-f4c6-487e-be1c-be1da0fa0fb5" />


```C
TEST_F(TwoWayCacheTestbench, CacheHitTest) {
    top->reset = 1;
    runSimulation(1);
    top->reset = 0;
    runSimulation(1);

    int address = 0x20;
    int writeData = 0xABCD1234;

    // Write
    top->AddrMode = 7; // Store word
    top->A = address;
    top->WD = writeData;
    runSimulation(2);

    // Read
    top->AddrMode = 2; // Load word
    top->A = address;
    runSimulation(2);

    EXPECT_EQ(top->hit, 1);
    EXPECT_EQ(top->out, writeData);
}
```

This test was used to test a hit.

```C
TEST_F(TwoWayCacheTestbench, CacheMissAndLRUTest) {
    top->reset = 1;
    runSimulation(1);
    top->reset = 0;
    runSimulation(1);

    int addr1 = 0x10, addr2 = 0x20, addr3 = 0x30;
    int data1 = 0xDEADBEEF, data2 = 0xBAADF00D, data3 = 0xFEEDFACE;

    // Write to way 0
    top->AddrMode = 7;
    top->A = addr1;
    top->WD = data1;
    runSimulation(2);

    // Write to way 1
    top->AddrMode = 7;
    top->A = addr2;
    top->WD = data2;
    runSimulation(2);

    // Write triggers LRU replacement
    top->AddrMode = 7;
    top->A = addr3;
    top->WD = data3;
    runSimulation(2);

    // Read addr1 (miss, since it was evicted)
    top->AddrMode = 2;
    top->A = addr1;
    runSimulation(2);
    EXPECT_EQ(top->hit, 0) << "Expected miss for addr1";

    // Read addr2 (hit, still in way 1)
    top->AddrMode = 2;
    top->A = addr2;
    runSimulation(2);
    EXPECT_EQ(top->hit, 1) << "Expected hit for addr2";
    EXPECT_EQ(top->out, data2) << "Expected data2";

    // Read addr3 (hit, replaced way 0)
    top->AddrMode = 2;
    top->A = addr3;
    runSimulation(2);
    EXPECT_EQ(top->hit, 1) << "Expected hit for addr3";
    EXPECT_EQ(top->out, data3) << "Expected data3";
}
```

This was to test the miss and lru implementation. 


[Top-level integration](../../tb/top_cache_tb.cpp)
**eviction.s**
```ASM
main:
    # Initialize base addresses
    la x10, 0x0         # Base address in memory
    li x13, 0x1         # Data to write

    # Write data to addresses that cause conflicts in direct-mapped cache
    # Assuming cache has 8 sets in direct-mapped (3 index bits)
    # Addresses: 0x0, 0x40, 0x80 all map to the same set in direct-mapped cache
    sw x13, 0(x10)      # Write 0x1 to address 0x0
    addi x13, x13, 0x1  # Increment data
    sw x13, 64(x10)     # Write 0x2 to address 0x40
    addi x13, x13, 0x1  # Increment data
    sw x13, 128(x10)    # Write 0x3 to address 0x80

    # Read data back to test cache behavior
    lb x11, 0(x10)      # Read address 0x0 (expect miss in direct-mapped due to eviction)
    lb x11, 64(x10)     # Read address 0x40 (expect hit in two-way, miss in direct-mapped)
    lb x11, 128(x10)    # Read address 0x80 (expect hit in two-way, miss in direct-mapped)
    lb x11, 0(x10)      # Read address 0x0 again (miss in direct-mapped, hit in two-way)

    # Introduce additional accesses to force conflicts and evictions
    addi x13, x13, 0x1
    sw x13, 192(x10)    # Write 0x4 to address 0xC0 (maps to same set in direct-mapped)

    lb x11, 64(x10)     # Read address 0x40 (expect eviction in direct-mapped)
    lb x11, 128(x10)    # Read address 0x80 (expect hit in two-way, miss in direct-mapped)

    # End program
    nop
    nop
```

This assembly code tests cache behavior by writing data to memory locations that cause conflicts in a direct-mapped cache and observing how a two-way set-associative cache handles these conflicts. The code writes to addresses that map to the same cache set, causing evictions in the direct-mapped cache, which results in misses.

In the direct-mapped cache, only one address can be stored per set, so writing multiple addresses to the same set leads to conflict misses. In the two-way cache, two addresses can be stored in the same set, reducing conflict misses and allowing for hits when reading back data. This demonstrates that the two-way cache handles conflicts better, resulting in fewer misses compared to the direct-mapped cache.

<img width="766" alt="Screenshot 2024-12-13 at 11 32 00 PM" src="https://github.com/user-attachments/assets/3f5be026-bbe7-4d4a-a946-efd7ad0e46b9" />

**Direct-Mapped Cache**
- Expected Outcome: A high miss rate due to conflicts, as the cache has only one slot per set (direct-mapped).
- Tested Addresses: The addresses 0x0, 0x40, 0x80, and 0xC0 all map to the same cache set. This causes evictions when new data is written to the cache, resulting in misses.
- Result: The direct-mapped cache experienced 0 hits and 10 misses, indicating a poor cache hit rate due to conflict misses (evictions).


<img width="777" alt="Screenshot 2024-12-13 at 11 35 45 PM" src="https://github.com/user-attachments/assets/906ece55-8cdd-491d-8323-6fa2ba3017d9" />

**Two-Way Set Associative Cache**
- Expected Outcome: With two ways per set, the two-way associative cache should exhibit fewer conflict misses compared to the direct-mapped cache. Two addresses within a set can co-exist without causing eviction, allowing better cache performance.
- Tested Addresses: The same addresses (0x0, 0x40, 0x80, 0xC0) were used, but now each set can hold two addresses before evicting, allowing for more hits.
- Result: The two-way set associative cache experienced 3 hits and 7 misses, indicating an improvement in hit rate due to the reduced conflict misses. This result is better than the direct-mapped cache, as the associative nature allows more addresses to co-exist in the same set, reducing the number of forced evictions.


**Why the Two-Way Cache Has Fewer Misses**
Conflict Reduction: In the direct-mapped cache, each set can only hold one block of data. If multiple addresses map to the same set, previous entries are evicted, causing more misses. The two-way cache can hold two blocks per set, allowing multiple addresses to be stored in the same set and thus reducing conflicts.
Cache Behavior: In the assembly code, after writing to the first address (0x0), a second write to 0x40 causes a conflict in the direct-mapped cache but would not cause a conflict in the two-way cache, as both 0x0 and 0x40 can coexist in the same set.


### Branch Prediction

#### Branch Prediciton Testing
- [Completed branch prediction testbench and tested: Works as individual module](https://github.com/aa6dcc/RISC-V-Team2/commit/86b56e701d798e3d486f71c5a5f6acf23f11edd5)

<img width="477" alt="Screenshot 2024-12-11 at 10 02 47 PM" src="https://github.com/user-attachments/assets/4b8c230f-a4ec-46de-9756-8a4edd48b53a" />

I designed the testbench using the Google Test framework, coupled with a custom simulation environment (sync_testbench.h). This allowed me to create a structured and repeatable set of tests for the branch predictor module. The primary objectives of the testbench were to verify:

- Reset behavior: Ensuring the branch predictor initializes to a known state.
- State transitions: Testing transitions across all states in the state machine, including edge cases.
- Prediction accuracy: Validating the correctness of the predictions against expected outcomes.

**Test Cases**
1. Reset Behavior Test
The goal of this test was to confirm that the branch predictor initializes to the STRONGLY_NOT_TAKEN state after a reset. I simulated the system for one cycle with the reset signal active and checked if the predictor's output (top->prediction) was 0 (indicating STRONGLY_NOT_TAKEN).

```C
TEST_F(BranchPredictorTestbench, ResetBehaviorTest)
{
    runSimulation(1);

    // Ensure predictor starts in STRONGLY_NOT_TAKEN state
    EXPECT_EQ(top->prediction, 0);

    top->reset = 0;
    runSimulation(1); // Allow the system to stabilize
}
```

2. State Transition Test
This test was designed to validate the predictor’s state machine transitions. By toggling the branch_taken signal and observing the prediction, I confirmed the correctness of transitions between states:

STRONGLY_NOT_TAKEN → WEAKLY_NOT_TAKEN
WEAKLY_NOT_TAKEN → WEAKLY_TAKEN
WEAKLY_TAKEN → STRONGLY_TAKEN
And the reverse transitions for not-taken branches.

```C
TEST_F(BranchPredictorTestbench, StateTransitionTest)
{
    top->reset = 0;
    top->branch_valid = 1;

    // STRONGLY_NOT_TAKEN to WEAKLY_NOT_TAKEN
    top->branch_taken = 1;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 0);

    // WEAKLY_NOT_TAKEN to WEAKLY_TAKEN
    top->branch_taken = 1;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 1);

    // WEAKLY_TAKEN to STRONGLY_TAKEN
    top->branch_taken = 1;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 1);

    // Test reverse transitions for not-taken branches...
}
```

3. Prediction Accuracy Test
To test prediction accuracy, I ran a sequence of branch instructions with alternating outcomes. This ensured the predictor adapted correctly to both taken and not-taken branches, transitioning through the states as expected. I also included multiple cycles (runSimulation(2)) to allow the state machine to stabilize after each branch outcome.

```C
TEST_F(BranchPredictorTestbench, PredictionAccuracyTest)
{
    top->reset = 0;
    top->branch_valid = 1;

    // Initial state: STRONGLY_NOT_TAKEN
    EXPECT_EQ(top->prediction, 0);

    // Branch taken twice, moving to STRONGLY_TAKEN
    top->branch_taken = 1;
    runSimulation(2);
    EXPECT_EQ(top->prediction, 1);

    // Branch not taken twice, moving back to STRONGLY_NOT_TAKEN
    top->branch_taken = 0;
    runSimulation(2);
    EXPECT_EQ(top->prediction, 0);
}
```

## What I learned

This project has been a valuable learning experience for me, where I gained a strong understanding of several core areas:

1. HDL & SystemVerilog:
Working with hardware description languages (HDL) like SystemVerilog gave me the skills to design and model digital systems, which was crucial for our processor implementation. I learned how to describe and simulate hardware behavior, creating modules and integrating them into a functioning processor.

2. RISC-V ISA (RV32I):
Through the implementation of the RV32I instruction set architecture (ISA), I got hands-on experience with understanding how a CPU processes instructions, how different types of instructions are encoded, and how the control unit interacts with them. This deepened my understanding of both low-level hardware design and processor architecture.

3. Testing Framework & Debugging:
I learned how to create a testing framework that is efficient for verifying the functionality of a complex system like a processor. In particular, I found working with gtkwave to visualize waveforms extremely useful. By analyzing the signals, I could pinpoint where errors or incorrect behaviors were occurring, which helped me quickly identify and fix issues in the design. This tool significantly improved my debugging process and gave me more confidence in my work.

4. Team Communication:
Effective communication was key to our team's success. We met regularly, both online and in-person, allowing us to share updates, ask questions, and offer help when needed. This collaboration was essential for keeping our work aligned and addressing challenges as they arose.


## Mistakes I made

1. Incorrect RET Instruction Implementation:
One major mistake I made was not properly implementing the RET instruction in the control unit. This led to significant issues, particularly with the JALR functionality. The lack of a proper RET implementation caused the processor to behave incorrectly when trying to execute return addresses in the JALR instruction. This issue was eventually fixed with the help of Ahmed (@Avalors), who identified the problem and helped me implement the necessary fixes: [pdf fixes: added JALR functionality, RET fix and PC + 4 store for J-type instructions](https://github.com/aa6dcc/RISC-V-Team2/commit/7f4978e6a998b1457e97a4bbc045055ee32e84be)
- Reflection: This issue likely arose from insufficient discussions regarding the specific instructions needed for our test cases. The control unit I initially designed was tailored for simpler functionality (Lab 4 Counter and F1 Lights) and didn’t fully consider all the requirements for JALR and RET. I should have been more proactive in adding comments to highlight that certain instructions were not yet fully implemented and would require additional attention.

2. Control Unit Design for Specific Instructions:
Another challenge arose from my control unit, which was loosely implemented for the simpler tasks. Since JALR wasn’t part of the initial design requirements, I didn’t fully incorporate it into the control unit, leading to functionality issues later.


## What I would do differently

1. Better Use of GitHub Co-Authoring:
I would make more use of GitHub’s co-authoring functionality to help track contributions more transparently. This would provide a clearer record of who worked on specific sections of the code and ensure that credit is properly attributed.

2. Squashed Commits:
Instead of pushing multiple small commits, I would use squashed commits for consolidating changes before pushing them to the main branch. This would prevent unnecessary commit clutter and help maintain a cleaner history in our version control system, making it easier to trace the evolution of our codebase.

3. Tags vs. Branches for Versions:
We relied heavily on branches to manage different versions of our project, but I would have used tags instead. Tags provide a clearer way to mark specific versions or milestones in the development cycle. While branches worked for our team structure, tags would have helped in tracking stable versions, particularly when we needed to reference a specific point in time for testing or debugging.

4. More Thorough Discussion of Functionalities:
I would engage in more detailed discussions at the beginning of each phase of the project. This would ensure everyone understands the specific requirements and functionality that need to be implemented, reducing the chances of missing key details like the implementation of the RET instruction or certain processor features.
