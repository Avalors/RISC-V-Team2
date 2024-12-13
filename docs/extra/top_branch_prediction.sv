module top_pipeline #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);
    // Program counter
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

    logic [WIDTH-1:0] WriteDataE;
    logic [WIDTH-1:0] WriteDataM;

    logic [WIDTH-1:0] ReadDataM;
    logic [WIDTH-1:0] ReadDataW;

    logic RegWriteD;
    logic RegWriteE;
    logic RegWriteM;
    logic RegWriteW;

    // Memory Write signal
    logic MemWriteD;
    logic MemWriteE;
    logic MemWriteM;

    // Sign Extend
    logic [2:0] ImmSrcD;

    // Result
    logic ResultSrcD;
    logic ResultSrcE;
    logic ResultSrcM;
    logic ResultSrcW;
    logic [WIDTH-1:0] ResultW;

    // Branch
    logic [1:0] branchD;
    logic [1:0] branchE;

    // Jump
    logic [1:0] JumpD;
    logic [1:0] JumpE;

    // Hazard Unit
    logic [1:0] forwardAE;
    logic [1:0] forwardBE;
    logic stall;

    //flush related signals
    logic flush;
    logic flushE;
    logic BranchCondE;

    // Branch Prediction signals
    logic pred_taken;
    logic prediction_wrong;

    //UNIQUE INTERNAL TOP SIGNAL
    logic [WIDTH-1:0] WD3W;

    // Branch predictor
    branch_predictor branch_predictor_inst (
        .clk(clk),
        .reset(rst),
        .BranchCondE(BranchCondE),
        .PCsrcE(PCsrcE),
        .pred_taken(pred_taken)
    );

    // Pipeline Stage 1 - Fetch (FEC)
    
    //Completed 
    assign PCPlus4F = PCF + 4;    

    program_counter program_counter_inst (
        .clk(clk),
        .rst(rst),
        .stall(stall),
        .PCsrc(PCsrcE),
        .ImmOP(ImmExtE),
        .PCE(PCE),
        .Result(ALUResultE), //JALR and RET instructions
        .PC(PCF),
        .pred_taken(pred_taken),
        .prediction_wrong(prediction_wrong)
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

    //*
    pipeline_FECtoDEC pipeline_FECtoDEC (
        .clk(clk),
        .flush(flush),
        .stall(stall),
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
        .AddrMode(AddrModeD),
        .RegWrite(RegWriteD),
        .ALUctrl(ALUctrlD),
        .ALUsrc(ALUsrcD),
        .ImmSrc(ImmSrcD),
        .ResultSrc(ResultSrcD),
        .WD3Src(WD3SrcD),
        .branch(branchD),
        .Jump(JumpD),
        .MemWrite(MemWriteD)
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
        .AD3(RdW),
        .WE3(RegWriteW),
        .WD3(WD3W),
        .RD1(RD1D),
        .RD2(RD2D),
        .a0(a0)
    );

    //Completed
    pipeline_DECtoEXE pipeline_DECtoEXE (
        .clk(clk),
        .stall(stall),
        .flush(flush),
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
        .AddrModeD(AddrModeD),
        .ALUctrlD(ALUctrlD),
        .ALUsrcD(ALUsrcD),
        .WD3SrcD(WD3SrcD),
        .branchD(branchD),
        .JumpD(JumpD),
        .RegWriteE(RegWriteE),
        .ResultSrcE(ResultSrcE),
        .AddrModeE(AddrModeE),
        .ALUctrlE(ALUctrlE),
        .ALUsrcE(ALUsrcE),
        .WD3SrcE(WD3SrcE),
        .branchE(branchE),
        .JumpE(JumpE),
        .MemWriteD(MemWriteD),
        .MemWriteE(MemWriteE)
    );

    // Pipeline Stage 3 - Execute (EXE)
    
    //flush conditional logic
    always_comb begin
        case(branchE[1])
            1'b1: BranchCondE = ZeroE ^~ branchE[0];  //XNOR to get if branch is satisfied
            1'b0: BranchCondE = 0;
        endcase

        flushE = BranchCondE | JumpE[1];
    end

    //PCsrcE logic
    always_comb begin
        if(JumpE == 2'b11) begin
            PCsrcE = 2'b10;  // JALR/RET
        end
        else if(JumpE == 2'b10 || (branchE[1] && BranchCondE != pred_taken)) begin
            PCsrcE = 2'b01;  // Branch/Jump with misprediction
        end
        else begin
            PCsrcE = 2'b00;  // Normal or correctly predicted
        end
    end

    //forwarding mux logic

    //RD1 mux
    always_comb begin
        case(forwardAE)
        2'b00: SrcAE = RD1E;
        2'b01: SrcAE = ALUResultM;
        2'b10: SrcAE = WD3W;
        default: SrcAE = RD1E;
        endcase
    end

    //RD2 mux
    always_comb begin
        case(forwardBE)
        2'b00: WriteDataE = RD2E;
        2'b01: WriteDataE = ALUResultM;
        2'b10: WriteDataE = WD3W;
        default: WriteDataE = RD2E;
        endcase
    end

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
        .ZeroE(ZeroE),
        .Result(ALUResultE)
    );

    //Completed
    pipeline_EXEtoMEM pipeline_EXEtoMEM (
        .clk(clk),
        .stall(stall),
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
        .AddrModeE(AddrModeE),
        .WD3SrcE(WD3SrcE),
        .RegWriteM(RegWriteM),
        .ResultSrcM(ResultSrcM),
        .AddrModeM(AddrModeM),
        .WD3SrcM(WD3SrcM),
        .MemWriteE(MemWriteE),
        .MemWriteM(MemWriteM)
    );

    // Pipeline Stage 4 - Memory (MEM)

   //Completed 
    data_mem DataMemory (
        .clk(clk),
        .AddrMode(AddrModeM),
        .A(ALUResultM), //forwarded signal for non datamem instructions to execute stage Read outputs.
        .WD(WriteDataM),
        .RD(ReadDataM),
        .WE(MemWriteM)
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


    // Hazard Unit
    hazard_unit hazard_unit (
        .Rs1E(Rs1E),
        .Rs2E(Rs2E),
        .RdM(RdM),
        .RdW(RdW),
        .RegWriteM(RegWriteM), //not sure how these fit in yet
        .RegWriteW(RegWriteW), //not sure how these fit in yet
        .AddrModeM(AddrModeM),
        .flushE(flushE),
        .forwardAE(forwardAE),
        .forwardBE(forwardBE),
        .stall(stall),
        .flush(flush | prediction_wrong)
    );

    //Register Write back logic (Muxes)

    //ResultW Mux
    always_comb begin
        case(ResultSrcW)
            1'b0: ResultW = ALUResultW;
            1'b1: ResultW = ReadDataW;
        endcase
    end

    //WD3 mux
    always_comb begin
        case(WD3SrcW)
            1'b0: WD3W = ResultW;
            1'b1: WD3W = PCPlus4W;
        endcase
    end

endmodule
