module signextension #(
    parameter DATA_WIDTH = 32
)(
    input  logic [11:0] ImmI,    // I-type immediate field
    input  logic        ImmSrc,  // Immediate source select
    output logic [DATA_WIDTH-1:0] ImmOp  // Sign-extended output
);

    always_comb begin
        // Sign extend the immediate value
        ImmOp = {{20{ImmI[11]}}, ImmI};
        
        // Debug print
        $display("Sign Extension: Input = %h, Output = %h", ImmI, ImmOp);
    end

endmodule
