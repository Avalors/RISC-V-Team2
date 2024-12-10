    .text
    .global main

main:
    # Test 1: ADDI (Expected Output: 100)
    addi a0, zero, 50         # a0 = 50
    addi a0, a0, 50           # a0 = 50 + 50 = 100
    nop
    # Check Test 1 result
    li t0, 100                # Load expected value (100)
    bne a0, t0, fail_test     # If a0 != 100, jump to fail_test
    j next_test_2             # Jump to next test

next_test_2:
    # Test 2: ORI (Expected Output: 62)
    addi a0, zero, 30         # a0 = 30 (binary 001111)
    addi a1, zero, 34         # a1 = 34 (binary 100010)
    or a0, a0, a1             # a0 = 30 | 34 = 62 (binary 111110)
    nop
    # Check Test 2 result
    li t0, 62                 # Load expected value (62)
    bne a0, t0, fail_test     # If a0 != 62, jump to fail_test
    j next_test_3             # Jump to next test

next_test_3:
    # Test 3: ANDI (Expected Output: 30)
    addi a0, zero, 63         # a0 = 63 (binary 111111)
    addi a1, zero, 30         # a1 = 30 (binary 011110)
    and a0, a0, a1            # a0 = 63 & 30 = 30 (binary 011110)
    nop
    # Check Test 3 result
    li t0, 30                 # Load expected value (30)
    bne a0, t0, fail_test     # If a0 != 30, jump to fail_test
    j next_test_4             # Jump to next test

next_test_4:
    # Test 4: SLTI (Expected Output: 1)
    addi a0, zero, 5          # a0 = 5
    addi a1, zero, 10         # a1 = 10
    slti a0, a0, 10           # a0 = (5 < 10) ? 1 : 0
    nop
    # Check Test 4 result
    li t0, 1                  # Load expected value (1)
    bne a0, t0, fail_test     # If a0 != 1, jump to fail_test
    j next_test_5             # Jump to next test

next_test_5:
    # Test 5: XORI (Expected Output: 13)
    addi a0, zero, 5          # a0 = 5 (binary 0101)
    addi a1, zero, 8          # a1 = 8 (binary 1000)
    xori a0, a0, 8            # a0 = 5 ^ 8 = 13 (binary 1101)
    nop
    # Check Test 5 result
    li t0, 13                 # Load expected value (13)
    bne a0, t0, fail_test     # If a0 != 13, jump to fail_test
    j next_test_6             # Jump to next test

next_test_6:
    # Test 6: SLLI (Expected Output: 80)
    addi a0, zero, 10         # a0 = 10 (binary 00001010)
    slli a0, a0, 3            # a0 = 10 << 3 = 80 (binary 1010000)
    nop
    # Check Test 6 result
    li t0, 80                 # Load expected value (80)
    bne a0, t0, fail_test     # If a0 != 80, jump to fail_test
    j next_test_7             # Jump to next test

next_test_7:
    # Test 7: SRLI (Expected Output: 5)
    addi a0, zero, 40         # a0 = 40 (binary 101000)
    srli a0, a0, 2            # a0 = 40 >> 2 = 5 (binary 000101)
    nop
    # Check Test 7 result
    li t0, 5                  # Load expected value (5)
    bne a0, t0, fail_test     # If a0 != 5, jump to fail_test
    j next_test_8             # Jump to next test

next_test_8:
    # Test 8: SRAI (Expected Output: -10)
    addi a0, zero, -40        # a0 = -40 (binary 11111111111111000)
    srai a0, a0, 2            
    nop
    # Check Test 8 result
    li t0, -10                # Load expected value (-10)
    bne a0, t0, fail_test     # If a0 != -10, jump to fail_test
    j next_test_9             # Jump to next test

next_test_9:
    # Test 9: SLTIU (Expected Output: 0)
    addi a0, zero, 15         # a0 = 15
    addi a1, zero, 10         # a1 = 10
    sltiu a0, a0, 10          # a0 = (15 < 10 unsigned) ? 1 : 0 = 0
    nop
    # Check Test 9 result
    li t0, 0                  # Load expected value (0)
    bne a0, t0, fail_test     # If a0 != 0, jump to fail_test
    j success_test            # Jump to success_test

fail_test:
    # If any test fails, set a0 to -1 to indicate failure
    li a0, -1                 # Set a0 to -1 to indicate failure
    j end_tests               # Jump to end_tests

success_test:
    # All tests passed, set a0 to 150 to indicate success
    li a0, 150                # Set a0 to 150 to indicate success
    j end_tests               # Jump to end_tests

end_tests:
    # All tests completed, result in a0
    nop
