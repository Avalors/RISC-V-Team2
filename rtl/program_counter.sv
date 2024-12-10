module program_counter #(
    parameter WIDTH = 32
)(
    input  logic                 clk,
    input  logic                 rst,
    input  logic [1:0]           PCsrc, 
    input  logic [31:0]          ImmOp, 
    input  logic [31:0]          Result, 
    output logic [WIDTH-1:0]     PC 
);

    always_ff @(posedge clk) begin
        if (rst) begin
            PC <= 32'h0;
        end else begin
            if (PCsrc == 2'b01) 
                PC <= PC + ImmOp;  // Branch/Jump
            else if(PCsrc == 2'b10) 
                PC <= Result;      // JALR, Separate to Jump because of the higher complexity needed to aquire the return address
                                   // Due to its usage of the entire datapath(Register File, Data Memory), not just the sign extension
                                   // output ImmOp.
            else
                PC <= PC + 32'd4;  // Normal increment
        end
    end

endmodule
