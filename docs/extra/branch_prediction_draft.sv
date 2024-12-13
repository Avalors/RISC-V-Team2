module branch_predictor (
    input logic clk,                   // Clock signal
    input logic reset,                 // Reset signal
    input logic BranchCondE,           // Actual branch result from execute stage (replaces branch_taken)
    input logic [1:0] PCsrcE,          // PC source from execute stage (helps identify valid branches)
    output logic pred_taken            // Predicted branch outcome (1 for taken, 0 for not taken)
);

    // Define states for the 2-bit predictor
    typedef enum logic [1:0] {
        STRONGLY_TAKEN       = 2'b11,
        WEAKLY_TAKEN        = 2'b10,
        WEAKLY_NOT_TAKEN    = 2'b01,
        STRONGLY_NOT_TAKEN  = 2'b00
    } state_t;

    state_t current_state, next_state;

    // Prediction is determined by the current state
    always_comb begin
        case (current_state)
            STRONGLY_TAKEN, WEAKLY_TAKEN: pred_taken = 1;      // Predict taken
            WEAKLY_NOT_TAKEN, STRONGLY_NOT_TAKEN: pred_taken = 0; // Predict not taken
            default: pred_taken = 0;                           // Default to not taken
        endcase
    end

    // State transition logic
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= STRONGLY_NOT_TAKEN; // Reset to strongly not taken
        end else if (PCsrcE == 2'b01) begin     // Only update on actual branch instructions
            current_state <= next_state;
        end
    end

    // Next state computation based on the actual branch outcome
    always_comb begin
        case (current_state)
            STRONGLY_TAKEN: begin
                if (BranchCondE)
                    next_state = STRONGLY_TAKEN;  // Stay in strongly taken
                else
                    next_state = WEAKLY_TAKEN;    // Move to weakly taken
            end
            WEAKLY_TAKEN: begin
                if (BranchCondE)
                    next_state = STRONGLY_TAKEN;  // Move to strongly taken
                else
                    next_state = WEAKLY_NOT_TAKEN; // Move to weakly not taken
            end
            WEAKLY_NOT_TAKEN: begin
                if (BranchCondE)
                    next_state = WEAKLY_TAKEN;    // Move to weakly taken
                else
                    next_state = STRONGLY_NOT_TAKEN; // Move to strongly not taken
            end
            STRONGLY_NOT_TAKEN: begin
                if (BranchCondE)
                    next_state = WEAKLY_NOT_TAKEN; // Move to weakly not taken
                else
                    next_state = STRONGLY_NOT_TAKEN; // Stay in strongly not taken
            end
            default: next_state = STRONGLY_NOT_TAKEN; // Default state
        endcase
    end

endmodule
