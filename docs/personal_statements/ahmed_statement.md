# Personal Statement: Ahmed Hamid


**CID:** 02427719

**Name:** Ahmed Hamid

**Github Username:** Avalors

---
## Overview
- [Summary of Contributions](#summary-of-contributions)
    - [Lab 4](#lab-4)
        - [program counter](#program-counter)
        - [instruction memory](#instruction-memory)
    - [Single Cycle](#Single-cycle)
        - [sign extension](#sign-extension-2)
        - [data memory](#data-memory)
        - [pdf debugging](#pdf-debugging)
    - [Pipeline](#pipeline)
        - [Fetch](#Fetch)
        - [stalling](#stalling)
        - [flushing](#flushing)
        - [forwarding](#forwarding)
    - [Full ISA](#Full-ISA)
        - [AUIPC](#AUIPC)
- [What I learned](#what-i-learned)
- [Mistakes I made](#mistakes-i-made)
- [Next steps](#Next-steps)
---
## Summary of Contributions

I implemented the **program counter** and **data memory** as well as implemented the **pipelining** logic including for: **flushing**, **stalling** and **forwarding** . I resolved all the conflicts when implmenting the single-cycle full RISCV ISA onto the pipeline and made significant contributions to the **sign extension unit**. I created the initial **instruction ROM** built off Jihwans inital model, which was later replaced by Elsons and attempted to implement **interrupts**.

---
### Lab 4
---

#### Program Counter
##### *Relevant commits*:
1. [First program counter module](https://github.com/aa6dcc/RISC-V-Team2/commit/35177ef1759cfaea8f672c708ca85c8c010a4a60)
2. [PC + 1 increment mistake](https://github.com/aa6dcc/RISC-V-Team2/commit/306a1e37a619b20294fffa5b6be66cb0042b2f7a)
3. [Program counter (PC + 1) test bench](https://github.com/aa6dcc/RISC-V-Team2/commit/2cbe667ca7a5dcf7f780d5d2dc4c6b26b74b8024#diff-295f2854128a5ffd825544bdef9db361230450e660843b1886b80471349a7c1c)
4. [byte sized addressing fix](https://github.com/aa6dcc/RISC-V-Team2/commit/114175eedf02ff6042713fe938c18642ee2a6926#diff-79617c59b4a0b80120f3c715aafa48971c8f6c0fb63755e63f897bc4e40ad2bb)

- The **program counter** [program_counter.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/lab4/rtl/program_counter.sv) serves the purpose of generating the instruction address for the next instruction to be fetched from instruction memory.
- Depending on the 1 bit PCsrc control signal my program counter would increment by 4 or be added to *ImmOP* which is the sign extended branch/Jump PC offset value taken from the sign extension unit.

<div align="center">
    
|PCsrc|PC|
|---|---|
|0|PC + 4|
|1|PC + ImmOP|

</div>

- The reason why the Program counter increments by 4 is due to the implementation of **byte-sized** addressing by the RISC-V architecture meaning each addressable memory location in instruction memory is 8 bits.This means a 32 bit **instruction word** occupies 4 contiguous memory locations, therefore using litte-endian addressing (meaning the least of the 4 addresses stores the beginning 8 bits of the instruction word) the program counter must increment by 4 to align with the first 8 bits of the loaded instructions.

<div align="center">
    
|![image](https://github.com/user-attachments/assets/afc5e7ce-841e-4f44-afac-da0590068c98)|
|:--:|
|*img2: visual representation of bytesized little-endian addressing*|

</div>

```SV
module program_counter #(
    parameter WIDTH = 32
)(
    input  logic                 clk,
    input  logic                 rst,
    input  logic                 PCsrc,
    input  logic [31:0]          ImmOp,
    output logic [WIDTH-1:0]     PC
);

    always_ff @(posedge clk) begin
        if (rst) begin
            PC <= 32'h0;
        end else begin
            if (PCsrc)
                PC <= PC + ImmOp;  // Branch/Jump
            else
                PC <= PC + 32'd4;  // Normal increment
        end
    end

endmodule
```

- the *rst* signal is an input from the [top.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/lab4/rtl/top.sv) that resets the Program counter back to the first instruction stored in mem location 0 in instruction memory.

I developed the [program_counter_tb.cpp](https://github.com/aa6dcc/RISC-V-Team2/blob/lab4/tb/test/program_counter_tb.cpp) which ran 4 tests:
1. initial value test - just checked if the first PC value was 0
2. normal incrementing test - just checked if the PC incremented by 4 when PCsrc = 0
3. Wrap around test - checked if the PC is at its last addressable memory location, it starts counting from 0 again.
4. Jump and branch test - checked that if PCsrc = 1, the PC added the arbitrary value 5 to the PC instead of incrementing by 4 as usual.


|![image](https://github.com/user-attachments/assets/10cae1af-6084-410d-83d8-d4f65e3620bd)|
|:--:|
|*img 1: successful program counter test*|

#### Instruction Memory 
##### *Relevant commits*:
1. [rom.sv creation](https://github.com/aa6dcc/RISC-V-Team2/commit/114175eedf02ff6042713fe938c18642ee2a6926#diff-e144a7e88627fa3fc8d64cb98afb8f90a328dd9177726f85d31a1fc636874ce6R7)
2. [instr_rom.sv load rom creation](https://github.com/aa6dcc/RISC-V-Team2/commit/edc939dadaaca6523c7ef921765ea0f2ed3c03f0)

- I built my instruction memory off base module that jihwan created
- [rom.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/lab4/rtl/rom.sv)'s purpose is to take the *addr* from the program counter output (*PC*) and output the full 32 bit word instruction it refers to.
- I initialized my rom like this:
```sv
logic [DATA_WIDTH-1:0] rom_array [0:(1 << 10) - 1]; //reduced to 2^10 locations to prevent simulation error
logic [31:0] machine_code [0:6];
```
- DATA_WIDTH is 8 width to set the byte sized memory locations
- I have chosen to only create 2<sup>10</sup> uniquely addressable memory locations as to prevent a simulation error as 2<sup>32</sup> memory locations (as per PC bitwidth) would be unecessary and potentially make simulation very troublesome.
- the *machine_code* mini ROM is what I used to manually load the test code into the ROM for my test bench.
```sv
assign instr = {rom_array[addr+3],rom_array[addr+2],rom_array[addr+1],rom_array[addr]};
```
- By using this concatenation line I was able to output the full 32 bit instruction word despite only having the little-endian least significant 8 bits memory location address from the program counter.

- For the [rom_tb.cpp](https://github.com/aa6dcc/RISC-V-Team2/blob/lab4/tb/test/rom_tb.cpp) test bench, I set the *Addr* signal and incremented by 4 manually and tested against the outputted instruction word to test if it performed correctly based on the manually loaded instructions:

```cpp
// Test for reading instructions from ROM
TEST_F(RomTestbench, ReadInstructions) {
    // Array to hold expected values for test validation
    std::vector<uint32_t> expected_instrs = {
        0x0ff00313,  
        0x00000513,  
        0x00000593,  
        0x00058513,  
        0x00158593,  
        0xfe659ce3,
        0xfe0318e3
    };

    // Test ROM reads for sequential addresses
    for (int i = 0; i < expected_instrs.size(); i++) {
        top->addr = i*4;  // Set the address
        top->eval();    // Evaluate the model
        
        // Check the output
        EXPECT_EQ(top->instr, expected_instrs[i]) 
            << "Mismatch at addr " << i*4;
    }
}
```
|![image](https://github.com/user-attachments/assets/c97f3c0e-9547-4970-a2e8-c9fcf4547e5b)|
|:--:|
|*img 3: successful rom.sv verfication test*|

---
### Single cycle
---

#### sign extension 2
##### *Relevant commits*:
1.[full RISC-V sign extension unit](https://github.com/aa6dcc/RISC-V-Team2/commit/1287fe564a898d2fc1fdeea77e3651d3877f5a7c)

- The [signextension.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/Single-cycle/rtl/signextension.sv) module performs the purpose of producing a full 32 bit value from the immediate bits of non R-type instructions.
- For different type of instructions the way these bits have to be concatenated are different based on the instructions purpose.

|![image](https://github.com/user-attachments/assets/93ce55fa-cfc6-4bef-9a3e-2482b7868269)|
|:--:|
|*img 4: all type of instructions and their immediate representations*|

- To perform these different bit arrangements depending on the instruction type, I added an extra bit to the *ImmSrc* control signal.


<div align="center">
    
|ImmSrc[2:0]|instruction type|concatenation|
|---|---|--|
|000|I-type|```{{20{instr[31]}}, instr[31:20]};  ```|
|001|S-type|```{{20{instr[31]}}, instr[31:25], instr[11:7]};   ```|
|010|B-type|```{{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0}; ```|
|011|U-type|```{instr[31:12], 12'b0};```|
|100|J-type|```{{12{instr[31]}}, instr[19:12], instr[20],instr[30:21],1'b0};```|
|101|unused|x|
|110|unused|x|
|111|unused|x|

</div>

- I expanaded on my original 2 bit ImmSrc test bench for the single-cycle Sign extension module that uses 3 bits.
- The [signextension_tb.cpp](https://github.com/aa6dcc/RISC-V-Team2/blob/Single-cycle/tb/test/signextension_tb.cpp) performed a verification  for all 5 unique *ImmSrc* values for which I set *top->instr* to a real RISC-V instruction of that type to be sure it performed correctly.

|![image](https://github.com/user-attachments/assets/752507a0-d708-4790-a65c-24e40803054a)|
|:--:|
|*img 5: successful sign extension module verification test in Single cycle *


#### data memory
##### *Relevant commits*:
1. [first data mem module](https://github.com/aa6dcc/RISC-V-Team2/commit/1cfd7f9b67605c6dc3dfc45b98ecef2f041300da#diff-7fb2f654e642c0dcb3ed805f036373d9f7269c47fa85d27e7bfe1ff43a7c56cc)
2. [first data mem test program](https://github.com/aa6dcc/RISC-V-Team2/commit/19dc2759c13cd388edd051c96748cade10b4c744)
3. [async data mem with program load and syntax corrected program test](https://github.com/aa6dcc/RISC-V-Team2/commit/b2051d5eab50bf26058059f9398d7c5b176b6062#diff-7fb2f654e642c0dcb3ed805f036373d9f7269c47fa85d27e7bfe1ff43a7c56cc)
4. [data mem verification test bench](https://github.com/aa6dcc/RISC-V-Team2/commit/b2051d5eab50bf26058059f9398d7c5b176b6062#diff-fd5b6df4439ea3b0d6239d864bb35a0c2643a0b21608235a5612d8adb0b44079)
5. [synchronous store for data mem](https://github.com/aa6dcc/RISC-V-Team2/commit/d8667aeaded2e97297010336254a7c1569c301b9#diff-fd5b6df4439ea3b0d6239d864bb35a0c2643a0b21608235a5612d8adb0b44079)


- The data memory enables the use of *l-type* and *s-type* instructions in the RISC-V instruction set, acting as a larger register file where data can be stored and loaded from.
- I implemented 2<sup>20</sup> uniquely addressable memory locations for the data_mem to make map well to the memory map for the pdfs functionality.

<div align="center">

|![image](https://github.com/user-attachments/assets/1e24230a-78c4-4c01-89fe-a64e05eeeaca)|
|:--:|
|*img 6: expected memory map for the pdf.s program functionality*|

</div>

- To implement these instructions I created a new 3 bit control signal in the control unit called: *AddrMode* which is unique for each of the 8 type of load and store instructions, allowing all 8 instructions to be identified and implemented uniquely in the [data_mem.sv](https://github.com/aa6dcc/RISC-V-Team2/blob/Single-cycle/rtl/data_mem.sv).


<div align="center">

|AddrMode[2:0]|instruction|
|---|---|
|000|load byte|
|001|load half word|
|010|load word|
|011|load byte unsigned|
|100|load half word unsigned|
|101|store byte|
|110|store half word|
|111|store word|

</div>

- for the load instructions I used a combinational logic block and case logic to implement them.
```sv
    //load instructions
    always_comb begin
        case(AddrMode)
        // load byte
        3'b000:begin
            temp = {{24{array[A][7]}},array[A]};
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
        default: temp = {array[A+3], array[A+2], array[A+1], array[A]}; //default case is load word
        endcase
    end
```

- I then made the store instructions synchronous so that they only update the respective memory locations on the rising edge of the clock like this:

```sv
    //store instructions 
    always_ff @(posedge clk)begin
        if(AddrMode == 3'b101)begin
            array[A] <= WD[7:0];
        end
        else if(AddrMode == 3'b110)begin
            array[A] <= WD[7:0];
            array[A+1] <= WD[15:8];
        end
        else if(AddrMode == 3'b111)begin
            array[A] <= WD[7:0]; // stores the least significant byte
            array[A+1] <= WD[15:8];
            array[A+2] <= WD[23:16];
            array[A+3] <= WD[31:24]; // stores the most significant byte
        end
    end
```

- noticably due to the default value for the *always_comb* block, the *RD* output should be previous value stored in the memory location the new store instruction wishes to store to, which is redundant functionality with no purpose.

- To ensure the non l and S type instructions still work, I added an additional signal *ResultSrc* in the control unit that acts as a control signal to an output mux in *top.sv* that selects between the *ALUout* signal and the *RD* of the data_mem.

```sv
    //Result mux
    always_comb begin
        case(ResultSrc)
        1'b0: Result = ALUout;
        1'b1: Result = ReadData;
        endcase
    end
```
- This *Result* output then feeds into *WD3* input of the register file.

|![WhatsApp Image 2024-12-13 at 22 11 11_98743ce5](https://github.com/user-attachments/assets/0c0f504d-f430-48e2-b121-c6d3d4b7a59e)|
|:--:|
|*img 7: diagram representation of new mux*|

- for the pdf functionality I added *$memh* commands in the *initial begin...end* block to load the respective data: gaussian, noisy, sine and triangle and stored in the correct memory locations as per the memory map.
```sv
    //sets all bytes in memory to 8'b0
    initial begin
        for(int i = 0; i < (1 << ADDR_REAL_WIDTH) - 1; i++) begin
            array[i] =   8'b0;
        end
        

        //loads data.hex into array of data memory
        //commented for the purpose of adding more instr
        $display("Loading program into data memory...");
        $readmemh("../tb/data/gaussian.mem", array, 20'h10000, 20'h1FFFF);

    end
```

I tested the data_mem.sv using:
  1. module test bench ([data_mem_tb.cpp](https://github.com/aa6dcc/RISC-V-Team2/blob/Single-cycle/tb/test/data_mem_tb.cpp)) that forced values for *AddrMode* and used corresponding *WD* (write data) and *A* (addresses) that was identical to my [data_mem_test.s](https://github.com/aa6dcc/RISC-V-Team2/blob/Single-cycle/tb/asm/data_mem_test.s)
  E.G.
Load instruction verification module: 
```cpp
//tests load half word instruction: lh rd, imm(rs1)
TEST_F(DataMembench, AddrMode001Test) {
    top->AddrMode = 0b001;
    top->A = 6;

    top->eval();

    EXPECT_EQ(top->RD, 0xFFFFFF88);
}
```
- My *initializeInput()* override function forces 2 store word instructions that store words: 0x12345678 and 0xFF886543 in *data_mem[0] and data_mem[1]* respectively; from which my load verification tests can be tested upon.

```cpp
class DataMembench : public SyncTestbench {
protected:
    void initializeInputs() override {
        top->clk = 1;

        //stores word instructions
        top->AddrMode = 0b111;
        top->A = 0;
        top->WD = 0x12345678;
        runSimulation(1);
        top->AddrMode = 0b111;
        top->A = 4;
        top->WD = 0xFF886543;
        runSimulation(1);
    }
};
```
For my store instructions I tested them by forcing a store by manually setting the respective inputs, followed by a load word instruction (just like my programme) to see if it actually behaved as expected.

|![WhatsApp Image 2024-12-05 at 15 08 51_aa7ce251](https://github.com/user-attachments/assets/fc952a6e-1e06-4e64-8b3f-378cf6131998)|
|:--:|
|*img 8: successful verfiication tests of data_mem.sv module*|


2. I ran a test bench that produced me a full GTK wave form for my data_mem_test.s programme for which I inspected to see if it was integrated properly, which proved to show that it did work with the rest of the modules in this single-cycle implementation of RISCV.

|![WhatsApp Image 2024-12-05 at 12 44 27_1ee5c498](https://github.com/user-attachments/assets/16f936b4-5117-49e8-882e-c6b485315905)|
|:--:|
|*img 9: successful GTK wave test for data_mem_test.s programme*|




#### pdf debugging
##### *Relevant commits*:
1.[pdf fixes](https://github.com/aa6dcc/RISC-V-Team2/commit/7f4978e6a998b1457e97a4bbc045055ee32e84be)

- After implementing the data memory and integrating onto our lab4 to create our single cycle; we ran our f1 lights which was a success.
- However when attempting to run the pdf.s programme on our Single cycle CPU we discovered that it didn't work and would get stuck on the GTK wave before the a0 output sequence, hence providing an empty output.
- By going through the GTK wave I discovered that the *RET* instruction was not working.

- By breaking down the machine code, I discovered that it is a variation of the *JALR* instruction that is an *I-type* instruction that adds its immediate to a program counter value (in this case Ra (0x1) in the register file)
- Looking through the implementation of single-cycle at the time, I realized that JALR instructions were not implemented at all. I fixed this by adding an extra bit to the PCSrc singal (in the contorl unit) and adding an extra signal to the input mux for the Program counter.

<div align="center">

|PCSrc[1:0]|PC|
|---|---|
|00|PC = PC + 4|
|01|PC = PC + ImmOP (B and J type)|
|10|PC = Result (for JALR and RET)|
|default|PC = PC + 4|

</div>

|![WhatsApp Image 2024-12-13 at 22 20 03_9214f503](https://github.com/user-attachments/assets/a1519a1e-07b7-4a8d-9052-f7a740c2a914)|
|:--:|
|*img 10: RET instruction discovery and fix*|


- I then realized that when our CPU performs a branch and jump instruction, it did not store the return PC address.
- I fixed this by adding another 1 bit control signal that only goes high for branch and jump insrructions called *WD3Src* .
- This had the Result output as one input and PC + 4 as the other, allowing PC + 4 to be stored in the register file via port *WD3* for the RET instruction to access when returning back after a subroutine/loop.

```sv
//WD3 Mux to implement Ra = PC + 4 for jump instructions
always_comb begin
    case(WD3Src)
        1'b0: WD3 = Result;
        1'b1: WD3 = PC + 32'd4;
    endcase
end
```
<div align="center">

|WD3Src|WD3|
|--|---|
|0|Result|
|1|PC + 4|

</div>

- After this the pdf.s started showing waveforms on the Vbuddy as expected and we had officially completed single cycle.
---
### Pipeline

##### *Relevant commits*:

1. [started pipeline implementation PC change](https://github.com/aa6dcc/RISC-V-Team2/commit/4b354955dc2d1aa588fe1dadac36e3a29e8889fe#diff-dcd2bab66a50256139d75a04f77aafc9ca7e59ac26d0f7322d83a9d18e530104)
2. [added flush forwarding and stall](https://github.com/aa6dcc/RISC-V-Team2/commit/e03962fbe4af85773522debcfd2bab447d36caba)
3. [fixing permenant stall by extra bit to AddrMode](https://github.com/aa6dcc/RISC-V-Team2/commit/70ae2accd673e68f8247cfc861bee25f2678e623)
4. [PC+4, no forwarding for zero, AddrMode to top.sv pipeline debugging](https://github.com/aa6dcc/RISC-V-Team2/commit/c4525163e41a07e85e7e1b0550b75882a92e29cb)
5. [moved flush logic to inside hazard unit](https://github.com/aa6dcc/RISC-V-Team2/commit/55f57140f18454de93c37368406b650732a0afce)

For the pipeline I implemented all the logic for the hazard unit which handles the flush, stall and forwarding behaviours of the pipeline. I built this logic off elsons pipeline register modules e.g. pipelien_DECtoEXE.sv, fixing incorrectly forwarded signals and removing signals we didn't use for our Single-cycle implementation.

My pipeline was tested by running pdf and f1 lights on it and seeing on the Vbuddy if it ran successfully. (see videos from README)

---


#### Fetch

- Due to the implementation of the pipeline, the way that the Program counter is incremented must be changed.
- In the pipeline the EXECUTE stage is responsible for setting the next PC value and therefore determines what instruction is next loaded into the pipeline.
- The reason for this is since the conditions for branch instructions are set by calculuations involving the ALU which is within the EXECUTE stage.

- This means contorl traditionaly program counter control signals are replaced with EXECUTE stage counter parts.
- *PCSrcE* chooses how PC chnanges like *PCsrc* used to, however it no longer comes from the contorl unit, however instead is a passed along signal coming from the EXECUTE stage.

```sv
    always_ff @(posedge clk) begin
        if (!stall) begin
            if (rst) begin
                PC <= 32'h0;
            end else begin
                if (PCsrc == 2'b01) 
                    PC <= PCE + ImmOp;  // Branch/Jump
                else if(PCsrc == 2'b10)
                    PC <= Result;       // JALR (pipeline: switch this to the output of the ALU)
                else
                    PC <= PC + 32'd4;   // Normal increment
            end
        end
    end

```
- notice how PCsrcE maps identically to the table for PCsrc in terms of functionality.
- However, branch instructions and jump instructions must rely on an additional input signal called *PCE*, which corresponds to the instruction address for the instruction in the EXECUTE stage, which in this case will always correspond to a branch/jump instruction value.
- The reason we cannot just use *PC* to add *ImmOP* to is due to the fact that the PC immediate offset for jump instructions is based on the program counter value for when that particular B or J type instruction is ran, which corresponds to PCE, whilst PC corresponds to the FETCH instruction value.

#### stalling
- stalling is used to resolve data hazards caused by earlier instructions in the pipeline, using operands which are dependant on what instructions later in the pipeline have yet to update in the register file.
- This problem is generally resolved by using forwarding, however due to the *L-type* instructions writing *RD* back into the register not *ALUout*, we cannot forward it until the L-type instruction is in the WRITE BACK stage.
- Therefore a stall is required keeping the instruction requiring the data in the EXECUTE stage whilst the LOAD instruction progresses into the WRITEBACK stage.

-This is how I implemented it visually with an example:
|![WhatsApp Image 2024-12-13 at 23 06 47_2f9f1986](https://github.com/user-attachments/assets/eb52b08b-43e3-4fda-9814-d414e83ed33f)|
|:--:|
|*img 11: stall understanding diagram*|

- This is the stall conditional logic that checks if the situation shown in the previous diagram presents itself:
    - I made AddrMode a 4 bit signal to implement this to resolve a permenant stall as previosly all instructions were by default set to AddrMode = 3'b000 which is a load byte instruction, which resulted in instructions always stalling. Now all non l-type instructions are set to 4'b1000 in the control unit.
    - The RdM and the Rs1/2E conditions check if the operands are the same and if a stall is required.

```sv
always_comb begin
    //Stall
    if (((AddrModeM >= 4'b0000) && (AddrModeM <= 4'b0100)) && ((RdM == Rs1E) || (RdM == Rs2E))) begin
        stall = 1'b1;
    end
    else begin 
        stall = 1'b0;
    end
end
```

- In pipeline modules I prevented the progression of the signals (stalling) in pipeline_FECtoDEC I did this by only allowing the DEC signals to change if the *stall* flag:
```sv
always_ff @ (posedge clk) begin
    if(!stall)begin
        if(!flush)begin
            instrD <= instrF;
            PCD <= PCF;
            PCPlus4D <= PCPlus4F;
        end
        else begin
            instrD <= 32'h00000013;
            PCD <= 32'd0; //doesnt matter
            PCPlus4D <= 32'd0; //doesnt matter
        end
    end
end

```

- The NOP to MEM stage is implemented in the pipeline_EXEtoMEM.sv description when the *stall* flag is high manually setting the passed along signals to those would occur if a NOP signal were to be passed.:
```sv
always_ff @ (posedge clk) begin
    if(!stall) begin
        //Control Unit
        RegWriteM <= RegWriteE;
        ResultSrcM <= ResultSrcE;
        AddrModeM <= AddrModeE;
        WD3SrcM <= WD3SrcE;

        //Data path
        ALUResultM <= ALUResultE;
        WriteDataM <= WriteDataE;
        PCPlus4M <= PCPlus4E;
        RdM <= RdE;
    end
    else begin //loads NOP signals
        //Control Unit
        RegWriteM <= 1'b1;
        ResultSrcM <= 1'b0;
        AddrModeM <= 4'b1000;
        WD3SrcM <= 1'b0;

        //Data path
        ALUResultM <= 32'd0;
        WriteDataM <= 32'd0;
        PCPlus4M <= 32'd0; //could be a problem 
        RdM <= 5'b0;
    end
end
```


#### forwarding
-Forwarding prevents stalls for data hazards by sending Operand values between stages, in our case sending back signals from both the MEM and WRITE_BACK stages to the EXECUTE stage, where these operands are required to perform ALU operations.
- This is the logic I used to implement forwarding for non-L-type instructions:


|![WhatsApp Image 2024-12-13 at 23 28 53_a64dbab2](https://github.com/user-attachments/assets/b6a068a3-489b-4fd4-bdb3-2a390eaa7ef1)|
|:--:|
|*fig 12: Entire forwarding understanding diagram, describes the different conditions for forwarding and the correct output*|

|![WhatsApp Image 2024-12-13 at 23 31 40_1afbb3c2](https://github.com/user-attachments/assets/51e530e5-e23a-46ad-b9a4-710c5a2d19bc)|
|:--:|
|*fig 13: The muxes for forwarding are located here in the execution stage*|

-Here is a table explaining my forwarding logic let X either be 1 or 2 dpending on which operand its referring to (for the reg file)

<div align="center">

|fowardXE|srcXE|
|---|---|
|00|RdXE (no forwarding)|
|01|ALUResultM (forwarding from MEM)|
|10|WD3W (fowarding from WB)|

</div>

- Hazard unit implementation of forwarding for only Rs1 (this is the same however just for Rs2)
```sv
//Rs1 MUX forwarding
always_comb begin
    if((Rs1E == RdW) && (Rs1E != 5'd0))begin
        if(Rs1E == RdM)begin
            forwardAE = 2'b01; // MEM TO EXE prioritisation
        end
        else begin
            forwardAE = 2'b10; // WR TO EXE
        end
    end
    else begin
        if((Rs1E == RdM) && (Rs1E != 5'd0))begin
            forwardAE = 2'b01; // MEM TO EXE
        end
        else begin
            forwardAE = 2'b00; //Rd1E -> SrcAE 
        end
    end
end
```
- This implements the priority of writing back from MEM instead of WB if both are the same Rd registers, as MEM will have the newer and most updated value for that register value.

- RD1 fowarding EXE stage mux logic
```sv
    //RD1 mux
    always_comb begin
        case(forwardAE)
        2'b00: SrcAE = RD1E;
        2'b01: SrcAE = ALUResultM;
        2'b10: SrcAE = WD3W;
        default: SrcAE = RD1E;
        endcase
    end

```

#### flushing
- flushing happens in a pipeline as a response to a control hazard.
- A control hazard happens when incorrect instructions are loaded in earlier in the pipeline after a Jump or Branch instruction as we cannot determine if the Jump or Branch is taken until the EXE stage, therefore if the Branch or Jump instruction is taken the instructions in the FETCH and DEC stages are incorrect.
  
- This diagram explains how I implemented it:
|![WhatsApp Image 2024-12-13 at 23 43 00_60981e41](https://github.com/user-attachments/assets/634957e5-c487-4df3-ab73-1edb9a76f570)|
|:--:|
|*fig 14: flushing understanding diagram shows how the pipeline changes as flush progresses*|

- To allow this to work I set and developed branch and jump signals in the control unit which I passed to the EXE stage for the flush logic.
```sv
//flush conditional logic
always_comb begin
    if(JumpE[1] == 1'b1) begin
        flush = 1'b1;
    end
    else begin
        if(((branchE == 3'b001) || (branchE > 3'b010)) && (EQ == 1'b1)) begin
            flush = 1'b1;
        end
        else if((branchE == 3'b010) && (EQ == 1'b0)) begin //BNE
            flush = 1'b1;
        end
        else begin
            flush = 1'b0;
        end
    end
end
```

|![WhatsApp Image 2024-12-13 at 23 47 28_ee15e7bb](https://github.com/user-attachments/assets/dc16071a-b93b-4000-ba5d-09cbf3bd1fe0)|
|:--:|
|*img 15: shows the JumpE and BranchE signal values and their corresponding instructions*|

-NOPs are loaded in just like before by manually setting passed signals in the respective pipline modules:
1. pipeline_FETCHtoDEC.sv
2. pipeline_DECtoEXE.sv


---
### Full ISA
---
#### AUIPC
##### *Relevant commits*:
1. [full RISCV ISA pipelined complete](https://github.com/aa6dcc/RISC-V-Team2/commit/f193494f298a785eaf6c96364f4bdcbed74823d1)

- *AUIPC* is an upper immediate instruction that adds its sign extended immediate to a program counter value.

|![WhatsApp Image 2024-12-13 at 23 53 16_23f4eda1](https://github.com/user-attachments/assets/ef614ef9-c036-4b7f-8ee7-5a4278c94c8b)|
|:--:|
|*img 16: AUIPC implementation visual with SystemVerilog code and checklist of implementation|

---
## What I learned
- How to use git and help manage a Repo.
- How to write hardware descriptions using SystemVerilog
- Synthesizing our Harware descriptions using verilator and running it on hardware
- Writing test benches and using Gtest to run verifiction tests to test module functionality.
- Debuggin using GTKwave.
- How to think in terms of parallel instead of only sequential.
- Understanding the RISCV architecture and Instruction set.
- How to work effectively in a team.
- How pipelineing works and how to implement pipelining
- How interrupts work (using year 1 DECA notes)
- How branch prediction works
- project management adnd working in a team.

---
## Mistakes I made

### Program Counter incrementation
- A key mistake I made in lab 4 was implementing **word addressing** in both program counter and instruction ROM.
- This meant *PC* was incremented by 1 instead of 4 and each addressable memory location in instruction memory was 32 bits.
- Though in principle this should work, due to RISC-V assembler adapted for byte sized addressing, when assembling branch and jump instructions the PC Offset immediate value is a multiple of 4 taking into account byte sized addressing, which meant when running assembly programmes with jump or branch instructions, the output would be incorrect and devolve into running NOPs since other memory locations not used were prelaoded with NOPS.

### Single cycle data memory
- When I first created the data_memory I made the store instructions asynchrnous just like the load instructions as I feared that by making the store instructions synchronous I would be accidentally creating a pipeline and the CPU would no longer function in a Single Cycle fashion.
- I was wrong about this as I didn't consider that the purpose of the store instruction is to store an instruction into the data memory and nothing else, therefore it appearing on the *RD* (read-data) output in the same cycle isnt important.
- Any following instruction that wishes to access the data stored by the store instruction would still be able to access it in the following cycle, making this no longer a concern.

### Single cycle a0 removal
- I replaced the a0 output for our Single cycle implementation with Result from the output mux, which I thought would be correct as I believed a0 was an old unecessary output signal form lab 4 which we didnt need.
- It was only after we realiazed that our f1lights tests and our pdf tests were no outputting unexpected results we realized that as per the project brief that a0 was the correct output.

<div align="center">

|![image](https://github.com/user-attachments/assets/ab152c39-ff7d-4ff1-8ace-946fa88d1b11)|
|:--:|
|*img x: top level view of RISC V CPU taken from project brief*|

</div>

## Next steps
- Complete interrupt logic and implement:

![WhatsApp Image 2024-12-13 at 23 55 01_f065ff6a](https://github.com/user-attachments/assets/a59e94fd-3140-4e25-808a-28962b0bfec5)

![WhatsApp Image 2024-12-13 at 23 55 23_0c60a13a](https://github.com/user-attachments/assets/84ff45a9-92d5-4769-96aa-ccafec4aa2a0)

- Run on FPGA
