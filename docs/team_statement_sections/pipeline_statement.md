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
In this design, we implemented a 5-stage pipeline architecture to optimize the instruction execution flow. The stages are:

FETCH
DECODE
EXECUTE
MEMORY
WRITE-BACK
Each stage has a specific function, which allows the processor to execute multiple instructions concurrently in a pipelined manner. This approach maximizes throughput, minimizes idle stages, and improves the overall efficiency of the processor.

### Stages of the Pipeline
1. Instruction Fetch (IF):
Fetches the instruction from memory.
The Program Counter (PC) points to the next instruction to be fetched.
The instruction is fetched and passed to the next stage for decoding.

2. Instruction Decode (ID):
Decodes the instruction and reads the required registers.
The control unit generates the necessary control signals (e.g., ALU operation, memory access).
The data from registers are retrieved and prepared for execution.

3. Execution (EX):
Performs the arithmetic or logical operation defined by the instruction.
For memory instructions, this stage computes the effective address.
The ALU performs operations like addition, subtraction, or comparison.

4. Memory Access (MEM):
If the instruction involves memory (e.g., load or store), this stage accesses the memory.
Memory read or write operations are performed, depending on the instruction type.

5. Write Back (WB):
The result of the operation (from the ALU or memory) is written back into the register file.
The instruction is now completed, and the data is ready to be used in subsequent instructions.
Pipeline Registers
Pipeline registers are the key components that connect each stage in the pipeline. They store the intermediate results and control signals, ensuring that each stage can operate independently and efficiently.

### Purpose of Pipeline Registers:
These registers hold critical information, such as the instruction, ALU result, or data to be written back to the register file. The registers enable each stage to work on a different instruction without interfering with each other. Without these registers, there would be no mechanism to transfer data from one stage to the next, and the pipeline would stall or fail.
Key Pipeline Registers
1. IF/ID Register
Stores the instruction fetched in the IF stage and passes it to the ID stage.
Contains the instruction and the updated Program Counter (PC).

2. ID/EX Register
Stores the decoded instruction and the operands read from the register file in the ID stage.
Passes this information, including control signals, to the EX stage.

3. EX/MEM Register
Stores the result of the execution stage, including the ALU result and the memory address to be accessed (if necessary).
Passes this information to the MEM stage for memory access or further processing.

4. MEM/WB Register
Stores the result of the memory operation (if the instruction was a load) or the ALU result (if the instruction was an arithmetic or logical operation).
Passes this information to the WB stage, where the final result is written back to the register file.

### Why a 5-Stage Pipeline?
**Benefits of a 5-Stage Pipeline:**
1. Increased Throughput:
By splitting the instruction execution into multiple stages, we allow the processor to work on multiple instructions at once, significantly improving the overall throughput. Each stage can work on a different instruction, ensuring that the pipeline operates at maximum efficiency.

2. Reduced Latency:
A five-stage pipeline reduces the time it takes to process an instruction compared to a single-stage processor. This allows more instructions to be processed in a given clock cycle.

3. Parallelism:
The use of separate stages enables parallelism. As one instruction is being executed, another is being decoded, and a third is being fetched. This overlap allows the processor to execute more instructions in a given time.

4. Simpler Design and Control:
A 5-stage pipeline strikes a balance between complexity and performance. While more stages could potentially yield greater parallelism, a 5-stage pipeline keeps the design manageable and the control logic simpler compared to more complex multi-stage pipelines.

5. Improved Performance without Overcomplication:
Adding more stages (like in a 7 or 10-stage pipeline) could improve performance by allowing even more parallelism, but it would also introduce additional overhead, such as more complex control and data forwarding. The 5-stage pipeline provides good performance while keeping the design relatively straightforward.
