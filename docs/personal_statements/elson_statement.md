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
- [What I learned](#what-i-learned)
- [Mistakes I made](#mistakes-i-made)
- [What I would do differently](#what-i-would-do-differently)

## Summary

- I was responsible for the **ALU**, **Control Unit**, **RegisterFile**, and **InstrMem** modules and writing the respective **testbenches** for them
- I was also responsible to doing the testbenching for the **cache** and **branch prediction** modules
- I was in charge of implementing the **complete RV32I instruction set** and did testbenching with assembly codes for every instruction. 

- I was responsible for team debugging both in person and online using the VS Code Live Share feature. This allowed me to directly contribute by editing code on my teammates' IDEs during collaboration sessions, although some commits were made by them.

## Contributions

### Lab 4

#### ALU and Register File
- [RegisterFile, ALU, and MUX done](https://github.com/aa6dcc/RISC-V-Team2/commit/c84f24871c5a7911610828e2e62cf69224e74bcf)

I mainly added the module implementations for the alu, registerfile, and the alu mux based on the diagram in Lab4
- **ALU**: I implement just the addition under the `always_comb` block and set the `EQ` flag to toggle if branch is taken or not
- **RegisterFile**: This module was made to assign the inputs of the register file coming in and wrtie logic to `AD3` in the case the `WE3` is high and `AD3` is not zero


#### Control Unit 
- [Added controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5fa1a412a6342c5cc21ca651c8444c2814a2f9e5)
- [Fixed the control unit testbench and brought in the new doit.sh script](https://github.com/aa6dcc/RISC-V-Team2/commit/5773432255b8a4a536ed3b52fe3cfc900075aa9f)

I implemented the control unit module for simple instructions sufficient for the lab 4 counter: I-type (`addi`) and B-type (`bne`) 


#### Bookkeeping and instruction memory
- [Restructure folder](https://github.com/aa6dcc/RISC-V-Team2/commit/f9f399da2d43315a25bb588428c69cf0d946753d)
- [Added .gitignore to ignore large files and gave our team merge conflicts](https://github.com/aa6dcc/RISC-V-Team2/commit/9af8479508d7274a99b07ba0c5b31bc86df42bb3)

**Bookkeeping:** Here was mainly some bookkeping in folder restructuring and adding a .gitignore to avoid the team dealing with merge conflicts for cases like `obj_dir`

- [Worked on Antoine's Liveshare of VSCode as a team for debugging and testbenching](https://github.com/aa6dcc/RISC-V-Team2/commit/e3fd87fdfd4d9f00b7447949e95964d28db9bb20#diff-9b9a6efe51731ef72a27f44c26c78fb4b1e55f3e88676bf0140041f7af99e2ee): For more detail and evidence see [Team Log (27/11)](../logbooks/team_log.md#team-meetup-27-11).
- [Instruction Memory implementation and Lab 4 debugging: Counter fully working](https://github.com/aa6dcc/RISC-V-Team2/commit/edc939dadaaca6523c7ef921765ea0f2ed3c03f0): For more detail and evidence see [Team Log (30/11)](../logbooks/team_log.md#team-meetup-30-11).

**Debugging:** Debugging here was mainly done through liveshare of VSCode on my team members IDE as it made it easier for us as a team to work together in debugging and observe the changes immediately on gtkwave.
**Instruction Memory**: During the second debugging session on (30/11) I implemented the instruction memory on the side on Ahmed's liveshare VScode IDE which was aimed to replace the `rom.sv` as this new module would instead read directly from a file called `program.hex` which is written into by `compile.sh` when it compiles an assembly code. I also wrote the respective testbench for this and swapped out the row with instruction memory on the top level integration which worked correctly. 

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

I was looking to come back to implement a randomiser for the F1 Lights at which the light switches off however this was something I would have probably implemented if we have more time. 

#### Python PDF Graphs 
- [Added graphs.py to just illustrate our expected graphs for pdf](https://github.com/aa6dcc/RISC-V-Team2/commit/7ad78983211d06f3bb87f3062504e860277b382c)

This was mainly used just as an illustration of the expected graphs we are looking however I acknowledge that there was discrepancies in the illustration for the sine and triangle waves. 

  #### PDF Testing 
- [PDF fully tested with data/.mem files](https://github.com/aa6dcc/RISC-V-Team2/commit/bd1db301e6254e29d24291ed513287c550939ff7)

I was responsible for testing the PDF on Vbuddy and restructuring some files for an organised workflow.

### Pipeline

- [Pipelining registers implemented and started the hazard unit](https://github.com/aa6dcc/RISC-V-Team2/commit/34617373aca98c16134c2862ff86bcb8c228c509)
- [Added WR3Src signal into pipeline](https://github.com/aa6dcc/RISC-V-Team2/commit/47a367c96ebce4d240b61f4a011d2dea61e3c596)
- [Fixed minor signals spelling bugs: still not functional
](https://github.com/aa6dcc/RISC-V-Team2/commit/d3df6d10afd85b6dbf4cccfc0d6f6bc7fa467649)

Here i was mainly responsible to create the initial foundation for pipelining with doing the pipeline registers which mapping the different stages of the signals to another as well as an initial basis for the hazard unit. 

### Full-ISA

#### Full RV32I Implemented
- [Added all R-type instr and verification, added the rest of I, J, U, B in controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5eccb99f8b08752ab7b98ed65e42157b3a14a190)
- [Completed full RV32I instructions and testbench and asm code for verification](https://github.com/aa6dcc/RISC-V-Team2/commit/14e4e17063317b12e1dfb36917cbb79eb7aec45a)

I was responsible in implementing all the RV32I instructions and testing that they all do indeed work. The main idea here was ensuring the control unit was compatible to work for all instructions: expanding bits for `ALUctrl` to include shifts and implementing remaining instructions like the rest of the branches, and I-type arithmetic.

The way I tested this was that for each type of instruction I wrote a test for each instruction and directly checked using `bne` if this was equal to the expected value and if not if would branch to a `fail_test` which in the testbench would be an incorrect expected value case. The testbench will suceed when a "special" value of `150` was return. This was an arbitrary value I had put in the case all instructions passed that this will be returned and will only ever be if all of them pass based on how I structured the jumps to the next tests.

For more detail please refer to the Full RV32I and assembly code testing in the [Single-Cycle.md](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/team_statement_sections/single_cycle_statement.md)

### Cache

#### DM cache
Here I worked on a initial testing branch for cache branched from Single-Cycle whilst pipeline was still in development. Then I synced the cache modules to be integrated into the full pipeline RV32I

- [Edited direct mapped cache.sv, added testbenches and asm code for testing](https://github.com/aa6dcc/RISC-V-Team2/commit/7a61fd2918b27e52af0d4cc86411fd7ff472ffdd)
- [Direct-mapped cache completed](https://github.com/aa6dcc/RISC-V-Team2/commit/ca013aad029b479c8335ec7aebd2990b17f65c63)
- [Completed branch prediction testbench and tested: Works as individual module](https://github.com/aa6dcc/RISC-V-Team2/commit/86b56e701d798e3d486f71c5a5f6acf23f11edd5)
- [Merged full pipeline RV32I onto DM cache and tested a TW cache: TW cache not completely successful yet
](https://github.com/aa6dcc/RISC-V-Team2/commit/c118a1d49282d4a143e912e7bd6a1d6fee3edfa4)

I was mainly responsible for doing the testbenching for the direct mapped cache as well as top-level integration of the cache module. For more evidence please refer to the testing and testbenching section in [cache_statement.md](https://github.com/aa6dcc/RISC-V-Team2/blob/cache-branch/docs/team_statement_sections/cache_statement.md)

## What I learned

This project has given me the opportunity to learn HDL, SystemVerilog, RISCV-I ISA, and to create a framework for testing.

Working on verification and debugging using gtkwave was something I found really useful to understanding where the underlying issue might be coming from that was giving us the incorrect output. 

Communication as a team was really important and we met each other consistently both online and in-person making it easy to give regular updates and help each other on any challenges we faced.


## Mistakes I made

One mistake was not implementing the RET instruction properly in the control unit leading to extensive debugging of JALR functionality which Ahmed (@Avalors) had to help fix 
[pdf fixes: added JALR functionality, RET fix and PC + 4 store for J-type instructions](https://github.com/aa6dcc/RISC-V-Team2/commit/7f4978e6a998b1457e97a4bbc045055ee32e84be)
- This would probably have been resolved with clear discussion of the necessary instructions needed to test the respective functionalities as control unit I made was designed for Lab 4 Counter and F1 Lights which did not require JALR and therefore was loosely implemented in the control unit - but I should have added clear comments that it was not fully implemented yet


## What I would do differently

- Investigate more use of the co-authoring function on GitHub for clearer contribution tracking.
- Using squashed commits so we can still commit without affecting the main branch history.
- We should have used tags instead of branches for our different versions but branches might have worked for us based on the delegation of our work in doing pipeline whilst someone else works on cache and further enhancements 



