module ControlUnit (
    input logic [6:0] opcode,        
    input logic EQ,             
    output logic RegWrite,        
    output logic ALUsrc,             
    output logic [1:0] ImmSrc,        
    output logic PCsrc,              
    output logic [2:0] ALUctrl        
);

    always_comb begin
        RegWrite = 0;
        ALUsrc = 0;
        ImmSrc = 2'b00;
        PCsrc = 0;    
        ALUctrl = 3'b000; 

        case (opcode)
            7'b0010011: begin // addi (I-type)
                RegWrite = 1;
                ALUsrc = 1; 
                ImmSrc = 2'b00; 
                PCsrc = 0; 
                ALUctrl = 3'b000; 
            end
            7'b1100011: begin // bne (B-type)
                RegWrite = 0;
                ALUsrc = 0; 
                ImmSrc = 2'b01; 
                PCsrc = EQ ? 0 : 1; 
                ALUctrl = 3'b001; 
            end
            default: begin
                RegWrite = 0;
                ALUsrc = 0;
                ImmSrc = 2'b00;
                PCsrc = 0;
                ALUctrl = 3'b000;
            end
        endcase
    end
endmodule