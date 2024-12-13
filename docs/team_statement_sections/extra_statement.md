# Branch Prediction

| Table of Contents |
|-|
| [Introduction](#introduction) |
| [Design Specifications](#design-specifications) |

## Introduction

Branch prediction is a  technique in CPU design to improve instruction pipeline performance by attempting to guess the outcome of conditional branch instructions before they are actually executed. In RISC-V architecture, branch prediction helps mitigate the performance penalty associated with branch instructions, which can cause pipeline stalls.

In our case, we implemetented a simple dynamic 2-bit branch prediction, using historical information for prediction. The logic behind this is: if branch was taken last time, predict will also be taken next time.

We want to maintain a table of branch instructions (called branch target buffer, which includes destination address of branch) and what happened most recently.

We were able to use our knowledge of FSMs thanks to the work we did in lab 3. 

## Design Specifications

We started off by creating a new local branch, copied off the pipeline branch.

The first step was to gain a strong intuition regarding 5-stage pipelining, but also understanding the program counter and top modules. 

Before implementing the branch predictor, we had to go over the pipelining branch to understand what each signal was doing, what was being implemented at each stage and how/when to fetch, stall, flush or forward.

The pipelining stages in order are:
  - Fetch
  - Decode
  - Execute
  - Memory
  - Writeback

For the fetch stage:
  - Branch predictor makes prediction (pred_taken signal)
  - Program counter uses prediction to speculatively fetch:
      - If pred_taken: PC = PC + ImmOp
      - If not pred_taken: PC = PC + 4
   
and for the execute stage:
  - Actual branch outcome (BranchCondE) is compared with prediction
  - On misprediction:
      - PCsrcE set to correct path
      - Flush signal triggered
      - Pipeline flushed to handle misprediction

![image](https://github.com/user-attachments/assets/8817e07f-d74a-4832-9221-adf632c221cf)

For the branch prediction module, we set the default state as STRONGLY NOT TAKEN. We had also considered implementing a static predictor with dynamic initial allocation: 
  - Forward branches (positive offset) → Start at WEAKLY_NOT_TAKEN
  - Backward branches (negative offset) → Start at WEAKLY_TAKEN

Prediction is based on the most significant bit (MSB):
  - MSB = 1: Predict taken
  - MSB = 0: Predict not taken

![image](https://github.com/user-attachments/assets/1eeb8945-b9ef-4d5e-ae69-573041c17640)

![image](https://github.com/user-attachments/assets/13fc2e57-34de-4ff3-b4db-66df63bbbaa6)

In the image below, we can see the logic of the branch_prediction.sv module: implementing state transitions based off past data.

From STRONGLY_NOT_TAKEN:

If branch taken: → WEAKLY_NOT_TAKEN
If branch not taken: → STRONGLY_NOT_TAKEN

From WEAKLY_NOT_TAKEN:

If branch taken: → WEAKLY_TAKEN
If branch not taken: → STRONGLY_NOT_TAKEN

From WEAKLY_TAKEN:

If branch taken: → STRONGLY_TAKEN
If branch not taken: → WEAKLY_NOT_TAKEN

From STRONGLY_TAKEN:

If branch taken: → STRONGLY_TAKEN
If branch not taken: → WEAKLY_TAKEN

![image](https://github.com/user-attachments/assets/6e58928a-7b76-4d47-a1c0-35c150668b10)

If we consider the overall performance:
  - Misprediction Penalty:
      - 2 cycles minimum (Fetch and Decode stages must be flushed)
      - Additional cycles for pipeline refill
  - Hardware Cost:
      - 2 bits per predictor state
      - Additional control logic for state transitions

We also used the assembly file from Lecture 11 to test our branch prediction:

![image](https://github.com/user-attachments/assets/a601b19c-ad53-4a79-9814-8e5e11ff27a5)

The branch_prediction module was implemented relatively fast and was proved successful, but another issue was integrating it correctly.

![WhatsApp Image 2024-12-11 at 22 02 57_81b446a5](https://github.com/user-attachments/assets/44bd6959-c3e1-4a16-9515-41f4826ac7de)


