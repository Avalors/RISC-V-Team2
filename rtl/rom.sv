module rom #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 8
)(
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [ADDRESS_WIDTH-1:0] instr
);

    logic [DATA_WIDTH-1:0] rom_array [0:(1 << 10) - 1]; //reduced to 2^10 locations to prevent simulation error
    logic [31:0] machine_code [0:6];

    // Initialize the ROM contents with a test sequence
    initial begin
        // Clear ROM first
        for (int i = 0; i < (1 << 10); i = i + 4) begin
            // nop (addi x0, x0, 0)
            rom_array[i] = 8'h13;
            rom_array[i+1] = 8'h00;
            rom_array[i+2] = 8'h00;
            rom_array[i+3] = 8'h00;
        end

        //stores counter.s machine code 
        machine_code[0] = 32'h0ff00313;    
        machine_code[1] = 32'h00000513;    
        machine_code[2] = 32'h00000593;    
        machine_code[3] = 32'h00058513;    
        machine_code[4] = 32'h00158593;    
        machine_code[5] = 32'hfe659ce3;    
        machine_code[6] = 32'hfe0318e3;

        for(int i = 0; i < 7; i++)begin
            rom_array[i*4 + 0] = machine_code[i][7:0];
            rom_array[i*4 + 1] = machine_code[i][15:8];
            rom_array[i*4 + 2] = machine_code[i][23:16];
            rom_array[i*4 + 3] = machine_code[i][31:24];
        end
    end

    // Asynchronous read (important!)
    assign instr = {rom_array[addr+3],rom_array[addr+2],rom_array[addr+1],rom_array[addr]};

endmodule
