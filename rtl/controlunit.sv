module controlunit #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] instr,  
    input logic                 EQ,     
    output logic [2:0]          ALUctrl, 
    output logic                ALUsrc,  
    output logic [1:0]          ImmSrc,  
    output logic                PCsrc,   
    output logic                RegWrite 
);

    // Extract instruction fields
    logic [6:0] op;
    logic [2:0] funct3;
    logic [6:0] funct7;

    assign op = instr[6:0];
    assign funct3 = instr[14:12];
    assign funct7 = instr[31:25];

    always_comb begin
        // Default values
        ALUctrl = 3'b000;
        ALUsrc = 1'b0;
        ImmSrc = 2'b00;
        PCsrc = 1'b0;
        RegWrite = 1'b0;

        case (op)
            7'b0110011: begin // R-Type
                case (funct3)
                    3'b000: ALUctrl = (funct7 == 7'b0000000) ? 3'b000 : 3'b001; // ADD/SUB
                    3'b110: ALUctrl = 3'b011; // OR
                    3'b111: ALUctrl = 3'b010; // AND
                    3'b010: ALUctrl = 3'b101; // SLT
                    default: ALUctrl = 3'b000;
                endcase
                RegWrite = 1'b1;
                ALUsrc = 1'b0;
            end
            7'b0010011: begin // I-Type
                case (funct3)
                    3'b000: ALUctrl = 3'b000; // ADDI
                    3'b110: ALUctrl = 3'b011; // ORI
                    3'b111: ALUctrl = 3'b010; // ANDI
                    3'b010: ALUctrl = 3'b101; // SLTI
                    default: ALUctrl = 3'b000;
                endcase
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 2'b00;
            end
            7'b0000011: begin // Load
                ALUctrl = 3'b000; // ADD for address calculation
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 2'b00;
            end
            7'b0100011: begin // Store
                ALUctrl = 3'b000; // ADD for address calculation
                ALUsrc = 1'b1;
                ImmSrc = 2'b01;
            end
            7'b1100011: begin // Branch
                ALUctrl = 3'b001; // SUB for comparison
                case (funct3)
                    3'b000: PCsrc = EQ ? 1'b1 : 1'b0; // BEQ
                    3'b001: PCsrc = EQ ? 1'b0 : 1'b1; // BNE
                    default: PCsrc = 1'b0;
                endcase
            end
            7'b1101111: begin // JAL
                PCsrc = 1'b1;
                RegWrite = 1'b1;
            end
            7'b1100111: begin // JALR
                PCsrc = 1'b1;
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
            end
            7'b0110111: begin // LUI
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
            end
            7'b0010111: begin // AUIPC
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
            end
            default: begin
                // Default case for unsupported instructions
                //$display("Unsupported instruction: %b", op);
            end
        endcase
    end
endmodule
