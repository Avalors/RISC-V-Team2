module hazard_unit (
    input logic [4:0] Rs1E,
    input logic [4:0] Rs2E,
    input logic [4:0] Rs1D,
    input logic [4:0] Rs2D,
    input logic [4:0] RdE,
    input logic [4:0] RdM,
    input logic [4:0] RdW,
    input logic RegWriteW,
    input logic RegWriteM,
    input logic MemReadE,
    input logic branch,

    output logic [1:0] forwardAE,
    output logic [1:0] forwardBE,
    output logic stall,
    output logic flush
);

    always_comb begin

    if (branch) begin
        flush = 1'b1; //Flush if there is a branch 
    end

    end


endmodule