module controlunit (
    input  logic [6:0] opcode,
    input  logic       EQ,
    output logic       RegWrite,
    output logic       ALUsrc,
    output logic [1:0] ImmSrc,
    output logic       PCsrc,
    output logic [2:0] ALUctrl
);
    // Explicit RISC-V opcodes
    localparam OP_IMM   = 7'b0010011;  // ADDI and other immediate ALU ops
    localparam OP_JAL   = 7'b1101111;  // JAL
    
    always_comb begin
        // Default values (prevent latches)
        RegWrite = 1'b0;
        ALUsrc = 1'b0;
        ImmSrc = 2'b00;
        PCsrc = 1'b0;
        ALUctrl = 3'b000;

        case (opcode)
            OP_IMM: begin
                // ADDI instruction settings
                RegWrite = 1'b1;  // Enable register write
                ALUsrc = 1'b1;    // Use immediate as second operand
                ImmSrc = 2'b00;   // I-type immediate
                PCsrc = 1'b0;     // Normal PC increment
                ALUctrl = 3'b000; // Addition operation
            end
            
            OP_JAL: begin
                RegWrite = 1'b0;  // No register write for simple JAL
                ALUsrc = 1'b0;    // Don't care
                ImmSrc = 2'b11;   // J-type immediate
                PCsrc = 1'b1;     // Take the jump
                ALUctrl = 3'b000; // Don't care
            end

            default: begin
                RegWrite = 1'b0;
                ALUsrc = 1'b0;
                ImmSrc = 2'b00;
                PCsrc = 1'b0;
                ALUctrl = 3'b000;
            end
        endcase
    end
endmodule
