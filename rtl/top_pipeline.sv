module top_pipeline #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);
    // Program counter
    logic [2:0] PCsrcD;
    logic [2:0] PCsrcE;

    logic [WIDTH-1:0] ImmExtD;
    logic [WIDTH-1:0] ImmExtE;

    logic [WIDTH-1:0] PCPlus4F;
    logic [WIDTH-1:0] PCPlus4D;
    logic [WIDTH-1:0] PCPlus4E;
    logic [WIDTH-1:0] PCPlus4M;
    logic [WIDTH-1:0] PCPlus4W;

    // ALU    
    logic [3:0] ALUctrlD;
    logic [3:0] ALUctrlE;
    
    logic [WIDTH-1:0] SrcAE;
    logic [WIDTH-1:0] SrcBE;
    
    logic ALUsrcD;
    logic ALUsrcE;
    
    logic ZeroE;
    
    logic [WIDTH-1:0] PCF;
    logic [WIDTH-1:0] PCD;
    logic [WIDTH-1:0] PCE;
    
    logic [WIDTH-1:0] ALUResultE;
    logic [WIDTH-1:0] ALUResultM;
    logic [WIDTH-1:0] ALUResultW;

    logic WD3SrcD;
    logic WD3SrcE;
    logic WD3SrcW;
    logic WD3SrcM;

    // Instruction Memory
    logic [WIDTH-1:0] instrF;
    logic [WIDTH-1:0] instrD;

    // Regfile
    logic [4:0] Rs1D;
    logic [4:0] Rs1E;
    logic [4:0] Rs2D;
    logic [4:0] Rs2E;

    logic [4:0] RdD;
    logic [4:0] RdE;
    logic [4:0] RdM;
    logic [4:0] RdW;

    logic [WIDTH-1:0] RD1D;
    logic [WIDTH-1:0] RD1E;
    logic [WIDTH-1:0] RD2D;
    logic [WIDTH-1:0] RD2E;

    // Data memory
    logic [2:0] AddrModeD;
    logic [2:0] AddrModeE;
    logic [2:0] AddrModeM;

    logic MemWriteD;
    logic MemWriteE;
    logic MemWriteM;
    
    logic MemReadD;
    logic MemReadE;

    logic [WIDTH-1:0] WriteDataE;
    logic [WIDTH-1:0] WriteDataM;
    
    logic [WIDTH-1:0] ReadDataM;
    logic [WIDTH-1:0] ReadDataW;

    logic RegWriteD;
    logic RegWriteE;
    logic RegWriteM;
    logic RegWriteW;

    // Sign Extend
    logic [2:0] ImmSrcD;

    // Result
    logic [1:0] ResultSrcD;
    logic [1:0] ResultSrcE;
    logic [1:0] ResultSrcM;
    logic [1:0] ResultSrcW;
    logic [WIDTH-1:0] ResultW;

    // Hazard Unit
    logic [1:0] forwardAE;
    logic [1:0] forwardBE;
    logic stall;
    logic flush;
    logic branch;

    // Pipeline Stage 1 - Fetch (FEC)
    
    //Completed - halfway
    assign PCPlus4F = PCF + 4;    
    program_counter program_counter_inst (
        .clk(clk),
        .rst(rst),
        .stall(stall),

        .PC(PCF)
    );

    //Completed
    instr_mem #(
        .ADDRESS_WIDTH(32),
        .ADDRESS_REAL_WIDTH(12),
        .DATA_WIDTH(8),
        .DATA_OUT_WIDTH(32)
    ) InstructionMemory (
        .addr(PCF),
        .instr(instrF)
    );

    //Completed
    pipeline_FECtoDEC pipeline_FECtoDEC (
        .clk(clk),
        .flush(flush),
        .instrF(instrF),
        .PCF(PCF),
        .PCPlus4F(PCPlus4F),

        .instrD(instrD),
        .PCD(PCD),
        .PCPlus4D(PCPlus4D)
    );

    // Pipeline Stage 2 - Decode (DEC)

    //Completed
    controlunit controlunit (
        .instr(instrD),
        .EQ(EQ),
        .AddrMode(AddrModeD),
        .RegWrite(RegWriteD),
        .MemWrite(MemWriteD),
        .MemRead(MemReadD),
        .ALUctrl(ALUctrlD),
        .ALUsrc(ALUsrcD),
        .ImmSrc(ImmSrcD),
        .PCsrc(PCsrcD),
        .ResultSrc(ResultSrcD),
        .WD3Src(WD3SrcD)
    );

    //Completed
    signextension #(
        .DATA_WIDTH(32)
    ) SignExtender (
        .instr(instrD),
        .ImmSrc(ImmSrcD),

        .ImmOp(ImmExtD)
    );

    assign Rs1D = instrD[19:15];
    assign Rs2D = instrD[24:20];
    assign RdD = instrD[11:7];
    
    //Completed
    registerfile RegFile (
        .clk(clk),
        .rst(rst),
        .AD1(Rs1D),
        .AD2(Rs2D),
        .AD3(RdD),
        .WE3(RegWriteW),
        .WD3(ResultW),

        .RD1(RD1D),
        .RD2(RD2D),
        .a0(a0)
    );

    //Completed
    pipeline_DECtoEXE pipeline_DECtoEXE (
        .clk(clk),
        //.flush(flush),
        //.LWflush(stall),    // LW is proprogated via stall. It will flush.
        .RD1D(RD1D),
        .RD2D(RD2D),
        .PCD(PCD),
        .Rs1D(Rs1D),
        .Rs2D(Rs2D),
        .RdD(RdD),
        .ExtImmD(ImmExtD),
        .PCPlus4D(PCPlus4D),

        .RD1E(RD1E),
        .RD2E(RD2E),
        .PCE(PCE),
        .Rs1E(Rs1E),
        .Rs2E(Rs2E),
        .RdE(RdE),
        .ExtImmE(ImmExtE),
        .PCPlus4E(PCPlus4E),

        .RegWriteD(RegWriteD),
        .ResultSrcD(ResultSrcD),
        .MemWriteD(MemWriteD),
        .MemReadD(MemReadD),
        .AddrModeD(AddrModeD),
        .PCsrcD(PCsrcD),
        .ALUctrlD(ALUctrlD),
        .ALUsrcD(ALUsrcD),
        .WD3SrcD(WD3SrcD),

        .RegWriteE(RegWriteE),
        .ResultSrcE(ResultSrcE),
        .MemWriteE(MemWriteE),
        .MemReadE(MemReadE),
        .AddrModeE(AddrModeE),
        .PCsrcE(PCsrcE),
        .ALUctrlE(ALUctrlE),
        .ALUsrcE(ALUsrcE),
        .WD3SrcE(WD3SrcE)
    );

    // Pipeline Stage 3 - Execute (EXE)

    //Completed
    mux #(WIDTH) ALUOperandMux (
        .in0(WriteDataE),
        .in1(ImmExtE),
        .sel(ALUsrcE),

        .out(SrcBE)
    );

    //Completed
    alu ArithmeticLogicUnit (
        .ALUop1(SrcAE),
        .ALUop2(SrcBE),
        .ALUctrl(ALUctrlE),

        .EQ(ZeroE),
        .Result(ALUResultE)
    );

    //Completed
    pipeline_EXEtoMEM pipeline_EXtoMEM (
        .clk(clk),
        .ALUResultE(ALUResultE),
        .WriteDataE(WriteDataE),
        .RdE(RdE),
        .PCPlus4E(PCPlus4E),

        .ALUResultM(ALUResultM),
        .WriteDataM(WriteDataM),
        .RdM(RdM),
        .PCPlus4M(PCPlus4M),

        .RegWriteE(RegWriteE),
        .ResultSrcE(ResultSrcE),
        .MemWriteE(MemWriteE),
        .AddrModeE(AddrModeE),
        .WD3SrcE(WD3SrcE),

        .RegWriteM(RegWriteM),
        .ResultSrcM(ResultSrcM),
        .MemWriteM(MemWriteM),
        .AddrModeM(AddrModeM),
        .WD3SrcM(WD3SrcM)
    );

    // Pipeline Stage 4 - Memory (MEM)

   //Completed 
    data_mem DataMemory (
        .clk(clk),
        .AddrMode(AddrModeM),
        .A(ALUResultM),
        .WD(WriteDataM),
        //.WE(MemWriteM),

        .RD(ReadDataM)
    );

    //Completed
    pipeline_MEMtoWB pipeline_MEMtoWB (
        .clk(clk),
        .ALUResultM(ALUResultM),
        .ReadDataM(ReadDataM),
        .RdM(RdM),
        .PCPlus4M(PCPlus4M),

        .ALUResultW(ALUResultW),
        .ReadDataW(ReadDataW),
        .RdW(RdW),
        .PCPlus4W(PCPlus4W),

        .RegWriteM(RegWriteM),
        .ResultSrcM(ResultSrcM),
        .WD3SrcM(WD3SrcM),

        .RegWriteW(RegWriteW),
        .ResultSrcW(ResultSrcW),
        .WD3SrcW(WD3SrcW)
    );

    // Pipeline Stage 5 - Writeback (WB)

    // Hazard Unit
    hazard_unit hazard_unit (
        .Rs1E(Rs1E),
        .Rs2E(Rs2E),
        .Rs1D(Rs1D),
        .Rs2D(Rs2D),
        .RdE(RdE),
        .RdM(RdM),
        .RdW(RdW),
        .RegWriteM(RegWriteM),
        .RegWriteW(RegWriteW),
        .MemReadE(MemReadE),
        .branch(branch),

        .forwardAE(forwardAE),
        .forwardBE(forwardBE),
        .stall(stall),
        .flush(flush)
    );

endmodule