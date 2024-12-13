# Ahmed's Logbook 

## Role

I was initially in charge of designing the **program counter**, as well as testbenching my own modules, and then working as a team on pipelining, cache memory and branch prediction.
I also worked on the **instruction ROM**, **sign extension**, **Data memmory**, **hazard unit** modules respectively.

## Timetable details

##
### 14/11/2024
    - Got familiar with the top level design of RISC V, understanding the different units
    - Created a first draft program counter.sv file based on the slides.
    - Got to meet other team members

### 21/11/2024
    -Worked with Jihwan on fixing the instruction ROM for lab4 opting for 32 bit memory locations instead of byte sized addressed typical for RISCV architecture. (would regret doing this later on)

### 25/11/2024
    -uploaded formatting for individual personal statements to repo.
    -created new references folder for all important files that we will refer back to.
    -fixed alu naming syntax error changing from: ALU -> alu correpsonding to alu.sv name and resulting in doit.sh file running successfully.
    -changed increment on PC to 1 instead of 4 given that instruction ROM stores values in 32 bits per memory locations. (would regret doing this later on)


### 27/11/2024
    -rewrote the signextension.sv module to implement correct extensions for I/S and B type instructions.
    -fixed PC size to 5 bit output to correspond to 32 bit memory locations in instruction ROM.


### 28/11/2024
    -Wrote and tested Program Counter test bench and determined as fully functional

### 29/11/2024
    -changed PC and instruction memory to byte sized addressing 
    -ran complete CPU test, found fully functional lab 4

### 30/11/2024
    - worked with elson to resolve GTK wave issue, deleted verify.cpp and used it purpose in top_tb.cpp test bench.

## Single-Cycle:
### 02/12/2024
    -Added J and U type instruction sign exention functionality (changed: signextension.sv, controlunit.sv and top.sv)
    -Worked with antoine on implementing data_mem.sv file.

### 03/12/2024
    -integrate data_mem.sv with top.sv file with new output mux.

### 05/12/2024
    -debugg and test SingleCycle CPU by testing data_mem.sv using module verification.
    -deleted a0 signal and replaced with Result signal (output of mux) for the output signal of the top.sv file. (would regret this later on)

### 06/12/2024
    - merged pipeline branch changes onto single-cycle branch
    - added clk signal for store instructions for data_mem.sv.

### 08/12/2024
    - Added JALR, RET functionality
    - Resolved J-type instruction WD3 write issues, ensuring PC + 4 is stored in RD when a J-type
    instruction is being exeucted.
    -Tested pdf on Vbuddy with the team.

### 10/12/2024
    - started working on pipeline, building off elsons pipeline modules that installed the signal delays
    - removed superfluous signals not in our single cycle e.g. MemWrite, MemRead.
    - removed EQ signal implemented ZeroE signal instead in alu.
    - added branch and jump signals to be used for flush logic and added corresponding set logic in control unit.
    - changed Program counter to work with the execution stage signals to determine next instruction.
    - changed register file to update on negedge
    - added PCsrcE control logic in top to determine next PC value.
    - added flush logic to top and hazard
    - added stall and forwarding logic to pipeline.
    - added extra bit to AddrMode signal to distinguish non-load or store instructions to stop permenant stall error

### 11/12/2024
    - fixed programme counter to +4 to fetch stage program counter value instead of PCE (execution stage)
    - Added extra condition for bypassing for Rs1E and Rs2E cannot be 'zero' for bypassing to happen
    - debugged pipeline using GTKwave running pdf and f1 lights reulting in fully functional 5 stage pipelined CPU 

### 12/12/2024
    - merged fully implemented RISCV instruction set made by elson onto pipeline and resolved the conflicts.
    - fixed hazard unit flush and PCsrcE logic that overlapped for BNE branch and caused issues
    - realized auipc wasn't implemented properly and implemented it myself making adjustments to U type instruction test bench.
    - tested using Elsons instruction test bench, pdf test bench and f1 test bench and determined fully functional.

    



