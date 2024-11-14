module RegisterFile (
    input logic clk,
    input logic WE3,
    input logic [4:0] AD1,
    input logic [4:0] AD2,
    input logic [4:0] AD3,
    input logic [31:0] WD3,
    output logic [31:0] RD1,
    output logic [31:0] RD2
);

    logic [31:0] register [0:31]; //32 registers each of 32 bits

    assign RD1 = register[AD1];
    assign RD2 = register[AD2];

    always_ff @(posedge clk) begin
        if (WE3 && AD3 != 5'b0)
            register[AD3] <= WD3;
    end
endmodule