module ALU (
    input  logic [31:0] ALUop1,    
    input  logic [31:0] ALUop2,    
    input  logic [2:0]  ALUctrl,    
    output logic [31:0] Result,    
    output logic EQ                
);

    always_comb begin
        Result = 32'b0;
        EQ = 0;

        case (ALUctrl)
            3'b000: Result = ALUop1 + ALUop2; // ADD (used in addi)
            3'b001: begin                     // SUB (used in bne)
                Result = ALUop1 - ALUop2;
                EQ = (Result == 0);           // Set EQ flag if ALUop1 == ALUop2
            end
            default: Result = 32'b0;    
        endcase
    end
endmodule
