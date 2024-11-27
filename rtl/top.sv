/* verilator lint_off SYNCASYNCNET */
module top (
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
    logic RegWrite, ALUsrc, PCsrc;        // Control signals
    logic [1:0] ImmSrc;                   // 2-bit Immediate source signal
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
    rom #(
        .ADDRESS_WIDTH(5),
        .DATA_WIDTH(32)
    ) InstructionMemory (
        .clk(clk),
        .addr(PC[6:2]),
        .instr(instr)
    );

    // Sign Extension Unit
    signextension #(
        .DATA_WIDTH(32)
    ) SignExtender (
        .ImmI(instr[31:20]),
        .ImmSrc(ImmSrc[0]),
        .ImmOp(ImmOp)
    );

    // Register File with reset
    registerfile RegFile (
        .clk(clk),
        .rst(rst),
        .WE3(RegWrite),
        .AD1(instr[19:15]),
        .AD2(instr[24:20]),
        .AD3(instr[11:7]),
        .WD3(WD3),
        .RD1(RD1),
        .RD2(RD2),
        .a0(a0)
    );

    // ALU Operand MUX
    mux #(.DATA_WIDTH(32)) ALUOperandMux (
        .in0(RD2),
        .in1(ImmOp),
        .sel(ALUsrc),
        .out(ALUop2)
    );

    // ALU
    alu ArithmeticLogicUnit (
        .ALUop1(RD1),
        .ALUop2(ALUop2),
        .ALUctrl(ALUctrl),
        .Result(ALUout),
        .EQ(EQ)
    );

    // Control Unit
    controlunit controlunit (
        .opcode(instr[6:0]),
        .EQ(EQ),
        .RegWrite(RegWrite),
        .ALUsrc(ALUsrc),
        .ImmSrc(ImmSrc),
        .PCsrc(PCsrc),
        .ALUctrl(ALUctrl)
    );

    // Write back
    assign WD3 = ALUout;

endmodule
/* verilator lint_on SYNCASYNCNET */
