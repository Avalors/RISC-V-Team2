module pipeline_DECtoEXE #(
    parameter WIDTH = 32
)(
    input logic     clk,
    input logic [WIDTH-1:0] RD1D,
    input logic [WIDTH-1:0] RD2D,
    input logic [WIDTH-1:0] PCD,
    input logic [4:0]       Rs1D,
    input logic [4:0]       Rs2D,
    input logic [4:0]       RdD,
    input logic [WIDTH-1:0] ExtImmD,
    input logic [WIDTH-1:0] PCPlus4D,
    output logic [WIDTH-1:0] RD1E,
    output logic [WIDTH-1:0] RD2E,
    output logic [WIDTH-1:0] PCE,
    output logic [4:0]       Rs1E,
    output logic [4:0]       Rs2E,
    output logic [4:0]       RdE,
    output logic [WIDTH-1:0] ExtImmE,
    output logic [WIDTH-1:0] PCPlus4E,

    //Control Unit
    input logic RegWriteD,
    input logic [1:0] ResultSrcD,
    input logic MemWriteD,
    input logic MemReadD,
    input logic [2:0] PcSrcD,
    input logic [3:0] ALUctrlD,
    input logic  ALUsrcD,
    input logic [2:0] AddrModeD,
    output logic RegWriteE,
    output logic [1:0] ResultSrcE,
    output logic MemWriteE,
    output logic MemReadE,
    output logic [2:0] PcSrcE,
    output logic [3:0] ALUctrlE,
    output logic [2:0] AddrModeE,
    output logic ALUsrcE
);

always_ff @ (posedge clk) begin
    //Control Unit - (TODO: implement flush instr)
    ResultSrcE <= ResultSrcD;
    MemReadE <= MemReadE;
    ALUctrlE <= ALUctrlD;
    ALUsrcE <= ALUsrcD;
    AddrModeE <= AddrModeD;

    //Data path
    RD1E <= RD1D;
    RD2E <= RD2D;
    PCE <= PCD;
    Rs1E <= Rs1D;
    Rs2E <= Rs2D;
    RdE <= RdD;
    ExtImmE <= ExtImmD;
    PCPlus4E <= PCPlus4D

end

endmodule
