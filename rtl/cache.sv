module cache #(
    parameter ADDR_WIDTH = 32,
              DATA_WIDTH = 32
)(
    
    input logic clk,
    input logic [2:0] AddrMode, // determines operation type
    input logic [ADDR_WIDTH-1:0] A, // address
    input logic [DATA_WIDTH-1:0] WD, // write data
    output logic hit, // cache hit indicator
    output logic [DATA_WIDTH-1:0] out, // output data

    // performance counter outputs
    output logic [31:0] total_accesses,
    output logic [31:0] total_hits,
    output logic [31:0] total_misses
);

    // Simplified cache store structure
    // A packed array is a mechanism for subdividing a vector into subfields which can be accessed as array elements
    typedef struct packed {
        logic valid; //valid bit
      logic [26:0] tag; //tag bits for address comparison
      logic [DATA_WIDTH-1:0] data; //actual stored data

    } cache_entry;

    cache_entry cache_mem [8]; // Rename to cache_mem to avoid conflict
    logic [DATA_WIDTH-1:0] RD; // read data

    // Separate read and write logic
    logic [26:0] tag; // extracted tag from address
    logic [2:0] set; // cache set index
    logic [1:0] byte_offset;

    // performance counter registers
    logic [31:0] access_counter;
    logic [31:0] hit_counter;
    logic [31:0] miss_counter;

    // Read Logic
    always_comb begin
      tag = A[ADDR_WIDTH-1:5]; //MSBs
      set = A[4:2]; //middle bits for set selection
      byte_offset = A[1:0]; //LSBs
        
        if (cache_mem[set].valid && cache_mem[set].tag == tag) begin // check for valid entry and tag matches
            hit = 1'b1; // hit
            out = cache_mem[set].data; // output cached data
        end else begin
            hit = 1'b0; // miss
            out = RD;  // Fallback to main memory
        end
    end

    // Write Logic 
    always_ff @(posedge clk) begin
        // Performance Tracking (only for read operations)
        if (AddrMode != 3'b111) begin // Exclude store operations
            access_counter <= access_counter + 1;
            
            if (cache_mem[set].valid && cache_mem[set].tag == tag) begin
                hit_counter <= hit_counter + 1;
            end else begin
                miss_counter <= miss_counter + 1;
            end
        end

        if (AddrMode == 3'b001 || AddrMode == 3'b010) begin
            // Byte-specific write logic
            case (byte_offset)
                2'b00: cache_mem[set].data[7:0] <= WD[7:0];
                2'b01: cache_mem[set].data[15:8] <= WD[7:0];
                2'b10: cache_mem[set].data[23:16] <= WD[7:0];
                2'b11: cache_mem[set].data[31:24] <= WD[7:0];
            endcase
        end else begin
            // Full word write
            cache_mem[set].data <= WD;
        end

        // Update metadata on write or cache miss
        if (cache_mem[set].tag != tag) begin
            cache_mem[set].valid <= 1'b1; // mark as valid
            cache_mem[set].tag <= tag; // update tag
            cache_mem[set].data <= RD;  // Fetch from main memory
        end
    end

    // Expose performance counters
    assign total_accesses = access_counter;
    assign total_hits = hit_counter;
    assign total_misses = miss_counter;
  
    // External memory interface
    data_mem data_mem_inst (
        .clk(clk),
        .AddrMode(AddrMode),
        .A(A),
        .WD(WD),
        .RD(RD)
    );
endmodule

//cache is a type of computer memory that stores data temporarily so it can be accessed quickly

// Add to testbench:

// real hit_ratio = $itor(total_hits) / $itor(total_accesses);
// real miss_ratio = $itor(total_misses) / $itor(total_accesses);

// $display("Hit Ratio: %0.2f", hit_ratio);
// $display("Miss Ratio: %0.2f", miss_ratio);

//next step: implement a LRU (Last Recently Used) policy
