module pipeline_MEMtoWB #(
    parameter WIDTH = 32
)(
    input logic     clk,
    input logic [WIDTH-1:0] ALUResultM,
    input logic [WIDTH-1:0] RDDataMemM,
    input logic [WIDTH-1:0] PCPlus4M,
    input logic [4:0]       RdM,
    output logic [WIDTH-1:0] ALUResultW,
    output logic [WIDTH-1:0] ReadDataW,
    output logic [WIDTH-1:0] PCPlus4W,
    output logic [4:0]       RdW,

    //Control Unit
    input logic RegWriteM,
    input logic [1:0] ResultSrcM,
    output logic RegWriteW,
    output logic [1:0] ResultSrcW
);

always_ff @ (posedge clk) begin
    //Control Unit
    ResultSrcW <= ResultSrcM;
    RegWriteW <= RegWriteM;

    //Data path
    ALUResultW <= ALUResultM;
    ReadDataW <= RDDataMemM;
    PCPlus4W <= PCPlus4M;
    RdW <= RdM
end

endmodule
