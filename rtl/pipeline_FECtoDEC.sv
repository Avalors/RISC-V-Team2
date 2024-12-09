module pipeline_FECtoDEC #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic flush,
    input logic [WIDTH-1:0] PCF,
    input logic [WIDTH-1:0] instrF,
    input logic [WIDTH-1:0] PCPlus4F,
    output logic [WIDTH-1:0] PCD,
    output logic [WIDTH-1:0] instrD,
    output logic [WIDTH-1:0] PCPlus4D
);

always_ff @ (posedge clk) begin
    //Control Unit - (TODO: implement flush instr for assignment)
    instrD <= instrF;
    PCD <= PCF;
    PCPlus4D <= PCPlus4F;

    if (flush) begin
        instrD <= 0; // nop
    end
end

endmodule
