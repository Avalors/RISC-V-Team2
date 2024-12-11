.section .text
.global main 

main:
    la t0, array   # Load the address of the array into t0

    # Read Test
    lw t1, 0(t0)   # Read first word, expect cache miss, t0 is the array address
    lw t2, 4(t0)   # Read second word, expect cache miss
    lw t1, 0(t0)   # Read first word again, expect cache hit

    # Write Test
    li t3, 0x55555555
    sw t3, 0(t0)   # Write to first word, expect hit (write-through)
    li t3, 0x66666666
    sw t3, 12(t0)  # Write to a new address, expect miss and replacement

    # Validation Read
    lw t4, 0(t0)   # Read first word, expect hit
    lw t4, 12(t0)  # Read new address, expect hit

.section .data
array:  .word 0x11111111, 0x22222222, 0x33333333, 0x44444444

//Testing:
//Expected values:
//t1: 0x11111111
//t2:0x22222222
//t3:0x66666666
//t4:0x66666666

//and for memory:
//0(t0): 0x55555555
//4(t0): 0x22222222
//8(t0): 0x33333333
//12(t0): 0x66666666
