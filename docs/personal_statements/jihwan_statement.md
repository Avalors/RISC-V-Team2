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

Later down the line, instead of reading off of it from a .mem or .hex file, we implemented a more technical ROM that actually could read the files from a given file location.

The implementation of the sign extension module required 2 instructions, the I-type and the B-type instructions. I managed to implement the I-type instructions as shown in the following commit(At the time we were all working on Antoine's laptop): [Sign_extension](https://github.com/aa6dcc/RISC-V-Team2/commit/f332eedb3b22298e2e9759f0b920a9d4794d299e)

Again as with most modules as we progressed further into implementing the goals, many changes have been applied and added.

Along with the 2 initial modules that I have implemented, I also created the testbenches for both modules: [ROM and Sign extension Testbench](https://github.com/aa6dcc/RISC-V-Team2/commit/a1d1e32ab6dbc1e5fb438f5bcfbbe530a0d8f907#diff-b3d3cff2c77df15f509d38ec33d3a1ba5be630fabbccbae9ccb7bed8928e5900).

The ROM testbench was fairly simple, essentially going over the ROM and making sure that the instructions were all contained. The sign extension testbench on the other hand required multiple test cases to make sure that the output of the sign extension matched the corresponding ImmSrc inputs correctly. As can be observed the testbench was for a later version of the sign extension that Elson has additionally implemented(Such as the B-type sign extension)

---
### Single Cycle CPU

The Singe Cycle CPU stage essentially consists of creating an additional data memory, and also verifying that the CPU was functioning correctly by running it under 2 tests, the f1lights program and the PDF program.

This was where many changes were made for each individual module/testbench, due to having to implement more instruction operations as given in the lecture slides since the given programs required much more instructions than the original program which only consisted of 2 instructions: the addi and the beq.

This stage required large amounts of debugging, where I was in charge of the verification of the PDF program, as shown here: //![PDF1](https://github.com/user-attachments/assets/99c1c954-8ee2-449d-adaf-65545aee1a77)
![PDF2](https://github.com/user-attachments/assets/69986156-2fd2-4172-a027-798fa61d4a58)

In order to debug this issue, I had to use GTKWave extensively to figure out what was going on. It turns out that the output of the GTKWave, which in this case would be the **Result** output out of the mux after the data memory was constantly **outputting zero** when it reached the end of the first subroutine "init".

Having analyzed the issue in that something was wrong with the ret implementation of the code, with the significant help of Ahmed we were able to debug the issue of the PDF program in a remote teams call.

Essentially the issue with the pdf was that the JAL/JALR instruction implementation was incorrect, with the ret instruction essentially being a special specific case of JALR where ret = JALR x0 0(x0).

Below is a diagram to better understand the entirety of the situation, and in the end Ahmed implemented the debugging.

![Diagram for PDF](https://github.com/user-attachments/assets/933e7c78-4d48-4d4e-a3bb-65d8780b2629)

As shown above the entire datapath of the CPU has been modified slightly with an additional mux and input coming from the control Unit named **WD3Src**

---
### Cache

Me and Antoine started working on the direct-mapped Cache separately, and I successfully implemented up to the read logic of the cache. However, we continued more work on Antoine's implementation. Additionally Elson finalised finishing up the module with its respective testbench.

Below is a diagram of the Cache that I was planning on implementing:

![Diagram for Cache](https://github.com/user-attachments/assets/45d3f703-6500-419b-b420-06ce7d5806c4)

And the following initial commits that I have been working on can be found as screenshots here, since the entire cache branch was abandoned due to mismanagement of the GitHub branch/repo.

![Jihwan's Cache commits 1](https://github.com/user-attachments/assets/6447b236-3d5a-4a24-891b-37bdbd769da6)
![Jihwan's Cache commits 3](https://github.com/user-attachments/assets/c1f095dd-57ce-422d-89c6-166d3ff0d4f0)
![Jihwan's Cache commits 2](https://github.com/user-attachments/assets/29cbfa48-a740-48b2-a68b-a44c03d4c60e)

As seen in the commits above I was working on cache(ver2).

## What I learned

This project felt like a double-sided sword for me, it was extremely challenging and tough, but at the same time very rewarding nonetheless. There were many things that I have learnt throughout the course of the group project.

Firstly, it introduced me to SystemVerilog and how it is written. Indulging in a hands-on project like this, I learned the fundamental structures used in System Verilog such as the always_ff() block with its sequential logic and the always_comb() block with its combinational logic. 

Secondly, it was my first time using git for version control in a project. I was able to learn the significant aspects of GitHub, such as merging branches and debugging the conflicts. I also learned how to manage my work with my other teammates using the pull/push function within GitHub. It also significantly improved my insights into how common software development projects are run at a team scale. 

Lastly, I believe this project had helped me significantly in reaching a deeper level of understanding of Computer architecture. Being given the opportunity to work as a team and put together and solidify the theoretical knowledge, and then actually apply the knowledge ourselves to create a functioning RISCV CPU was a very precious experience. More importantly, even though I had some trouble with understanding the theory behind what I was supposed to do, my teammates were willing to help and guide me in the right direction, which significantly helped with my understanding of the module.

## Mistakes I made



## What I would do differently

Overall, besides the downsides, I still believe we worked well as a team, and I am most definitely proud of the work we produced in such a short time. However, as mentioned above, if we were to collaborate again on a RISC-V CPU design, I would ensure a more organised way of dealing with the group project, and make sure that I am more active next time.
