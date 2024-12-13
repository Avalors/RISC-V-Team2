# Elson's Logbook 

## Role

I was in charge of designing the **ALU**, **Register File** and **Mux** for Lab 4, as well as testbenching my own modules, and then working as a team on pipelining, cache memory and branch prediction.
I also helped out in designing the **control unit** and its respective testbench. 

## Timetable details

### 14/11/2024
- Got familiar with the top level design of RISC V, understanding the different units
- Created a first draft program alu.sv and registerfile.sv files for Lab 4 on separate branch then merged: [RegisterFile, ALU, and MUX done](https://github.com/aa6dcc/RISC-V-Team2/commit/c84f24871c5a7911610828e2e62cf69224e74bcf)
- Got to meet other team members

### 21/11/2024
- Helped Antoine restructure the repo (e.g. rtl and tb directories)
- Helped Jihwan to start off the controlunit.sv

### 25/11/2024
- Uploaded formatting for individual personal statements to repo.
- Changed the alu.sv and controlunit.sv: [Added controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5fa1a412a6342c5cc21ca651c8444c2814a2f9e5) , [Fixed the control unit testbench and brought in the new doit.sh script](https://github.com/aa6dcc/RISC-V-Team2/commit/5773432255b8a4a536ed3b52fe3cfc900075aa9f)

### 27/11/24   
- Came together as a team to debug the testbenches for alu, mux, sign extension, and top-level as well as the individual modules
- Antoine did livehsare on VScode where we all worked together on his IDE in which he committed to the github: [Restructure folder](https://github.com/aa6dcc/RISC-V-Team2/commit/f9f399da2d43315a25bb588428c69cf0d946753d) , [Added .gitignore to ignore large files and gave our team merge conflicts](https://github.com/aa6dcc/RISC-V-Team2/commit/9af8479508d7274a99b07ba0c5b31bc86df42bb3)

### 28/11/24
- Fixed the controlunit testbench, refactored doit.sh script, and added gitignore of obj_dir
- Helped others push and pull to github and merge changes between remote and local
- Updated logbook and personal statement

### 29/11/24
- Met up as a team to fix the program counter, rom, and top testbenches and successfully got all verification test successful: [Worked on Antoine's Liveshare of VSCode as a team for debugging and testbenching](https://github.com/aa6dcc/RISC-V-Team2/commit/e3fd87fdfd4d9f00b7447949e95964d28db9bb20#diff-9b9a6efe51731ef72a27f44c26c78fb4b1e55f3e88676bf0140041f7af99e2ee): For more detail and evidence see [Team Log (27/11)](../logbooks/team_log.md#team-meetup-27-11).


### 30/11/24
- Worked with Ahmed to fix the top testbench to write to gtkwave to simulate our counter
- Completed a new instr_mem.sv and respective testbench to be able to directly use complie.sh to compile the assembly file into hex and load into instruction memory (replacing rom.sv in this case): [Instruction Memory implementation and Lab 4 debugging: Counter fully working](https://github.com/aa6dcc/RISC-V-Team2/commit/edc939dadaaca6523c7ef921765ea0f2ed3c03f0): For more detail and evidence see [Team Log (30/11)](../logbooks/team_log.md#team-meetup-30-11).
    
### 01/12/24
- Worked on the foundation of the f1_lights.sv and the respective testbench: [F1Lights asm code and respective testbench](https://github.com/aa6dcc/RISC-V-Team2/commit/0a6c948daec468a1f3c2d683eaa48e9bb5bda528) 
- Met up as a team to allocate new tasks and plan forward

### 04/12/24
- Continued the debugging to fully transition from completed lab4 to data memory integration to start single cycle

### 05/12/24
- Worked on debugging the datamem.sv, changing the registerfile.sv, controlunit.sv, top.sv accordingly from the transition of module in lab4 to Single Cyclce using the VSCode Liveshare: [Datamem.sv and testbench fixed](https://github.com/aa6dcc/RISC-V-Team2/commit/5debf7447b5a606f5964e8accc61fbf4fd76eb6e)

### 06/12/24
- Fixed the f1lights.sv and connected to vbuddy to test the light simulation: [Completed F1Lights verification and Vbuddy simulation](https://github.com/aa6dcc/RISC-V-Team2/commit/1a246636d7341bde9bddb56b764e818dfad377fd)

### 08/12/24
-  Tested the pdf testbenches on Vbuddy for all the .mem files and cleaned up the files a bit [PDF fully tested with data/.mem files](https://github.com/aa6dcc/RISC-V-Team2/commit/bd1db301e6254e29d24291ed513287c550939ff7)
-  Implemented the pipelining and got started on the hazard unit [Pipelining implemented and started the hazard unit](https://github.com/aa6dcc/RISC-V-Team2/commit/34617373aca98c16134c2862ff86bcb8c228c509)

### 09/12/24
- Implemented all the instructions in RV32I with so far R-type verification completed: [Added all R-type instr and verification, added the rest of I, J, U, B in controlunit](https://github.com/aa6dcc/RISC-V-Team2/commit/5eccb99f8b08752ab7b98ed65e42157b3a14a190)
- Updated the pipelining modules and new top file for port mapping in pipeline foundation: [Updated modules for pipelining and created new top.sv](https://github.com/aa6dcc/RISC-V-Team2/commit/c4fcc43db2e728a50420522396d9964f21007a58)

### 10/12/24
- Completed the full RV32I changing the controlunit.sv, alu.sv and writing testbenches and asm code for verification: [Completed full RV32I instructions and testbench and asm code for verification](https://github.com/aa6dcc/RISC-V-Team2/commit/14e4e17063317b12e1dfb36917cbb79eb7aec45a)

### 11/12/24
- Completed direct mapped cache with Antoine and respective testbenches and assemnbly code: [Direct-mapped cache completed](https://github.com/aa6dcc/RISC-V-Team2/commit/ca013aad029b479c8335ec7aebd2990b17f65c63)

### 12/12/24
- Merged the direct mapped cache onto the full pipline and RV32I version and tested to work successfully: [Merged full pipeline RV32I onto DM cache and tested a TW cache](https://github.com/aa6dcc/RISC-V-Team2/commit/c118a1d49282d4a143e912e7bd6a1d6fee3edfa4)
- Started on the testing for a two-way set associative cache and top-level integration testing

### 13/12/24
- Finalised documentation for logbooks, personal statements, and team statements
- Started on some extra features on top of stretch goals as a team (e.g branch prediction, interrupts)
- Completed a test to prove the use of TW cache: [Completed a new test to show TW cache working](https://github.com/aa6dcc/RISC-V-Team2/commit/5b7e1cb20ec2663d99f11d20c90e06a9060b265f)
