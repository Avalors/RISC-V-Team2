module TopLevelCPU (
    input logic clk,          // Clock signal
    input logic rst,          // Reset signal
    output logic [31:0] a0    // Contents of register a0 (output)
);

    // Internal Signals
    logic [31:0] PC;                      // Program Counter
    logic [31:0] instr;                   // Current instruction
    logic [31:0] ImmOp;                   // Sign-extended immediate value
    logic [31:0] ALUop1, ALUop2, ALUout;  // ALU operands and result
    logic EQ;                             // Equality output from ALU
    logic [31:0] RD1, RD2, WD3;           // Register file read/write data
    logic RegWrite, ALUsrc, PCsrc, Immsrc; // Control signals
    logic [2:0] ALUctrl;                  // ALU control signal

    // Program Counter
    program_counter #(.WIDTH(32)) PC_Reg (
        .clk(clk),
        .rst(rst),
        .PCsrc(PCsrc),
        .ImmOp(ImmOp),
        .PC(PC)
    );

    // Instruction Memory (asynchronous read)
    rom #(.A(5), .RD(32)) InstructionMemory (
        .clk(clk),
        .addr(PC[6:2]), // Address from PC (word-aligned)
        .instr(instr)
    );

    // Sign Extension Unit
    signextension #(.DATA_WIDTH(32)) SignExtender (
        .ImmI(instr[31:20]), // Immediate field from instruction
        .ImmSrc(Immsrc),
        .ImmOp(ImmOp)
    );

    // Register File
    RegisterFile RegFile (
        .clk(clk),
        .WE3(RegWrite),         // Write Enable
        .AD1(instr[19:15]),     // rs1
        .AD2(instr[24:20]),     // rs2
        .AD3(instr[11:7]),      // rd
        .WD3(WD3),              // Data to write
        .RD1(RD1),              // Data read from rs1
        .RD2(RD2)               // Data read from rs2
    );

    // ALU Operand MUX
    mux #(.DATA_WIDTH(32)) ALUOperandMux (
        .in0(RD2),              // rs2 value
        .in1(ImmOp),            // Immediate value
        .sel(ALUsrc),           // Select signal
        .out(ALUop2)            // Output to ALU
    );

    // ALU
    ALU ArithmeticLogicUnit (
        .ALUop1(RD1),           // rs1 value
        .ALUop2(ALUop2),        // ALU operand
        .ALUctrl(ALUctrl),      // Control signal
        .Result(ALUout),        // ALU output
        .EQ(EQ)                 // Equality flag
    );

    // Instruction Decoder (Control Unit)
    InstructionDecoder ControlUnit (
        .eq(EQ),                // Equality signal from ALU
        .instr(instr),          // Current instruction
        .Regwrite(RegWrite),    // Register write enable
        .ALUctrl(ALUctrl),      // ALU control signal
        .ALUsrc(ALUsrc),        // ALU source select
        .Immsrc(Immsrc),        // Immediate source select
        .PCsrc(PCsrc)           // Program Counter source select
    );

    // Output register a0 (Register 10)
    assign a0 = RegFile.register[10]; // Register a0 output

endmodule
