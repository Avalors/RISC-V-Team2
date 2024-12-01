# Antoine's Logbook 

## Role

For lab 4, I was in charge of the doit.sh file, as well as the integration and overall testbenching (top.sv and top_tb.cpp). I also added some assembly files (xor.s, or.s, counter.s) and copied files from the lab 4 instructions (verify.cpp, mux_tb.cpp, compile.sh).

For the rest of the project, I was in charge of designing the **ALU unit**, as well as testbenching my own modules, and then working as a team on pipelining, hazard control, cache memory and branch prediction.
I also took on the responsability of being repo master and designed much of the repo.

## Chronological work

### 14/11/2024
    - Got familiar with the top level design of RISC V, understanding the different units
    - Created a first draft of TopLevelCPU.sv and top-4_tb.cpp files
    - Got to meet other team members
    - Started formatting the repo

### 21/11/2024
    - Pulled and pushed a lot, reformatted the entire repo entirely
    - Testing the integrated TopLevelCPU.sv file using verilator and gtkwave
    - Allocated new roles, started working on ALU
    - Wrote basic assembly code (xor, or, counter)
    - Worked on the logbooks and personal statements

### 27/11/2024
    - Used gtkwave to debug a variety of different modules, including the ALU, ROM, program counter, register file and top level integration (common errors: wrong bit-length, incorrect syntax, inaccurate naming...)
    - Also had to edit the testbenches for the above modules
    - Updated the team logbook
    - Started using the provided mux_tb.cpp, top_tb.cpp, doit.sh, compile.sh files provided
    - Set a timeline for when to finish 

### 28/11/2024
    - Updated the README once more
    - Debugged once more
    - Edited the doit.sh file

### 29/11/2024
    - More debugging: finally first time CPU passes all tests! Success!
    - Deleted pointless branch from our repo
    - Went over the instructions to go from lab 4 to the actual project
    - Split roles for hazard control, pipelining, cache, data memory

### 30/11/2024
    - Assisted in debugging the top testbench





## Work by section

## Lab 4

As repo master:

    1. Took charge of many commits and amendments including updating the team logbook and the README file
    
    2. Added screenshots of gtkwave, code snippets as proof of work
    
    3. Created and deleted the relevant branches
    
    4. Use of markdown for the team contribution table and other instructions such as the quick start and general requirements (ie. file locations and package downloads)
    
        
![image](https://github.com/user-attachments/assets/442a02df-affa-46ca-8fcc-8b6df01b47a7)
        
![image](https://github.com/user-attachments/assets/7bae7f4a-f05d-4009-9a1e-99ed009b12e8)
        
![image](https://github.com/user-attachments/assets/f0755cf0-d159-40f8-bcd4-fb85fc4b7e59)
        



