module pipeline_DECtoEXE #(
    parameter WIDTH = 32
)(
    input logic     clk,
    //Data path
    // Decode Stage
    input logic [WIDTH-1:0] RD1D,
    input logic [WIDTH-1:0] RD2D,
    input logic [WIDTH-1:0] PCD,
    input logic [4:0]       Rs1D,
    input logic [4:0]       Rs2D,
    input logic [4:0]       RdD,
    input logic [WIDTH-1:0] ExtImmD,
    input logic [WIDTH-1:0] PCPlus4D,

    //Execute stage
    output logic [WIDTH-1:0] RD1E,
    output logic [WIDTH-1:0] RD2E,
    output logic [WIDTH-1:0] PCE,
    output logic [4:0]       Rs1E,
    output logic [4:0]       Rs2E,
    output logic [4:0]       RdE,
    output logic [WIDTH-1:0] ExtImmE,
    output logic [WIDTH-1:0] PCPlus4E,

    //Control Unit
    //Decode Stage
    input logic RegWriteD,
    input logic ResultSrcD,
    input logic [3:0] ALUctrlD,
    input logic  ALUsrcD,
    input logic WD3SrcD,
    input logic [2:0] AddrModeD,
    input logic [1:0] branchD,
    input logic [1:0] JumpD,

    //Execute Stage
    output logic RegWriteE,
    output logic ResultSrcE,
    output logic [3:0] ALUctrlE,
    output logic [2:0] AddrModeE,
    output logic ALUsrcE,
    output logic WD3SrcE,
    output logic [1:0] branchE,
    output logic [1:0] JumpE
);

always_ff @ (posedge clk) begin
    //Control Unit - (TODO: implement flush instr)
    RegWriteE <= RegWriteD;
    ResultSrcE <= ResultSrcD;
    ALUctrlE <= ALUctrlD;
    AddrModeE <= AddrModeD;
    ALUsrcE <= ALUsrcD;
    WD3SrcE <= WD3SrcD;
    branchE <= branchD;
    JumpE <= JumpD;

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
