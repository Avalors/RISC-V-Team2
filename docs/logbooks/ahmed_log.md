# Ahmed's Logbook 

## Role

I was in charge of designing the **Control unit**, as well as testbenching my own modules, and then working as a team on pipelining, cache memory and branch prediction.
I also worked on the **program counter** in lab 4 and helped Jihwan change his **instruction ROM** module. 

## Timetable details

### 14/11/2024
    - Got familiar with the top level design of RISC V, understanding the different units
    - Created a first draft program counter.sv file based on the slides.
    - Got to meet other team members

### 21/11/2024
    -Worked with Jihwan on fixing the instruction ROM for lab4 opting for 32 bit memory locations instead of byte sized addressed typical for RISCV architecture.

### 25/11/2024
    -uploaded formatting for individual personal statements to repo.
    -created new references folder for all important files that we will refer back to.
    -fixed alu naming syntax error changing from: ALU -> alu correpsonding to alu.sv name and resulting in doit.sh file running successfully.
    -changed increment on PC to 1 instead of 4 given that instruction ROM stores values in 32 bits per memory locations.