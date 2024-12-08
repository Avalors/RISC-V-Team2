module pipeline_EXEtoMEM #(
    parameter WIDTH = 32
)(
    input logic     clk,
    input logic [WIDTH-1:0] ALUResultE,
    input logic [WIDTH-1:0] WriteDataE,
    input logic [WIDTH-1:0] PCPlus4E,
    input logic [4:0]       RdE,
    output logic [WIDTH-1:0] ALUResultM,
    output logic [WIDTH-1:0] WriteDataM,
    output logic [WIDTH-1:0] PCPlus4M,
    output logic [4:0]       RdM,

    //Control Unit
    input logic RegWriteE,
    input logic [1:0] ResultSrcE,
    input logic MemWriteE,
    input logic [2:0] AddrModeE,
    output logic RegWriteM,
    output logic [1:0] ResultSrcM,
    output logic MemWriteM,
    output logic [2:0] AddrModeM
);

always_ff @ (posedge clk) begin
    //Control Unit
    RegWriteM <= RegWriteE;
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;
    AddrModeM <= AddrModeE;

    //Data path
    ALUResultM <= ALUResultE;
    WriteDataM <= WriteDataE;
    PCPlus4M <= PCPlus4E;
    RdM <= RdE;
end

endmodule
