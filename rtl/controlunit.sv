module controlunit #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] instr,   // Instruction input
    input logic                 EQ,       // Equality flag (for branch comparison)
    output logic [3:0]          ALUctrl,  // ALU control signal - changed to 4 bit to work for all instr
    output logic                ALUsrc,   // ALU source (1 for immediate, 0 for register)
    output logic [2:0]          ImmSrc,   // Immediate source selection
    output logic [1:0]          PCsrc,    // Program counter source (for branches and jumps)
    output logic                RegWrite,  // Register write enable            
    output logic [3:0]          AddrMode,  // sets the instruction for data memory
    output logic                ResultSrc, // control signal for output mux
    output logic                WD3Src     // control unit signal for write port for register allowing Jump instruction implementation       
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
        ALUctrl = 4'b0000;
        ALUsrc = 1'b0;
        ImmSrc = 3'b000;
        PCsrc = 2'b00;
        RegWrite = 1'b0;
        AddrMode = 4'b1000;
        ResultSrc = 1'b0;
        WD3Src = 1'b0;

        case (op)
            // R-Type
            7'b0110011: begin 
                case (funct3)
                    3'b000: ALUctrl = (funct7 == 7'b0100000) ? 4'b0001 : 4'b0000; // SUB/ADD
                    3'b110: ALUctrl = 4'b0011; // OR
                    3'b100: ALUctrl = 4'b0100; //XOR
                    3'b111: ALUctrl = 4'b0010; // AND
                    //Shifts
                    3'b001: ALUctrl = 4'b0101; // SLL(LSL)
                    3'b101:  ALUctrl = (funct7 == 7'b0100000) ? 4'b0111 : 4'b0110; // SRA(ASR)/SRL(LSR)

                    3'b010: ALUctrl = 4'b1000; //SLT 
                    3'b011: ALUctrl = 4'b1001; // SLTU

                    default: ALUctrl = 4'b0000;
                endcase
                RegWrite = 1'b1;
                ALUsrc = 1'b0;
            end

            // I-Type (Arithmetic)
            7'b0010011: begin 
                case (funct3)
                    3'b000: ALUctrl = 4'b0000; // ADDI
                    3'b110: ALUctrl = 4'b0011; // ORI
                    3'b111: ALUctrl = 4'b0010; // ANDI
                    3'b100: ALUctrl = 4'b0100; // XORI (assuming XOR immediate)

                    3'b001: ALUctrl = 4'b0101; // SLLI (Shift Left Logical Immediate)          
                    3'b101:  ALUctrl = (funct7 == 7'b0100000) ? 4'b0111 : 4'b0110; // SRAI(ASR)/SRLI(LSR)

                    3'b010: ALUctrl = 4'b1000; // SLTI
                    3'b011: ALUctrl = 4'b1001; // SLTIU (Set Less Than Immediate Unsigned)
                    default: ALUctrl = 4'b0000;
                endcase
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b000;
            end

            // Load (I-Type)
            7'b0000011: begin 
                ALUctrl = 4'b0000; // ADD for address calculation
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b000;
                ResultSrc = 1'b1; //result is switched to dataMem read from ALUout

                //For data_mem
                case(funct3)
                3'b000: AddrMode = 4'b0000; //lb
                3'b001: AddrMode = 4'b0001; //lh
                3'b010: AddrMode = 4'b0010; //lw
                3'b100: AddrMode = 4'b0011; //lbu
                3'b101: AddrMode = 4'b0100; //lhu
                default: AddrMode = 4'b0000;
                endcase
            end

            // Store (S-Type)
            7'b0100011: begin 
                ALUctrl = 4'b0000; // ADD for address calculation
                ALUsrc = 1'b1; // Uses rd2
                ImmSrc = 3'b001; // S-Type immediate
                
                //For data_mem
                case(funct3)
                3'b000: AddrMode = 4'b0101; //sb
                3'b001: AddrMode = 4'b0110; //sh
                3'b010: AddrMode = 4'b0111; //sw
                default: AddrMode = 4'b0101;
                endcase
            end

            // Branch (B-Type)
            7'b1100011: begin 
                ALUctrl = 4'b0001; // SUB for comparison
                ImmSrc = 3'b010; // B-Type immediate
                case (funct3)
                    3'b000: PCsrc = EQ ? 2'b01 : 2'b00; // BEQ
                    3'b001: PCsrc = EQ ? 2'b00 : 2'b01; // BNE
                    3'b100: PCsrc = EQ ? 2'b01 : 2'b00; // BLT (Branch if Less Than)
                    3'b101: PCsrc = EQ ? 2'b01 : 2'b00; // BGE (Branch if Greater or Equal)
                    3'b110: PCsrc = EQ ? 2'b01 : 2'b00; // BLTU (Branch if Less Than Unsigned)
                    3'b111: PCsrc = EQ ? 2'b01 : 2'b00; // BGEU (Branch if Greater or Equal Unsigned)
                    default: PCsrc = 2'b00;
                endcase
            end

            // J-Type (JAL)
            7'b1101111: begin 
                PCsrc = 2'b01;
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b100;
                WD3Src = 1'b1;
            end

            // JALR (I-Type)
            7'b1100111: begin 
                PCsrc = 2'b10;
                ALUsrc = 1'b1;
                ImmSrc = 3'b000;
                ResultSrc = 1'b0;
                WD3Src = 1'b1;


                //for ret instructions Rd = 5'b00000 -> to prevent overwriting zero
                if(instr[11:7] == 5'b00000) begin
                    RegWrite = 1'b0;
                end
                else begin
                    RegWrite = 1'b1; // for normal JALR instructions allows writing to regfile
                end
                
            end

            //U-Type
            // LUI (Load Upper Immediate)
            7'b0110111: begin 
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ImmSrc = 3'b011;
                ALUctrl = 4'b1010;
            end

            // AUIPC (Add Upper Immediate to PC)
            7'b0010111: begin 
                RegWrite = 1'b1;
                ALUsrc = 1'b1;
                ALUctrl = 4'b0000;       
                ImmSrc = 3'b011; 
            end

            // Environment-Type (ecall, ebreak)
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
                ALUctrl = 4'b0000;
                ALUsrc = 1'b0;
                ImmSrc = 3'b000;
                PCsrc = 2'b00;
                RegWrite = 1'b0;
                AddrMode = 4'b1000;
                ResultSrc = 1'b0;
                WD3Src = 1'b0;
            end
        endcase
    end
endmodule
