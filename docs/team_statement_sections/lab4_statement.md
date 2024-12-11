# Lab 4

| Table of Contents |
|-|
| [Introduction](#introduction) |
| [Design Specifications](#design-specifications) |

## Introduction

`Lab 4` allowed us to create a very simplified CPU able to implement a few basic instructions, while building on what we had done in labs 1-3. 
We got to understand the different levels of abstraction in a computer and how a CPU fits within one.

![Computer Architecture - Different levels of abstraction](https://github.com/user-attachments/assets/c9a0d1a2-b70a-4d24-971b-2de0d5a870d6)

![Levels of representation in a computer](https://github.com/user-attachments/assets/7c306816-e5e6-4fa9-b0d0-ad356e9b6541)

![High Level Overview of a Computer System](https://github.com/user-attachments/assets/ac46564b-2f08-4d5f-9366-01b8b84be491)

It made us get a taste for how the different units within the CPU interact, what their purpose is, and how to test or integrate them together. 
It also gave us the opportunity to organise ourselves as a team, use Github and Markdown, try different operating systems (ie. Linux) and keep track of our progress using logbooks (via Obsidian). 

`Lab 4` also made us practice our SystemVerilog skills, as well as our debugging skills via GTKwave and running Vbuddy. 

![Testbench Overview](https://github.com/user-attachments/assets/57dc35f4-578b-4bbb-a87e-00c7a827d6f8)

Here is an example of us using GTKwave: in this example we implemented the 'counter.s' file

This is from the 'waveform.vcd' file:

![counter.s](https://github.com/user-attachments/assets/39848ab4-8169-477f-9469-af8755b5c086)

Here is the assembly code for the 'counter.s' file:

![Assembly code](https://github.com/user-attachments/assets/f3b2b88a-0625-46e2-b4ad-63669f191057)

And here is the ALU.sv file as an example of a SystemVerilog module we wrote:

![ALU.sv module](https://github.com/user-attachments/assets/b395bc30-f076-4a54-9df1-80aa53566b9c)

## Design Specifications

Design Principles of a RISC-V architecture:
  - Simplicity favours regularity
  - Make the common case fast
  - Smaller is faster

We spent a lot of time debugging the top module and top testbench, as well as the control unit, register file, sign extension, instruction memory and their respective testbenches. 
There were several design flaws, such as naming convention (notably in the top file), inconsistencies within the MUX... which were amended later on. Miscommunication was an issue, which led to some instructions being incompatible. 

For example, for the program counter, we initially created the program counter and instruction memory were implemented via word-addressing instead of byte size addressing, meaning each memory location in the instruction memory was 32 bits instead of 8 bits. This meant that our program counter increased by 1 instead of 4 for typical instructions (excluding branch and jump instructions). This meant that when running the assembled RISC-V machine code, the PC-relative offset immediate values did not align with the correct memory addresses. 

Below is a screenshot of the program counter module, and we can see we had previously made the error of implementing a 32'd1 increment instead of a 32'd4 increment.

![Program Counter](https://github.com/user-attachments/assets/93c5fed3-2aa0-465d-9272-29a6752c33fa)

![Operands from Memory](https://github.com/user-attachments/assets/3acb27ca-b7b6-44c3-a5dc-05e1a264600a)

We were able to implement the addi and branch instruction. 

![Instruction Types](https://github.com/user-attachments/assets/297298bf-9fd5-42e5-8007-7df514ce0fcc)

![RISC-V Registers](https://github.com/user-attachments/assets/f6b2c419-63cc-44b9-b68d-f509c2982879)

![High-level Overview](https://github.com/user-attachments/assets/8c942b88-2f9f-4259-bb80-25b50c1babb9)


