module hazard_unit (
    input logic [4:0] Rs1E,
    input logic [4:0] Rs2E,
    input logic [4:0] RdM,
    input logic [4:0] RdW,
    input logic RegWriteW,
    input logic RegWriteM,
    input logic [2:0] AddrModeM,
    input logic flushE,
    output logic [1:0] forwardAE,
    output logic [1:0] forwardBE,
    output logic stall,
    output logic flush
);

    always_comb begin

        //Forwarding

        //Rs1 MUX forwarding
        always_comb begin
            if(Rs1E == RdW)begin
                if(Rs1E == RdM)begin
                    forwardAE = 2'b01; // MEM TO EXE prioritisation
                end
                else begin
                    forwardAE = 2'b10; // WR TO EXE
                end
            end
            else begin
                if(Rs1E == RdM)begin
                    forwardAE = 2'b01; // MEM TO EXE
                end
                else begin
                    forwardAE = 2'b00; //Rd1E -> SrcAE 
                end
            end
        end

        //Rs2 MUX forwarding
        always_comb begin
            if(Rs2E == RdW)begin
                if(Rs2E == RdM)begin
                    forwardBE = 2'b01; // MEM TO EXE prioritisation
                end
                else begin
                    forwardBE = 2'b10; // WR TO EXE
                end
            end
            else begin
                if(Rs2E == RdM)begin
                    forwardBE = 2'b01; // MEM TO EXE
                end
                else begin
                    forwardBE = 2'b00; //Rd2E -> SrcBE (assuming no immediate)
                end
            end
        end

        //Stall
        if ((AddrModeM >= 3'b000  && AddrModeM <= 3'b100) && ((RdM == Rs1E) || (RdM == Rs2E))) begin
            stall = 1'b1;
        end
        else begin 
            stall = 1'b0;
        end

        //Branch double check this could potentially be deleted
        if (flushE) begin //flush signal should be based on PCsrc for branch and jump instructions
            flush = 1'b1; //Flush if there is a branch or Jump
        end
        else begin
            flush = 1'b0;
        end

    end


endmodule