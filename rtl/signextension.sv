module signextension #(
    parameter DATA_WIDTH = 32
)(
    input  logic [31:0] instr,    // I-type immediate field
    input  logic  [1:0] ImmSrc,  // Immediate source select
    output logic [DATA_WIDTH-1:0] ImmOp  // Sign-extended output
);

    always_comb begin
        case (ImmSrc)
            2'b00: ImmOp = {{20{instr[31]}}, instr[31:20]};
            2'b01: ImmOp = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            2'b10: ImmOp = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
            default: ImmOp = {{20{instr[31]}}, instr[31:20]};
        // Sign extend the immediate value
        endcase
        
        // Debug print
        //$display("Sign Extension: Input = %h, Output = %h", instr, ImmOp);
    end

endmodule
