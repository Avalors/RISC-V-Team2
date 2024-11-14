module program_counter#(
    parameter WIDTH = 32
)(
    input logic            clk,
    input logic            rst,
    input logic            PCsrc,
    input logic [WIDTH-1:0]     ImmOp,
    output logic[WIDTH-1:0]     PC
);

    logic [WIDTH-1:0] inc_PC, branch_PC, next_PC;

    always_ff @(posedge clk)
        if(rst) PC <= {WIDTH{1'b0}};
        else PC <= next_PC;
    
    always_comb begin
        branch_PC = PC + ImmOp;
        inc_PC = inc_PC + 32'd4;
        next_PC = PCsrc ? branch_PC:inc_PC;
    end
    
endmodule