# Pipelined RISC-V with hazard handling

| Table of Contents |
|-|
| [Introduction](#Introduction) |
| [Design Specification](#Design-Specification) |
| [Data Hazards](#data-hazards) |
| [Control Hazards](#control-hazards) |
| [Simulation and Testing](#simulation-and-testing) |

---
## Introduction

### Theory
Implementing a **pipeline** onto our RISCV CPU should theoretically improve its performance (if implemented physically) since it **reduces the minimum time required for each cycle**, allowing you to increase the clock speed and therefore increase the net number of instructions executed per second.

Compared to a **single-cycle** implementation the number of instructions executed per cycle remains the same (1 per cycle - ideally with no flushes and stalls); therefore the increase in performance comes from the fact that in a single cycle implementation the **minimum cycle time (cycle period)** must be equal to the time it takes for an instruction to be **fetched** into the CPU until its **write-back**, whilst for a pipelined CPU this minimum time is equal to the longest completion time for a stage within your pipeline, which improves the performance as more hardware is utilised during a cycle instead of left idle like in a single-cycle implementation.

![image](https://github.com/user-attachments/assets/69a261f9-3c5c-486e-bd6b-16255e68db99)

Despite these improvements in performance, often 1 instruction is not exected per cycle since if an earlier instruction requires data that a later instruction in the pipeline has yet to write back to the register (called a **data-hazard**) the pipeline must be **stalled** before the earlier instruction can move past the register access stage to get its **operands**, which reults in redundant cycles and hence less than 1 instruction executed per cycle on average. This can be resovled however using **forwarrding**, to bypass correct data back to previous instructions in the pipeline before it needs to write-back to the register, whcih works for most instructions.

![image](https://github.com/user-attachments/assets/7e62a1f4-4160-4331-a2c4-111906b1f817)

In some cases, where forwarding is not a sufficient option, **stalls** must still be used (more details later on).

Other delays that reduce the effectiveness of a pipeline, come from **control hazards** caused by having to **flush** the pipeline due to **jump** and **branch** instructions resuliting in different instructions having been fetched in the previous pipelines. (more details later on).

Despite this, this **data hazard stall** cannot be circumvented in our case for load instructions where a stall is still necessassary as the correct data is an output of the data memory instead of the ALU, hence requiring for us to make the bypass whilst its in the write-back stage (for a 5 stage pipeline

## Design Specification
We opted to implement a 5 stage pipline based on the notes in Lecture 8, splitting the harware into: FETCH, DECODE, EXECUTE, MEMORY and 


The reason for this is
