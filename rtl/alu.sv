module alu (
    input  logic [31:0] ALUop1,    
    input  logic [31:0] ALUop2,    
    input  logic [2:0]  ALUctrl,    
    output logic [31:0] Result,    
    output logic ZeroE                
);

    always_comb begin
        Result = 32'b0;
        ZeroE = 0;

        case (ALUctrl)
            3'b000: Result = ALUop1 + ALUop2; // ADD (used in addi)
            3'b001: begin                     // SUB (used in bne)
                Result = ALUop1 - ALUop2;
                ZeroE = (Result == 32'b0) ? 1 : 0 ;           // Set ZeroE flag if ALUop1 == ALUop2
            end
            3'b010:     Result = ALUop1 & ALUop2;
            3'b011:     Result = ALUop1 | ALUop2;
            3'b101:     Result = (ALUop1 < ALUop2) ? 1 : 0;
            default: Result = 32'b0;    
        endcase
    end
endmodule
