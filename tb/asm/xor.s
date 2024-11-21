# testing xor instruction

main:
    addi a0, zero, 15   # a0 = 15 (binary: 00001111)
    addi a1, zero, 10   # a1 = 10 (binary: 00001010)
    xor a0, a0, a1      
    
	# EXPECTED OUTPUT = 5 (binary: 00000101)
