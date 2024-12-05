module data_mem #(
        parameter   DATA_WIDTH = 32, 
                    ADDR_WIDTH = 32,
                    ADDR_REAL_WIDTH = 20, //We chose to have 2^20 memory locations
                    MEM_WIDTH = 8

)(
    //for single cycle implementation does not contain clock yet
        input  logic [2:0]              AddrMode, //determines type of datamem instruction
        input  logic [ADDR_WIDTH-1:0]   A, // address
        input  logic [DATA_WIDTH-1:0]   WD, // write data
        output logic [DATA_WIDTH-1:0]   RD // read data
);

    logic [MEM_WIDTH-1:0] array [2**ADDR_REAL_WIDTH-1:0];
    logic [ADDR_WIDTH-1:0] temp;

    //sets all bytes in memory to 8'b0
    initial begin
        for(int i = 0; i < (1 << ADDR_REAL_WIDTH) - 1; i++) begin
            array[i] =   8'b0;
        end
        

        //loads data.hex into array of data memory
        $display("Loading program into data memory...");
        $readmemh("../rtl/data.hex", array);

    end

    //load instructions
    always_comb begin
        case(AddrMode)
        // load byte
        3'b000:begin
            temp = {{24{array[A][7]}},array[A]};
        end
        // load half
        3'b001:begin
            temp = {{16{array[A+1][7]}}, array[A+1], array[A]};
        end
        // load word
        3'b010:begin
            temp = {array[A+3], array[A+2], array[A+1], array[A]};
        end
        // load byte unsigned
        3'b011:begin
            temp = {24'b0, array[A]};
        end
        // load half unsigned
        3'b100:begin
            temp = {16'b0, array[A+1], array[A]};
        end
        default: temp = {array[A+3], array[A+2], array[A+1], array[A]}; //default case is load word
        endcase
    end


    //store instructions 
    always_comb begin
        if(AddrMode == 3'b101)begin
            array[A] = WD[7:0];
        end
        else if(AddrMode == 3'b110)begin
            array[A] = WD[7:0];
            array[A+1] = WD[15:8];
        end
        else if(AddrMode == 3'b111)begin
            array[A] = WD[7:0]; // stores the least significant byte
            array[A+1] = WD[15:8];
            array[A+2] = WD[23:16];
            array[A+3] = WD[31:24]; // stores the most significant byte
        end
    end

    assign RD = temp;
    
endmodule
