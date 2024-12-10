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
    input logic branch,
    input logic [2:0] AddrModeM,
    input logic flushE,

    output logic [1:0] forwardAE,
    output logic [1:0] forwardBE,
    output logic stall,
    output logic flush
);

    always_comb begin

        //Forwarding



        //Stall
        if ((AddrModeM >= 3'b000  && AddrModeM <= 3'b100) && ((RdE == Rs1D) || (RdE == Rs2D))) begin
            stall = 1'b1;
        end
        else begin 
            stall = 1'b0;
        end

        //Branch double check this could potentially be deleted
        if (flushE) begin //flush signal should be based on PCsrc for branch and jump instructions
            flush = 1'b1; //Flush if there is a branch or Jump
        end

    end


endmodule