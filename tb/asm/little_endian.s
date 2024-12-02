main:
    li x10, 0x12345678      # Pseudo-instruction: regfile[x10] = 0x12345678
    sw x10, 0(x11)          # Store the word from regfile[x10] into data location indexed 0
    lb x12, 0(x11)          # Load first byte  | regfile[x12] = 0x78
    lb x13, 1(x11)          # Load second byte | regfile[x13] = 0x56
    lb x14, 2(x11)          # Load third byte  | regfile[x14] = 0x34
    lb x10, 3(x11)          # Load fourth byte | regfile[x10] = 0x12
    
# regfile[x11] = 32'b0, therefore using 'base + offset' addressing we accessing the first 4 (0 through to 3)
# memory locations in the data memory.