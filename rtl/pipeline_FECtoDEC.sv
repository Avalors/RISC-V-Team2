module pipeline_FECtoDEC #(
    parameter WIDTH = 32
)(
    input [WIDTH-1:0] PCF,
    input [WIDTH-1:0] instrF,
    input [WIDTH-1:0] PCPlus4F,
    output [WIDTH-1:0] PCD,
    output [WIDTH-1:0] instrD,
    output [WIDTH-1:0] PCPlus4D
);

always_ff @ (posedge clk) begin
    //Control Unit - (TODO: implement flush instr for assignment)
    instrD <= instrF;
    PCD <= PCF;
    PCPlus4D <= PCPlus4F;

end

endmodule
