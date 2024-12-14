# Personal Statement: Jihwan Shin

**Name:** Jihwan Shin
**CID:** 02086247
**Github Username:** Jihwan, zookazooka

## Overview

  - [Summary of Contributions](#summary-of-contributions)
    - [Lab 4](#lab-4)
    - [Single Cycle CPU](#single-cycle-cpu)
    - [Cache](#cache) 
- [What I learned](#what-i-learned)
- [Mistakes I made](#mistakes-i-made)
- [What I would do differently](#what-i-would-do-differently)

## Summary of Contributions

### Lab 4

In the implementation of the simplified RISC-V for Lab 4, I was in charge of implementing:
- the **Instruction Memory V1(ROM)** module (rom.sv)
- the **Sign Extension** module (signextension.sv)
- the **testbench** for the **Instruction Memory V1(ROM), Sign Extension** module

The implementation of the instruction memory module is shown in following commit: [ROM](https://github.com/aa6dcc/RISC-V-Team2/commit/dd101547daddd0602ca33e8654cb0f617a4838dd#diff-728ebb3841732dd9fdfee444ed5151375b39932d8280e26bb8821cffc501530d)

As of now, for lab 4 we decided that it was easier to load the instructions into the ROM itself, which is shown in the following image: ![Assembly Code](https://github.com/EIE2-IAC-Labs/Lab4-Reduced-RISC-V/blob/main/images/code1.jpg)

The method that we used to decipher the assembly code was given to us in the lab4 repo, which was essentially an online assembly generator site.

In order to implement the ROM Module, I had to add appropriate paramters and input signals, such as the clk, addr and instr. We also had to make early on in the project that we agree on the naming of the signals and make sure that they are used consistently throughtout the group project.

![image](https://github.com/user-attachments/assets/70298701-886b-430a-9e98-0a74974fc909)

Below is code of the 7 instructions that correspond to the given assembly code above.

![image](https://github.com/user-attachments/assets/52c6d9eb-2177-446c-86a0-34061cf092bd)

Later down the line, instead of reading off of it from a .mem or .hex file, we implemented a more technical ROM that actually could read the files from a given file location. We also made sure to initialize all of the contents inside the ROM to its default value of zero for each cell. This effectively prevented any sort of bugs that could have risen in case there was already content within the ROM before use.

The implementation of the sign extension module required 2 instructions, the I-type and the B-type instructions. I managed to implement the I-type instructions as shown in the following commit(At the time we were all working on Antoine's laptop): [Sign_extension](https://github.com/aa6dcc/RISC-V-Team2/commit/f332eedb3b22298e2e9759f0b920a9d4794d299e)

The sign extension module was fairly simple, since I only implemented the I-type instruction that effectively copy-pasted the MSB up to 32 bits:

![image](https://github.com/user-attachments/assets/ee01ef8c-8a95-4a7d-aa84-e4e145a78b22)

Again as with most modules as we progressed further into implementing the goals, many changes have been applied and added.

Along with the 2 initial modules that I have implemented, I also created the testbenches for both modules: [ROM and Sign extension Testbench](https://github.com/aa6dcc/RISC-V-Team2/commit/a1d1e32ab6dbc1e5fb438f5bcfbbe530a0d8f907#diff-b3d3cff2c77df15f509d38ec33d3a1ba5be630fabbccbae9ccb7bed8928e5900).

I've learned the fundamentals behind testing whilst implementing these testbenches, such as initiating a specific test and evaluating it using the EXPECT_EQ keyword:

Below is a given example of one of the testbenches inside the ROM testbench that I have implemented that includes evaluation of the matching of all the 7 instructions given:
![image](https://github.com/user-attachments/assets/dba071e2-df10-4676-9105-adcbd6bfd0cd)

The sign extension testbench on the other hand required multiple test cases to make sure that the output of the sign extension matched the corresponding ImmSrc inputs correctly. As can be observed the testbench was for a later version of the sign extension that Elson has additionally implemented(Such as the B-type sign extension)

---
### Single Cycle CPU

The Singe Cycle CPU stage essentially consists of creating an additional data memory, and also verifying that the CPU was functioning correctly by running it under 2 tests, the f1lights program and the PDF program.

This was where many changes were made for each individual module/testbench, due to having to implement more instruction operations as given in the lecture slides since the given programs required much more instructions than the original program which only consisted of 2 instructions: the addi and the beq.

This stage required large amounts of debugging, where I was in charge of the verification of the PDF program, as shown here: ![PDF1](https://github.com/user-attachments/assets/99c1c954-8ee2-449d-adaf-65545aee1a77)
![PDF2](https://github.com/user-attachments/assets/69986156-2fd2-4172-a027-798fa61d4a58)

In order to debug this issue, I had to use GTKWave extensively to figure out what was going on. It turns out that the output of the GTKWave, which in this case would be the **Result** output out of the mux after the data memory was constantly **outputting zero** when it reached the end of the first subroutine "init".

Having analyzed the issue in that something was wrong with the ret implementation of the code, with the significant help of Ahmed we were able to debug the issue of the PDF program in a remote teams call.

Essentially the issue with the pdf was that the JAL/JALR instruction implementation was incorrect, with the ret instruction essentially being a special specific case of JALR where ret = JALR x0 0(x0).

Below is a diagram to better understand the entirety of the situation, and in the end Ahmed implemented the debugging.

![Diagram for PDF](https://github.com/user-attachments/assets/933e7c78-4d48-4d4e-a3bb-65d8780b2629)

As shown above the entire datapath of the CPU has been modified slightly with an additional mux and input coming from the control Unit named **WD3Src**

---
### Cache

Me and Antoine started working on the direct-mapped Cache separately, and I successfully implemented up to the read logic of the cache after going through Antoine's implementation which helped me alot since he figured out the implementation first. We continued more work on Antoine's implementation, finally Elson finished up the module with its respective testbench.

Below is a diagram of the Cache that I was planning on implementing:

![Diagram for Cache](https://github.com/user-attachments/assets/45d3f703-6500-419b-b420-06ce7d5806c4)

And the following initial commits that I have been working on can be found as screenshots here, since the entire cache branch was abandoned due to mismanagement of the GitHub branch/repo.

![Jihwan's Cache commits 2](https://github.com/user-attachments/assets/29cbfa48-a740-48b2-a68b-a44c03d4c60e)
![Jihwan's Cache commits 3](https://github.com/user-attachments/assets/c1f095dd-57ce-422d-89c6-166d3ff0d4f0)
![Jihwan's Cache commits 1](https://github.com/user-attachments/assets/6447b236-3d5a-4a24-891b-37bdbd769da6)

As seen in the commits above I was working on cache(ver2).

## What I learned

This project felt like a double-sided sword for me, it was extremely challenging and tough, but at the same time very rewarding nonetheless. There were many things that I have learnt throughout the course of the group project.

Firstly, it introduced me to SystemVerilog and how it is written. Indulging in a hands-on project like this, I learned the fundamental structures used in System Verilog such as the always_ff() block with its sequential logic and the always_comb() block with its combinational logic. 

Secondly, it was my first time using git for version control in a project. I was able to learn the significant aspects of GitHub, such as merging branches and debugging the conflicts. I also learned how to manage my work with my other teammates using the pull/push function within GitHub. It also significantly improved my insights into how common software development projects are run at a team scale. 

Lastly, I believe this project had helped me significantly in reaching a deeper level of understanding of Computer architecture. Being given the opportunity to work as a team and put together and solidify the theoretical knowledge, and then actually apply the knowledge ourselves to create a functioning RISCV CPU was a very precious experience. More importantly, even though I had some trouble with understanding the theory behind what I was supposed to do, my teammates were willing to help and guide me in the right direction, which significantly helped with my understanding of the module.

## Mistakes I made

1. When implementing the sign extension module, I struggled in implementing the branch instruction because I still struggled on how the branch instruction machine code would function, especially when it came to deciphering the machine code. Therefore I couldn't implement it fully without the help of my teammates.

2. It took some time in trying to debug the PDF file, even though I have analyzed the problem behind it. It seemed it was due to my lack of understanding of fully understanding  the RISCV CPU architecture at the time, which led to a slight delay in delivering the testbench.

3. Lastly, it took some time for me to understand the concepts of the CPU relative to others, which therefore led to slight delays when trying to deliver/finish the tasks in time. I believe that if I had more time to prepare in advance for the group project, I would have been able to swiftly deliver more results without the help of my teammates. Unfortunately this wasn't the case which is why I think I have relatively less commits than my other teammates especially since we didn't define a clean and organised way in the boundaries of how our tasks were assigned originally.

## What I would do differently

Overall, besides the downsides, I still believe we worked well as a team, and I am most definitely proud of the work we produced in such a short time. However, as mentioned above, if we were to collaborate again on a RISC-V CPU design, I would ensure a more organised way of dealing with the group project, especially when it came down to properly assigning roles and tasks so that they aren't as easily delegated, and additionally study and prepare more in advance to help with the understanding of the RISCV CPU for a more smoother team experience.
