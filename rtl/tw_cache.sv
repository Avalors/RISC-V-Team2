module tw_cache #( 
    parameter ADDR_WIDTH = 32,
              DATA_WIDTH = 32,
              NUM_SETS = 4,    // 4 sets in cache
              NUM_WAYS = 2     // Two-way set associative
)(
    input logic clk,
    input logic rst_n,             // Active-low reset signal
    input logic [2:0] AddrMode,
    input logic [ADDR_WIDTH-1:0] A,
    input logic [DATA_WIDTH-1:0] WD,
    output logic hit,
    output logic [DATA_WIDTH-1:0] out,
    // Performance counter outputs
    output logic [31:0] total_accesses,
    output logic [31:0] total_hits,
    output logic [31:0] total_misses
);
    // Cache entry structure
    typedef struct packed {
        logic valid;
        logic [27:0] tag; // 28-bit tag
        logic [DATA_WIDTH-1:0] data;
    } cache_entry;

    // Main cache storage: [sets][ways]
    cache_entry cache [NUM_SETS][NUM_WAYS];
    
    // LRU bits - one per set, indicates which way was least recently used
    logic [NUM_SETS-1:0] lru_bits;
    
    // Internal signals
    logic [DATA_WIDTH-1:0] RD;
    logic [26:0] tag;
    logic [1:0] set;  // Only 2 bits for set index (4 sets)
    logic [1:0] byte_offset;
    
    // Performance counters
    logic [31:0] access_counter;
    logic [31:0] hit_counter;
    logic [31:0] miss_counter;

    // Way selection and hit detection
    logic [NUM_WAYS-1:0] way_hits;
    logic hit_way;  // Index of the way that hit
    
    // Extract address fields
    always_comb begin
        tag = A[ADDR_WIDTH-1:4];  // More tag bits, fewer sets
        set = A[3:2];            // 2 bits for set index (4 sets)
        byte_offset = A[1:0];    // Byte offset remains the same
    end

    // Cache reset logic
    always_ff @(posedge clk or negedge rst_n) begin
        if (~rst_n) begin
            // Reset cache entries
            for (int i = 0; i < NUM_SETS; i++) begin
                for (int j = 0; j < NUM_WAYS; j++) begin
                    cache[i][j].valid <= 1'b0;
                    cache[i][j].tag <= '0;
                    cache[i][j].data <= '0;
                end
            end
            // Reset performance counters
            access_counter <= 32'b0;
            hit_counter <= 32'b0;
            miss_counter <= 32'b0;
            // Reset LRU bits
            lru_bits <= '0;
        end else begin
            // Normal operation continues here (addressing read/write logic)
            if (AddrMode != 3'b111) begin  // Exclude store operations
                access_counter <= access_counter + 1;
            
                if (hit) begin
                    hit_counter <= hit_counter + 1;
                    // Update LRU - mark the other way as LRU
                    lru_bits[set] <= ~hit_way;
                end else begin
                    miss_counter <= miss_counter + 1;
                    // On miss, update the LRU way
                    if (AddrMode == 3'b000 || AddrMode == 3'b001 || AddrMode == 3'b010) begin
                        // Read from memory if there's a miss
                        cache[set][lru_bits[set]].data <= RD;
                    end
                    // Update cache metadata
                    cache[set][lru_bits[set]].valid <= 1'b1;
                    cache[set][lru_bits[set]].tag <= tag;
                    // Flip the LRU bit for this set
                    lru_bits[set] <= ~lru_bits[set];
                end
            end
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
