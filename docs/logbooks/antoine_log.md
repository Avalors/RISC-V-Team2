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





# Work by section

## Lab 4

- As repo master:
    1. Took charge of many commits and amendments including updating the team logbook and the README file
    2. Added screenshots of gtkwave, of the top level schematic, code snippets as proof of work
    3. Created and deleted the relevant branches and directories
    4. Use of markdown for the team contribution table and other instructions such as the quick start and general requirements (ie. file locations and package downloads)
    6. Had to deal with a few merge conflicts
        
![image](https://github.com/user-attachments/assets/442a02df-affa-46ca-8fcc-8b6df01b47a7)
        
![image](https://github.com/user-attachments/assets/7bae7f4a-f05d-4009-9a1e-99ed009b12e8)
        
![image](https://github.com/user-attachments/assets/f0755cf0-d159-40f8-bcd4-fb85fc4b7e59)

- As testbenching & integration member & other roles:
  1. Created the TopLevelCPU.sv and top-lab4_tb.cpp (later renamed to top.sv and top_tb.cpp)
  2. As a group with Elson & Ahmed we then made some amendments to these files, mostly relating to syntax issues, incorrect bit sizes and explicitly mentioning  connections. We went through each module line by line and also used gtkwave for this
![image](https://github.com/user-attachments/assets/a2ff696c-f957-4000-ab83-a0de5c5fbe6c)
  4. As the team member charged with overseeing the integration and implementing the overall testbench, I also had to briefly edit (ie. added a newline at the end of the module, change bit size) or declare/rename certain variables in other modules (program_counter.sv, registerfile.sv, rom.sv...)
  5. Wrote the original doit.sh file, with less complete folder structure than the current doit.sh script we use, taken from the files provided for lab 4
![image](https://github.com/user-attachments/assets/e049cbc5-ca44-4278-9b77-3e26f173d2c1)
  6. Copied in the verify.cpp (now discarded), mux_tb.cpp, testbench.h, base_testbench.h and compile.sh provided to us in our group repo
  7. Created some assembly files such as counter.s, xor.s and or.s, as well as creating a expected value comment for comparison's sake
![image](https://github.com/user-attachments/assets/0858de9a-0b5e-4ac9-98c3-3e1236e0516b)
![image](https://github.com/user-attachments/assets/3c76ca27-abcf-4528-909e-a5d998053b2e)
![image](https://github.com/user-attachments/assets/034db0ea-da4a-46e0-a513-f7eecdba49b7)




        



