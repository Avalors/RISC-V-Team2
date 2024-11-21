module rom #(
    parameter A = 5,
    parameter RD = 32
)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] addr,
    output logic [DATA_WIDTH-1:0] instr
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin

rom_array[0] = 32'h0ff00313;
rom_array[4] = 32'h00000513;
rom_array[8] = 32'h00000593;
rom_array['c'] = 32'h00058513;
rom_array[10] = 32'h00158593;
rom_array[14] = 32'hfe659ce3;
rom_array[18] = 32'hfe0318e3;

end; 

always_ff @(posedge clk)
    // output is synchronous 
    instr <= rom_array [addr];

endmodule 
