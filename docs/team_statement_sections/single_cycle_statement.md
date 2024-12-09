' "If debugging is the process of removing software bugs, then programming must be the process of putting them in." '
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
