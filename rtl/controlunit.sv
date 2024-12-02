module controlunit #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] instr,  // Instruction input
    input logic                 EQ,     // Equality flag (for branch comparison)
    output logic [2:0]          ALUctrl, // ALU control signal
    output logic                ALUsrc,  // ALU source (1 for immediate, 0 for register)
    output logic [2:0]          ImmSrc,  // Immediate source selection
    output logic                PCsrc,   // Program counter source (for branches and jumps)
    output logic                RegWrite // Register write enable
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
        ImmSrc = 3'b000;
        PCsrc = 1'b0;
        RegWrite = 1'b0;

        case (op)
            // R-Type
            7'b0110011: begin 
                case (funct3)
                    3'b000: ALUctrl = (funct7 == 7'b0100000) ? 3'b001 : 3'b000; // SUB/ADD
                    3'b110: ALUctrl = 3'b011; // OR
                    3'b111: ALUctrl = 3'b010; // AND
                    3'b010: ALUctrl = 3'b101; // SLT
                    default: ALUctrl = 3'b000;
                endcase
                RegWrite = 1'b1;
                ALUsrc = 1'b0;
            end

            // I-Type (Arithmetic)
            7'b0010011: begin 
                case (funct3)
                    3'b000: ALUctrl = 3'b000; // ADDI
                    3'b110: ALUctrl = 3'b011; // ORI
                    3'b111: ALUctrl = 3'b010; // ANDI
                    3'b010: ALUctrl = 3'b101; // SLTI
                    default: ALUctrl = 3'b000;
                endcase
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b000;
            end

            // Load (I-Type)
            7'b0000011: begin 
                ALUctrl = 3'b000; // ADD for address calculation
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b000;
            end

            // Store (S-Type)
            7'b0100011: begin 
                ALUctrl = 3'b000; // ADD for address calculation
                ALUsrc = 1'b0; // Uses rd2
                ImmSrc = 3'b001; // S-Type immediate
            end

            // Branch (B-Type)
            7'b1100011: begin 
                ALUctrl = 3'b001; // SUB for comparison
                ImmSrc = 3'b010; // B-Type immediate
                case (funct3)
                    3'b000: PCsrc = EQ ? 1'b1 : 1'b0; // BEQ
                    3'b001: PCsrc = EQ ? 1'b0 : 1'b1; // BNE
                    default: PCsrc = 1'b0;
                endcase
            end

            // J-Type (JAL)
            7'b1101111: begin 
                PCsrc = 1'b1;
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b100;
            end

            // JALR (I-Type)
            7'b1100111: begin 
                PCsrc = 1'b1;
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b000;
            end

            // LUI (Load Upper Immediate)
            7'b0110111: begin 
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b011;
            end

            // AUIPC (Add Upper Immediate to PC)
            7'b0010111: begin 
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b011;
            end

            // I-Type (ecall, ebreak)
            7'b1110011: begin 
                ALUsrc = 1'b1;
                if (funct3 == 3'b000) begin
                    RegWrite = 1'b0; // ecall/ebreak
                end else begin
                    RegWrite = 1'b1; // Other I-Type
                end
            end

            // Default case (unknown opcode)
            default: begin
                ALUctrl = 3'b000;
                ALUsrc = 1'b0;
                ImmSrc = 3'b000;
                PCsrc = 1'b0;
                RegWrite = 1'b0;
            end
        endcase
    end
endmodule
