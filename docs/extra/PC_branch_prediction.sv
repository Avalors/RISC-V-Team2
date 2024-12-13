module program_counter #(
    parameter WIDTH = 32
)(
    input  logic                 clk,
    input  logic                 rst,
    input  logic                 stall,
    input  logic [1:0]           PCsrcE,     // From execute - tells if prediction was right
    input  logic [31:0]          ImmOp,      // offset
    input  logic [31:0]          Result,     
    input  logic [WIDTH-1:0]     PC,         // Current PC
    input  logic                 pred_taken,  // Branch predictor's prediction
    output logic [WIDTH-1:0]     next_PC     
);

    always_ff @(posedge clk) begin
        if (!stall) begin
            if (rst) begin
                next_PC <= 32'h0;
            end else begin
                if (pred_taken)
                    next_PC <= PC + ImmOp;    // Predict taken
                else
                    next_PC <= PC + 32'd4;    // Predict not taken

                // override if prediction was wrong
                case (PCsrcE)
                    2'b10: next_PC <= Result;     // JALR
                    2'b01: next_PC <= PCE + ImmOp; // Force taken (if prediction was wrong)
                    2'b00: next_PC <= PC + 32'd4; // Force not taken (if prediction was wrong)
                endcase
            end
        end
    end

endmodule
