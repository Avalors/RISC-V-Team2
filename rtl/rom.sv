module rom #(
    parameter ADDRESS_WIDTH = 5,
    parameter DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0] instr
);

    logic [DATA_WIDTH-1:0] rom_array [0:(1 << ADDRESS_WIDTH) - 1];

    // Initialize the ROM contents with a test sequence
    initial begin
        // Clear ROM first
        for (int i = 0; i < (1 << ADDRESS_WIDTH); i++) begin
            rom_array[i] = 32'h00000013;  // nop (addi x0, x0, 0)
        end

        // Test program: Just increment a0 multiple times
        rom_array[0] = 32'h0ff00313;    // addi a0, x0, 1    # a0 = 1
        rom_array[1] = 32'h00000513;    // addi a0, a0, 1    # a0 = 2
        rom_array[2] = 32'h00000593;    // addi a0, a0, 1    # a0 = 3
        rom_array[3] = 32'h00058513;    // addi a0, a0, 1    # a0 = 4
        rom_array[4] = 32'h00158593;    // addi a0, a0, 1    # a0 = 5
        rom_array[5] = 32'hfe659ce3;    
        rom_array[6] = 32'hfe0318e3;
    end

    // Asynchronous read (important!)
    assign instr = rom_array[addr];

endmodule
