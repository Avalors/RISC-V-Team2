# Antoine's Logbook 

## Role

For lab 4, I was in charge of the doit.sh file, as well as the integration and overall testbenching (top.sv and top_tb.cpp). I also added some assembly files (xor.s, or.s, counter.s) and copied files from the lab 4 instructions (verify.cpp, mux_tb.cpp, compile.sh).

For the rest of the project, I got to familiarise myself with the ALU unit, as well as testbenching my own modules, and then working as a team on data memory and the pdf testbench (adding comments and starting on the python graphing program). 
I fully implemented the cache (one-way and two-way, and 3 assembly files) and started on the branch prediction too (2-bit simple dynamic module and the relevant assembly file).

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

### 01/12/2024
    - First fully functional lab 4

### 02/12/2024
    - Started working on the single cycle, created the respective branch
    - Started working on the data memory with Ahmed

### 03/12/2024
    - Started working on the data memory testbench

### 04/12/2024
    - Edited the data memory and data memory testbench

### 05/12/2024
    - Started working on the pdf testbench, imported files from the project brief
    - Added comments to the ALU.sv module

## 06/12/2024
    - Had to work on some admin tasks (updating the README, merging branches)
    - Worked on the plotting the pdf script in Python

## 08/12/2024
    - Updated the README, added in graphs of the pdf script as well as Vbuddy videos

## 09/12/2024
    - Amended the README script
    - Wrote team statements for the lab4 and Single-cycle sections
    - Started working on cache: created the cache branch and a draft for cache

## 10/12/2024
    - Finished the cache module
    - Wrote two test cache cases in assembly
    - Sat with Elson to see how to implement the cache in the top file
    - Updated the README
    - Started branch prediction

## 11/12/2024
    - Worked with Elson on debugging the one-way cache module, going more in depth on the two-way cache 
    - Changed AddrMode from 3 bits to 4 bits and had to make the relevant changes in data memory, control unit and top file
    - Used GTKwave for debugging and verifying the hit/miss rate
    - Worked on updating the README

