main:
    # Test 1: LB (Load Byte) (Expected Output: 10)
    addi a0, zero, 100         # a0 = 100 (base address)
    addi a1, zero, 10          # a1 = 10 (byte value at address 100)
    sb a1, 0(a0)               # Store byte 10 at address 100
    lb a0, 0(a0)               # Load byte from address 100 into a0
    nop
    # Check Test 1 result
    li t0, 10                  # Load expected value (10)
    bne a0, t0, fail_test      # If a0 != 10, jump to fail_test
    j next_test_2              # Jump to next test

next_test_2:
    # Test 2: LH (Load Halfword) (Expected Output: 300)
    addi a0, zero, 200         # a0 = 200 (base address)
    addi a1, zero, 300         # a1 = 300 (halfword value at address 200)
    sh a1, 0(a0)               # Store halfword 300 at address 200
    lh a0, 0(a0)               # Load halfword from address 200 into a0
    nop
    # Check Test 2 result
    li t0, 300                 # Load expected value (300)
    bne a0, t0, fail_test      # If a0 != 300, jump to fail_test
    j next_test_3              # Jump to next test

next_test_3:
    # Test 3: LW (Load Word) (Expected Output: 5000)
    addi a0, zero, 300         # a0 = 300 (base address)
    addi a1, zero, 5000        # a1 = 5000 (word value at address 300)
    sw a1, 0(a0)               # Store word 5000 at address 300
    lw a0, 0(a0)               # Load word from address 300 into a0
    nop
    # Check Test 3 result
    li t0, 5000                # Load expected value (5000)
    bne a0, t0, fail_test      # If a0 != 5000, jump to fail_test
    j next_test_4              # Jump to next test

next_test_4:
    # Test 4: LBU (Load Byte Unsigned) (Expected Output: 50)
    addi a0, zero, 400         # a0 = 400 (base address)
    addi a1, zero, 50          # a1 = 50 (byte value at address 400)
    sb a1, 0(a0)               # Store byte 50 at address 400
    lbu a0, 0(a0)              # Load unsigned byte from address 400 into a0
    nop
    # Check Test 4 result
    li t0, 50                  # Load expected value (50)
    bne a0, t0, fail_test      # If a0 != 50, jump to fail_test
    j next_test_5              # Jump to next test

next_test_5:
    # Test 5: LH (Load Halfword) (Expected Output: 600)
    addi a0, zero, 500         # a0 = 500 (base address)
    addi a1, zero, 600         # a1 = 600 (halfword value at address 500)
    sh a1, 0(a0)               # Store halfword 600 at address 500
    lh a0, 0(a0)               # Load halfword from address 500 into a0
    nop
    # Check Test 5 result
    li t0, 600                 # Load expected value (600)
    bne a0, t0, fail_test      # If a0 != 600, jump to fail_test
    j success_test             # Jump to success_test

fail_test:
    # If any test fails, set a0 to -1 to indicate failure
    li a0, -1                  # Set a0 to -1 to indicate failure
    j end_tests                # Jump to end_tests

success_test:
    # All tests passed, set a0 to 150 to indicate success
    li a0, 150                 # Set a0 to 150 to indicate success
    j end_tests                # Jump to end_tests

end_tests:
    # All tests completed, result in a0
    nop
