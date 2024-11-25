module program_counter #(
    parameter WIDTH = 32
)(
    input  logic                 clk,
    input  logic                 rst,
    input  logic                 PCsrc,
    input  logic [WIDTH-1:0]     ImmOp,
    output logic [WIDTH-1:0]     PC
);

    always_ff @(posedge clk) begin
        if (rst) begin
            PC <= 32'h0;
        end else begin
            if (PCsrc)
                PC <= PC + ImmOp;  // Branch/Jump
            else
                PC <= PC + 32'd1;  // Normal increment
        end
    end

endmodule
