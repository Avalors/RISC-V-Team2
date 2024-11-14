module ALU (
    input  logic [31:0] ALUop1,   // First operand
    input  logic [31:0] ALUop2,   // Second operand
    output logic [31:0] SUM,      // Result of addition operation
    output logic EQ               // Equality flag (ALUop1 == ALUop2)
);

    always_comb begin
        // Perform addition and set SUM
        SUM = ALUop1 + ALUop2;

        // Set EQ flag if ALUop1 is equal to ALUop2
        EQ = (ALUop1 == ALUop2);
    end
endmodule
