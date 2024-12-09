"If debugging is the process of removing software bugs, then programming must be the process of putting them in."
— Edsger W. Dijkstra 

# Single Cycle Version

| Table of Contents |
|-|
| [Introduction](#introduction) |
| [Design Specifications](#design-specifications) |
| [Simulation and Testing](#simulation-and-testing) |

## Introduction

Once 'lab4' was implemented, our next challenge was to implement Single-cycle. We created a separate branch for this and added a data memory and a PDF testbench. 
We also had to edit several modules to account for the new changes, and tested our code using GTKwave, Verilator and the PDF, as well as Vbuddy (for f1_lights).
The control unit module, as well as the top module, required many amendments.

## Design Specifications

We used 20 bits for the data memory, meaning we had 2^20 memory addresses.

![Memory map](https://github.com/user-attachments/assets/f3c1a829-e481-4c55-87a4-0e4658d5db16)

![Data memory](https://github.com/user-attachments/assets/fff3502b-2b55-4ce8-9b49-9290fa49449c)

We added the AddrMode signal in order to efficiently implement byte addressing for 'lb' and 'sb' instructions. 

Here is how we initialised our data memory:

![Initialisation](https://github.com/user-attachments/assets/345b3dad-c85a-4342-9f1a-28cc72ed0b15)

We can see the 3-bit AddrMode signal, and we can also see that ADDR_REAL_WIDTH is set to 20. 

Below, we can see the code section which reads the data.hex file found in the rtl folder:

![Read](https://github.com/user-attachments/assets/01068b58-f79e-42f8-ac19-130fe7f33f80)

Here is the code for load and store instructions:

![image](https://github.com/user-attachments/assets/56351814-ec9f-47d6-8c66-7f18410f5c0e)

![image](https://github.com/user-attachments/assets/a069f3b9-33b2-4f77-aa4d-f4a8e0e9e9d1)

Our logic was to associate 3-bit codes with a certain instruction, which we were able to test using the following assembly file:

![image](https://github.com/user-attachments/assets/3f9d2fbe-04b3-4f94-8f1a-a88ce55be975)

We spent a lot of time editing the control unit, specifically dealing with the RET and JALR instructions. 

![image](https://github.com/user-attachments/assets/93437a5e-860b-4a46-8a74-2e71d3f5343f)

Here is an example of how we implemented these instructions case by case and according to the input signals.

![image](https://github.com/user-attachments/assets/1a597df9-eedd-4fbc-abba-9891714034b6)

We then used the testbench to verify the control unit was fully operational. 

![image](https://github.com/user-attachments/assets/0d7ddafa-8087-400c-a0f3-3e7f58d04050)

The 'compile.sh' and 'doit.sh' scripts help compile and assemble C and ASM tests in the testbench. 

We tested our integrated single cycle processor using Vbuddy, by running 'f1_lights.s' but also by running the PDF on it for several signals: sine, triangle, noise, Gaussian.

![image](https://github.com/user-attachments/assets/2144c6ae-698c-461b-94cf-b4f35223669b)

