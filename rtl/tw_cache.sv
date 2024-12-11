module tw_cache #( 
    parameter ADDR_WIDTH = 32,
              DATA_WIDTH = 32,
              NUM_SETS = 4,    // Reduced from 8 to 4 sets since we now have 2 ways
              NUM_WAYS = 2     // Two-way set associative
)(
    input logic clk,
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
        logic [27:0] tag; //28-bit tag rather than 27-bit for 1-way set associative cache
        logic [DATA_WIDTH-1:0] data;
    } cache_entry;

    // Main cache storage: [sets][ways]
    cache_entry cache [NUM_SETS][NUM_WAYS];
    
    // LRU bits - one per set, indicates which way was least recently used
    // 0 means way 0 is LRU, 1 means way 1 is LRU
    logic [NUM_SETS-1:0] lru_bits;
    
    // Internal signals
    logic [DATA_WIDTH-1:0] RD;
    logic [27:0] tag;
    logic [1:0] set;  // Now only 2 bits needed for 4 sets
    logic [1:0] byte_offset;
    
    // Performance counters
    logic [31:0] access_counter;
    logic [31:0] hit_counter;
    logic [31:0] miss_counter;

    // Way selection and hit detection
    logic [NUM_WAYS-1:0] way_hits;
    logic [0:0] hit_way;  // Index of the way that hit
    
    // Extract address fields
    always_comb begin
        tag = A[ADDR_WIDTH-1:4];  // More tag bits since we have fewer sets
        set = A[3:2];            // 2 bits for set index (4 sets)
        byte_offset = A[1:0];    // Byte offset remains the same
    end

    // Read Logic with way selection
    always_comb begin
        // Default values
        hit = 1'b0;
        out = RD;
        way_hits = '0;
        hit_way = '0;

        // Check both ways for a hit
        for (int i = 0; i < NUM_WAYS; i++) begin
            if (cache[set][i].valid && cache[set][i].tag == tag) begin
                way_hits[i] = 1'b1;
                hit = 1'b1;
                hit_way = i[0:0];
                out = cache[set][i].data;
            end
        end
    end

    // Write Logic with LRU management
    always_ff @(posedge clk) begin
        // Performance Tracking
        if (AddrMode != 3'b111) begin  // Exclude store operations
            access_counter <= access_counter + 1;
            
            if (hit) begin
                hit_counter <= hit_counter + 1;
                // Update LRU - mark the other way as LRU
                lru_bits[set] <= ~hit_way;
            end else begin
                miss_counter <= miss_counter + 1;
                // On miss, update the LRU way
                if (AddrMode inside {`DATA_ADDR_MODE_B, `DATA_ADDR_MODE_BU}) begin
                    // Byte write
                    case (byte_offset)
                        2'b00: cache[set][lru_bits[set]].data[7:0] <= WD[7:0];
                        2'b01: cache[set][lru_bits[set]].data[15:8] <= WD[7:0];
                        2'b10: cache[set][lru_bits[set]].data[23:16] <= WD[7:0];
                        2'b11: cache[set][lru_bits[set]].data[31:24] <= WD[7:0];
                    endcase
                end else begin
                    // Full word write
                    cache[set][lru_bits[set]].data <= RD;
                end
                // Update metadata
                cache[set][lru_bits[set]].valid <= 1'b1;
                cache[set][lru_bits[set]].tag <= tag;
                // Flip LRU bit for this set
                lru_bits[set] <= ~lru_bits[set];
            end
        end

        // Handle writes on hits
        if (hit && AddrMode == 3'b111) begin  // Store operation
            if (AddrMode inside {`DATA_ADDR_MODE_B, `DATA_ADDR_MODE_BU}) begin
                // Byte write to the hitting way
                case (byte_offset)
                    2'b00: cache[set][hit_way].data[7:0] <= WD[7:0];
                    2'b01: cache[set][hit_way].data[15:8] <= WD[7:0];
                    2'b10: cache[set][hit_way].data[23:16] <= WD[7:0];
                    2'b11: cache[set][hit_way].data[31:24] <= WD[7:0];
                endcase
            end else begin
                // Full word write to the hitting way
                cache[set][hit_way].data <= WD;
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
