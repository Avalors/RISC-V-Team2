# Antoine's Logbook 

## Role

I was in charge of designing the **ALU unit**, as well as testbenching my own modules, and then working as a team on pipelining, cache memory and branch prediction.
I also took on the responsability of being repo master. I also worked on integration and testbenching on lab 4. 

## Timetable details

### 14/11/2024
    - Got familiar with the top level design of RISC V, understanding the different units
    - Created a first draft of TopLevelCPU.sv and top-4_tb.cpp files
    - Got to meet other team members
    - Started formatting the repo

### 21/11/2024
    - Pulled and pushed a lot, reformatted the entire repo entirely
    - Testing the integrated TopLevelCPU.sv file using verilator and gtkwave
    - Allocated new roles, started working on ALU
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
    - Setting roles for hazard control, pipelining, cache, data memory