![image](https://github.com/user-attachments/assets/889df366-2875-471d-a3ea-9ac5b6f69d7e)

## 12/12/2024
    - Worked on branch prediction
    - Worked on the README

## 13/12/2024
    - Fully implemented the branch prediction team statement as well as the cache team statement
    - Worked on branch prediction and integration
    - Wrote my personal statement

# Work by section

## Lab 4

- As repo master:
    1. Took charge of many commits and amendments including updating the team logbook and the README file
    2. Added screenshots of gtkwave, of the top level schematic, code snippets as proof of work, video
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
  6. Added comments to several modules, including the ALU
  7. Fully designed the README
  8. Copied several modules from the project brief to our repo

![image](https://github.com/user-attachments/assets/e049cbc5-ca44-4278-9b77-3e26f173d2c1)

  7. Copied in the verify.cpp (now discarded), mux_tb.cpp, testbench.h, base_testbench.h and compile.sh provided to us in our group repo
  8. Created some assembly files such as counter.s, xor.s and or.s, as well as creating a expected value comment for comparison's sake
![image](https://github.com/user-attachments/assets/0858de9a-0b5e-4ac9-98c3-3e1236e0516b)
![image](https://github.com/user-attachments/assets/3c76ca27-abcf-4528-909e-a5d998053b2e)
![image](https://github.com/user-attachments/assets/034db0ea-da4a-46e0-a513-f7eecdba49b7)

## Single Cycle

- As data memory member:
  1. Chose a little-endian storage and implemented it using pseudo-instructions
![WhatsApp Image 2024-12-01 at 17 30 10_e1c02a71](https://github.com/user-attachments/assets/8456204a-eab3-4911-8076-8c556e6c0885)
![WhatsApp Image 2024-12-01 at 17 37 17_c6b1f882](https://github.com/user-attachments/assets/c0bbc31c-7c97-4c37-af00-50db77d61f35)
![image](https://github.com/user-attachments/assets/2ff1aff3-a766-4517-a26b-f9536dd0bb9a)
  2. Created the data memory module and set it to 20 bits
![image](https://github.com/user-attachments/assets/03a2cb35-f02b-4283-bab7-491124b0516b)
 
  3. Here we initialise it to 4, 8-bit arrays within the data memory module:
 
![image](https://github.com/user-attachments/assets/c253fee4-26cc-48c4-9710-c71e12a0a7ed)

```SV
    always_comb begin
        case(AddrMode)
        
        // load byte
        3'b000:begin
            temp = {24{array[A][7]},array[A]};
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

        // store byte
        3'b101:begin
            array[A] = WD[7:0];
        end
        
        // store half
        3'b110:begin
            array[A] = WD[7:0];
            array[A+1] = WD[15:8];
        end

        // store word
        3'b111:begin
            array[A] = WD[7:0]; // stores the least significant byte
            array[A+1] = WD[15:8];
            array[A+2] = WD[23:16];
            array[A+3] = WD[32:24]; // stores the most significant byte
        end

        endcase
    end


    assign RD = temp; 
```

In the code above, we created a temp variable which allows us to implement 8 different instructions (store byte, load byte... defined as above by concatenation or using byte-by-byte little endian assignment) and is then assigned to RD
  4. Worked on the first version of data memory testbench, integrated within the top_tb.cpp program.

The idea here was that I would try to test each instruction implemented in the data_mem.sv module by running simulations and comparing the output to the expected value. The next step would've been to use gtkwave to see what instructions should be running on what clock cycle and then amend the code according to that (as all the tests would be within a large for loop). This would imply making many if statements ie. (if == 2) where i corresponds to the clock cycle to make sure the module and testbench are synchronised

![image](https://github.com/user-attachments/assets/bf7f44da-1227-4b0f-b79c-28fa33e469e3)
![image](https://github.com/user-attachments/assets/fcb718d3-44ee-47e3-94d1-d0a515cdf405)

  5. Started working on the pdf testbench

Created a data folder within tb and added triangle.mem, gaussian.mem and noisy.mem

Then did some debugging, testing, trying to sync and implement within the top file, on the pdf testbench before creating a Python code to visualise it (analyse.py)

  6. Worked on debugging the f1_lights module and testbench using gtkwave and Vbuddy

I wondered how to implement a random number generator in assembly and thought about implementing an LCG (Linear Congruential Generator)

![image](https://github.com/user-attachments/assets/4d0b7136-3de7-4fd8-86dd-f14590a3d52b)

  7. Worked on implementing an analyse.py script using plotly to visualise the PDF

## Cache & Branch Prediction

  1. Fully implemented the one-way set associative cache

Originally started off with a 3-bit AddrMode signal, but later amended that to 4 bits after some debugging via GTKwave.

![image](https://github.com/user-attachments/assets/c178be15-c7a7-4736-9198-ffce1a548d41)

I used a reset signal for the testbenching to make sure the cache was empty which isn't used for the top level implementation. 
I had some issues calculating the hit and miss ratios and implemented two different logics for read and write instructions.

        //Read logic: case (AddrMode) 
            3'b000: out = {{24{cache_mem[set].data[7]}}, cache_mem[set].data[7:0]};   // LB (signed byte)
            3'b001: out = {{16{cache_mem[set].data[15]}}, cache_mem[set].data[15:0]}; // LH (signed halfword)
            3'b010: out = cache_mem[set].data;                                        // LW (full word)
            3'b011: out = {24'b0, cache_mem[set].data[7:0]};                          // LBU (unsigned byte)
            3'b100: out = {16'b0, cache_mem[set].data[15:0]};                         // LHU (unsigned halfword)
            default: out = 32'b0;
        endcase

        //Write logic: 
        always_ff @(posedge clk or posedge reset) begin
            if (reset) begin
                // Reset all cache entries
                for (int i = 0; i < 8; i++) begin
                    cache_mem[i].valid <= 1'b0;
                    cache_mem[i].tag <= 27'b0;
                    cache_mem[i].data <= 32'b0;
                end
                // Reset performance counters
                access_counter <= 0;
                hit_counter <= 0;
                miss_counter <= 0;
                hit <= 1'b0;
                end else begin

        
            // Update performance counters
            // Only update performance counters for load/store operations
            if (AddrMode == 4'b0010 || AddrMode == 4'b0111 || AddrMode == 4'b0000 || AddrMode == 4'b0001 || AddrMode == 4'b0101 || AddrMode == 4'b0110) begin
                access_counter <= access_counter + 1;
                if (cache_mem[set].valid && cache_mem[set].tag == tag) begin
                    hit_counter <= hit_counter + 1; // Cache hit
                end else begin
                    miss_counter <= miss_counter + 1; // Cache miss
                    // Update cache on miss (simulate memory fetch)
                    cache_mem[set].valid <= 1'b1; // Mark as valid
                    cache_mem[set].tag <= tag;    // Update tag
                    cache_mem[set].data <= RD;   // Fetch data from memory
                end
            end

![WhatsApp Image 2024-12-11 at 15 32 39_abd640c8](https://github.com/user-attachments/assets/3ed575b8-904c-4395-b56a-1d8fe2f7d851)

  2. Fully implemented the two-way set associative cache using an LRU policy

Built on top of the direct-mapped cache, but changed the tag from 27 bits to 28 bits

  4. Implemented three assembly test files in assembly for the cache

These were cache_read.s, cache_temporal_locality.s and cache.s. They allowed us to compare how many hits and misses we were getting compared to how many we were expecting. 

  4. Kicked off the branch prediction, trying to implement a simple dynamic 2-bit branch prediction, as well as the branch_prediction.s assembly file.

Here we can see we implemented a FSM, using knowledge acquired in lab 3:

![image](https://github.com/user-attachments/assets/59745681-3b06-426c-b565-05fcdf41d690)

![image](https://github.com/user-attachments/assets/8c6d933b-4ba2-4f6d-8d7e-1aa8df097041)

![WhatsApp Image 2024-12-11 at 22 02 57_09869dea](https://github.com/user-attachments/assets/013e13d0-b9dd-485f-947c-ee8fa5ab5739)

![image](https://github.com/user-attachments/assets/2372924e-5e68-40b9-8bc2-acaf7a683c8e)






        


