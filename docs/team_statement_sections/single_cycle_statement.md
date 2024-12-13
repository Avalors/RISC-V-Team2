"If debugging is the process of removing software bugs, then programming must be the process of putting them in."

— Edsger W. Dijkstra 

# Single Cycle Version

| Table of Contents |
|-|
| [Introduction](#introduction) |
| [Design Specifications](#design-specifications) |
| [Simulation and Testing](#simulation-and-testing) |
| [Full RV32I and assembly code testing](#full-rv32I-and-assembly-code) |

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

We can see the 3-bit AddrMode signal, and we can also see that ADDR_REAL_WIDTH is set to 20. We also opted for little-endian storage, meaning computer operations could be faster and simpler.

Below, we can see the code section which reads the data.hex file found in the rtl folder:

![Read](https://github.com/user-attachments/assets/01068b58-f79e-42f8-ac19-130fe7f33f80)

Here is the code for load and store instructions:

![image](https://github.com/user-attachments/assets/56351814-ec9f-47d6-8c66-7f18410f5c0e)

![image](https://github.com/user-attachments/assets/a069f3b9-33b2-4f77-aa4d-f4a8e0e9e9d1)

Our logic was to associate 3-bit codes with a certain instruction, which we were able to test using the following assembly file:

![image](https://github.com/user-attachments/assets/3f9d2fbe-04b3-4f94-8f1a-a88ce55be975)

We spent a lot of time editing the control unit, specifically dealing with the RET and JALR instructions. 

We struggled to run the PDF test: when using GTKwave, we realised the RET instruction wasn't working. By analysing the machine code, we realised it's a version of the JALR instruction, which we hadn't implemented yet. By adding additional control signals (we added an additional bit to PCSrc to allow feedback from the result signal to the program counter input MUX) and we later realised that our B and J type instructions were not storing return addresses in the register file. We resolved this by adding a MUX to the WD3 input which, using a WD3Src control signal, we enabled PC + 4 to be stored in the register file for our B and J type instructions. 

![image](https://github.com/user-attachments/assets/098bf343-c304-49dd-80e7-5efa64875fd2)

As shown above there is an additional implementation for the ret instructions under the JALR instruction, since ret is a special case of JALR. 

Here is an example of how we implemented these instructions case by case and according to the input signals.

![image](https://github.com/user-attachments/assets/1a597df9-eedd-4fbc-abba-9891714034b6)

We then used the testbench to verify the control unit was fully operational. 

![image](https://github.com/user-attachments/assets/0d7ddafa-8087-400c-a0f3-3e7f58d04050)

## Simulation and testing

The 'compile.sh' and 'doit.sh' scripts help compile and assemble C and ASM tests in the testbench. 

We tested our integrated single cycle processor using Vbuddy, by running 'f1_lights.s' but also by running the PDF on it for several signals: sine, triangle, noise, Gaussian.

![image](https://github.com/user-attachments/assets/2144c6ae-698c-461b-94cf-b4f35223669b)

## Full RV32I and assembly code

<img width="547" alt="FullRV32I" src="https://github.com/user-attachments/assets/7dcd9554-6fb8-456f-b2de-75b9e187cacb" />

We used the asm code to verify that all the instructions were implemented correctly and we did the verification of the expected values directly on the assembly language.

```ASM
main:
    # Test 1: Add positive numbers (Expected Output: 246)
    addi a0, zero, 32         # a0 = 32
    addi a0, a0, 101          # a0 = 32 + 101 = 133
    addi a1, zero, 52         # a1 = 52
    addi a1, a1, 61           # a1 = 52 + 61 = 113
    add a0, a0, a1            # a0 = 133 + 113 = 246
    nop
    # Check Test 1 result
    li t0, 246                # Load expected value (246)
    bne a0, t0, fail_test     # If a0 != 246, jump to fail_test
    j next_test_2             # Jump to next test

next_test_2:
    # Test 2: Add negative numbers (Expected Output: -246)
    addi a0, zero, -32        # a0 = -32
    addi a0, a0, -101         # a0 = -32 - 101 = -133
    addi a1, zero, -52        # a1 = -52
    addi a1, a1, -61          # a1 = -52 - 61 = -113
    add a0, a0, a1            # a0 = -133 - 113 = -246
    nop
    # Check Test 2 result
    li t0, -246               # Load expected value (-246)
    bne a0, t0, fail_test     # If a0 != -246, jump to fail_test
    j next_test_3             # Jump to next test

next_test_3:
    # Test 3: XOR operation (Expected Output: 20)
    addi a0, zero, 32         # a0 = 32
    addi a1, zero, 52         # a1 = 52
    xor a0, a0, a1            # a0 = 32 ^ 52 = 20
    nop
    # Check Test 3 result
    li t0, 20                 # Load expected value (20)
    bne a0, t0, fail_test     # If a0 != 20, jump to fail_test
    j next_test_4             # Jump to next test

next_test_4:
    # Test 4: Subtraction (Expected Output: 10)
    addi a0, zero, 50         # a0 = 50
    addi a0, a0, -25          # a0 = 50 - 25 = 25
    addi a1, zero, 15         # a1 = 15
    sub a0, a0, a1            # a0 = 25 - 15 = 10
    nop
    # Check Test 4 result
    li t0, 10                 # Load expected value (10)
    bne a0, t0, fail_test     # If a0 != 10, jump to fail_test
    j next_test_5             # Jump to next test

next_test_5:
    # Test 5: OR operation (Expected Output: 14)
    addi a0, zero, 0b1010     # a0 = 10 (binary 1010)
    addi a1, zero, 0b1100     # a1 = 12 (binary 1100)
    or a0, a0, a1             # a0 = 10 | 12 = 14 (binary 1110)
    nop
    # Check Test 5 result
    li t0, 14                 # Load expected value (14)
    bne a0, t0, fail_test     # If a0 != 14, jump to fail_test
    j next_test_6             # Jump to next test

next_test_6:
    # Test 6: LSL (Shift Left Logical) (Expected Output: a0 = 8)
    addi a0, zero, 4         # a0 = 4 (0000000000000100)
    addi a1, zero, 1         # a1 = 1 (shift by 1)
    sll a0, a0, a1           # a0 = 4 << 1 = 8
    nop
    # Check Test 6 result
    li t0, 8                  # Load expected value (8)
    bne a0, t0, fail_test     # If a0 != 8, jump to fail_test
    j next_test_7             # Jump to next test

next_test_7:
    # Test 7: LSR (Shift Right Logical) (Expected Output: a0 = 4)
    addi a0, zero, 16        # a0 = 16 (0000000000010000)
    addi a1, zero, 2         # a1 = 2 (shift by 2)
    srl a0, a0, a1           # a0 = 16 >> 2 = 4
    nop
    # Check Test 7 result
    li t0, 4                  # Load expected value (4)
    bne a0, t0, fail_test     # If a0 != 4, jump to fail_test
    j next_test_8             # Jump to next test

next_test_8:
    # Test 8: ASR (Arithmetic Shift Right) (Expected Output: a0 = -4)
    addi a0, zero, -16       # a0 = -16 (1111111111110000)
    addi a1, zero, 2         # a1 = 2 (shift by 2)
    sra a0, a0, a1           # a0 = -16 >>> 2 = -4
    nop
    # Check Test 8 result
    li t0, -4                 # Load expected value (-4)
    bne a0, t0, fail_test     # If a0 != -4, jump to fail_test
    j next_test_9             # Jump to next test

next_test_9:
    # Test 9: SLT (Set Less Than) (Expected Output: a0 = 1)
    addi a0, zero, -10       # a0 = -10
    addi a1, zero, 5         # a1 = 5
    slt a0, a0, a1           # a0 = (-10 < 5) ? 1 : 0
    nop
    # Check Test 9 result
    li t0, 1                  # Load expected value (1)
    bne a0, t0, fail_test     # If a0 != 1, jump to fail_test
    j next_test_10            # Jump to next test

next_test_10:
    # Test 10: SLTU (Set Less Than Unsigned) (Expected Output: a0 = 0)
    addi a0, zero, 10        # a0 = 10
    addi a1, zero, 5         # a1 = 5
    sltu a0, a0, a1          # a0 = (10 < 5) ? 1 : 0
    nop
    # Check Test 10 result
    li t0, 0                  # Load expected value (0)
    bne a0, t0, fail_test     # If a0 != 0, jump to fail_test
    j success_test            # Jump to success_test

fail_test:
    # If any test fails, set a0 to -1 to indicate failure
    li a0, -1                 # Set a0 to -1 to indicate failure
    j end_tests               # Jump to end_tests

success_test:
    # All tests passed, set a0 to 1 to indicate success
    li a0, 150                  # Set a0 to 150 to indicate success
    j end_tests               # Jump to end_tests

end_tests:
    # All tests completed, result in a0
    nop
```

```C
TEST_F(InstrTestbench, RTypeTest)
{
    // Compile the assembly code r-type.s
    system("./compile.sh --input asm/01-R_type.s");
    
    runSimulation(1000);

    //value a0 = 150 is arbitrary value that I set to check all R-type instr
    //All checks are done in the asm code itself and this "special" value 150 only seen if all are passed
    EXPECT_EQ((int)top->a0, 150);
}
```

The way this was implemented was testing the individual instruction in assembly language and using `bne` to branch to `fail_test` if it was not equal to the expected value but it will `jump` to the next test if it is equal to the expected value. 
