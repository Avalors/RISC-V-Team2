# Elson's Logbook 

## Role

I was in charge of designing the **ALU**, **Register File** and **Mux**, as well as testbenching my own modules, and then working as a team on pipelining, cache memory and branch prediction.
I also helped out in designing the **control unit** and its respective testbench. 

## Timetable details

### 14/11/2024
- Got familiar with the top level design of RISC V, understanding the different units
- Created a first draft program alu.sv and registerfile.sv files for Lab 4 on separate branch then merged
- Got to meet other team members

### 21/11/2024
    - Helped Antoine restructure the repo (e.g. rtl and tb directories)
    - Helped Jihwan to start off the controlunit.sv

### 25/11/2024
    - Uploaded formatting for individual personal statements to repo.
    - Changed the alu.sv and controlunit.sv 

### 27/11/24   
    - Came together as a team to debug the testbenches for alu, mux, sign extension, and top-level as well as the individual modules
    - Antoine did livehsare on VScode where we all worked together on his IDE in which he committed to the github

### 28/11/24
    - Fixed the controlunit testbench, refactored doit.sh script, and added gitignore of obj_dir
    - Helped others push and pull to github and merge changes between remote and local
    - Updated logbook and personal statement

### 29/11/24
    - Met up as a team to fix the program counter, rom, and top testbenches and successfully got all verification test successful


### 30/11/24
- Worked with Ahmed to fix the top testbench to write to gtkwave to simulate our counter: [GTK wave fix and ROM loading via compile.sh - Commit on GitHub](https://github.com/aa6dcc/RISC-V-Team2/commit/edc939dadaaca6523c7ef921765ea0f2ed3c03f0)

- Completed a new instr_mem.sv and respective testbench to be able to directly use complie.sh to compile the assembly file into hex and load into instruction memory (replacing rom.sv in this case)
    
