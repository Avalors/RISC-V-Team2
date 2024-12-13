# Cached Version

| Table of Contents |
|-|
| [Introduction](#introduction) |
| [Design Specifications](#design-specifications) |
| [Direct Mapped Cache](#direct-mapped-cache) |
| [Two-Way Set Associative Cache](#two-way-set-associative-cache) |
| [Conclusion](#conclusion) |

## Introduction

Cache memory was introduced into this project, allowing us to have a faster type of memory with limited storage accessible to the processor.
An efficient cache is crucial for a CPU, because as we know, computer performance depends on:
  - Processor performance
  - Memory system performance

The ideal memory is:
  - fast
  - cheap
  - large

We had to amend single cycle because in reality, memory devices aren't asynchronous, but synchronous for both read and write. 
All prcoessors now include cache memory to mitigate against the disparity between processor and memory speed. 
    
In order to make memory accesses fast, we have to exploit the principle of locality.

Temporal Locality:
  • Locality in time
  • If data used recently, likely to use it again soon
  • How to exploit: keep recently accessed data in higher levels of memory hierarchy
  
Spatial Locality:
  • Locality in space
  • If data used recently, likely to use nearby data soon
  • How to exploit: when access data, bring

At the time of writing, we have a complete working version of `direct-mapped cache`, and a draft of `two-way set associative cache`, which was not fully integrated.

## Design Specifications

In order to analyse memory performance, we used two variables, called hit and miss.

• Hit: data found in that level of memory hierarchy

• Miss: data not found 

![image](https://github.com/user-attachments/assets/49b23f1f-1ada-496c-8658-de589986f87f)

Effectiveness of cache memory is dependent on how often a memory access is found in the cache memory in a given level of memory hierarchy. A cache
“hit” happens when the data or instruction required is found in the cache and therefore there is no need to go to the next level to fetch from memory. A
miss happens when the data or instruction is not in cache, and a fetch from the main memory is required, thus incurring extra latency.

We tested our cache using assembly files, which tested different characteristics:

1) Sequential read and write pattern

![image](https://github.com/user-attachments/assets/9c59d6bb-5315-4dc0-8282-0184ce70057f)

This test checks:
  - Sequential write operations at word boundaries (0, 4, 8, 12)
  - Cache miss behavior on first access (cold misses)
  - Both temporal locality (rereading 0(x10))
  - Byte-level access granularity using lb

2) Loop access pattern

![image](https://github.com/user-attachments/assets/448e5dba-24d1-47c6-8859-c25adae05142)

This test checks:
  - Repeated memory access patterns in a loop
  - Non-sequential memory access (4→12→8)
  - Cache behavior with loop iterations
  - Word-aligned loads

3) Byte store operations

![image](https://github.com/user-attachments/assets/5771977e-a6c7-4324-9b23-67218f455d88)

This test checks:
  - Byte-level store operations (sb)
  - Sequential byte writes within a word
  - Mixed operation patterns (sb followed by lw)
  - Byte modification and word reads
  - Overwriting previously stored bytes (0xFF)

Together, these tests cover different access patterns (sequential, looped, random), various data sizes (byte, word), mixed operations (loads and stores),
cache hit/miss behavior, temporal and spatial locality, memory alignment handling

## Direct Mapped Cache

Firstly, a direct-mapped cache was designed with a cache line of 60 bits:
- 32 (least significant bits) assigned to `DATA` 
- 27 (next significant bits) assigned to `TAG`
- 1 (most significant bit) assigned to `VALID` 

![image](https://github.com/user-attachments/assets/6b7658e2-1c95-4ed2-89a0-e0791c891345)

This cache line maps to the memory addressing of the cache:
| # of Bits | Part | Purpose |
|-|-|-|
| 27 | `TAG` | Identifying data stored in direct-mapped memory |
| 3 | `SET` | Establish and index the cache storage in memory |
| 2 | `BYTE OFFSET` | Accommodate word addressing and byte addressing |

A memory address of 32 bits allows for both modes of addressing, controlled by a signal `AddrMode`. A set size of $2^3 = 8$ allows for fast compact memory.

Finally an internal `HIT` signal was implemented, to ease the debugging, enhance testing and calculate the performance increase specified later in the results.

The cache implements comprehensive performance counters:

```SV
output logic [31:0] total_accesses,
output logic [31:0] total_hits,
output logic [31:0] total_misses
```

A hit occurs when the cache line is valid and the tag matches the incoming address tag:
```SV
if (cache_mem[set].valid && cache_mem[set].tag == tag) begin
    hit_reg = 1'b1;
```

whereas on a miss:
  - the miss counter increments
  - the cache line is updated with new data
  - the cache line is updated with new data
  - the tag is updated

```SV
miss_counter <= miss_counter + 1;
cache_mem[set].valid <= 1'b1;
cache_mem[set].tag <= tag;
cache_mem[set].data <= RD;
```

We also had to make sure to synchronise the hit signal at the end of the module:
```SV
 always_ff @(posedge clk) begin
        hit <= hit_reg;
    end
```

The full code can be located here: [`cache.sv`](../../rtl/cache.sv)

### [Read Logic](../../rtl/cache.sv)

The data is read from cache if both:

  - the block is valid (`VALID` = 1) 
  - the `TAG` matches the input address signal

The cache implements multiple read modes which support byte loading, halfword loading and word loading. 

```SV
case (AddrMode)
    3'b000: out = {{24{cache_mem[set].data[7]}}, cache_mem[set].data[7:0]};   // LB
    3'b001: out = {{16{cache_mem[set].data[15]}}, cache_mem[set].data[15:0]}; // LH
    3'b010: out = cache_mem[set].data;                                         // LW
```

### [Write Logic](../../rtl/cache.sv) 

The cache implements write operations with byte granularity:

```SV
// Write logic
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            // Reset all cache entries
            for (int i = 0; i < 8; i++) begin
                cache_mem[i].valid <= 1'b0;
                cache_mem[i].tag <= 27'b0;
                cache_mem[i].data <= 32'b0;
            end
            // Reset performance counters
            access_counter <= 0;
            hit_counter <= 0;
            miss_counter <= 0;
            hit <= 1'b0;
        end else begin
            // Update performance counters
            // Only update performance counters for load/store operations
            if (AddrMode == 4'b0010 || AddrMode == 4'b0111 || AddrMode == 4'b0000 || AddrMode == 4'b0001 || AddrMode == 4'b0101 || AddrMode == 4'b0110) begin
                access_counter <= access_counter + 1;
                if (cache_mem[set].valid && cache_mem[set].tag == tag) begin
                    hit_counter <= hit_counter + 1; // Cache hit
                end else begin
                    miss_counter <= miss_counter + 1; // Cache miss
                    // Update cache on miss (simulate memory fetch)
                    cache_mem[set].valid <= 1'b1; // Mark as valid
                    cache_mem[set].tag <= tag;    // Update tag
                    cache_mem[set].data <= RD;   // Fetch data from memory
                end
            end

            // Handle write operations
            case (AddrMode)
                4'b0101: begin // SB (store byte)
                    case (byte_offset)
                        2'b00: cache_mem[set].data[7:0]   <= WD[7:0];
                        2'b01: cache_mem[set].data[15:8]  <= WD[7:0];
                        2'b10: cache_mem[set].data[23:16] <= WD[7:0];
                        2'b11: cache_mem[set].data[31:24] <= WD[7:0];
                    endcase
                end
                4'b0110: begin // SH (store halfword)
                    case (byte_offset[1]) // Upper or lower halfword
                        1'b0: cache_mem[set].data[15:0] <= WD[15:0];
                        1'b1: cache_mem[set].data[31:16] <= WD[15:0];
                    endcase
                end
                4'b0111: begin // SW (store word)
                    cache_mem[set].data <= WD;
                end
            endcase
        end
    end
```

The write logic is split into two modes: byte and word addressing. Word addressing is the more general case in the testbenches written therefore this 
was set to default. 

We implemented a write-through policy (writes update both cache and memory) with direct memory update on writes. 

### [Testing and testbenching]

#### [Individual level](../../tb/test/cache_tb.cpp)

<img width="790" alt="Cache" src="https://github.com/user-attachments/assets/2a5ef2aa-792e-46f0-9564-6caf674f1da3" />

```C
TEST_F(CacheTestbench, CacheHitTest)
{
    // Reset the cache before the test
    top->reset = 1;
    runSimulation(1);
    top->reset = 0;
    runSimulation(1);

    int address = 0x00000020;
    int writeData = 0xDEADBEEF;

    // Write data
    top->AddrMode = 7; // SW (store word)
    top->A = address;
    top->WD = writeData;
    runSimulation(2);

    // Delay between write and read
    runSimulation(1);

    // Read data
    top->AddrMode = 2; // LW (load word)
    top->A = address;
    runSimulation(2);

    std::cout << "CacheHitTest - Hit: " << (int)top->hit << ", Out: 0x" << std::hex << top->out << std::dec << std::endl;

    EXPECT_EQ(top->hit, 1);
    EXPECT_EQ(top->out, writeData);
}
```


This test was used to test a hit as we access the same address from storing to loading

```C
TEST_F(CacheTestbench, CacheMissTest)
{
    top->reset = 1;
    runSimulation(1);
    top->reset = 0;
    runSimulation(1);

    const int NUM_ACCESSES = 5;
    int base_address = 0x30000000;
    
    for (int i = 0; i < NUM_ACCESSES; i++) {
        int address = base_address + (i * 0x1000);
        
        top->AddrMode = 2; // LW (load word)
        top->A = address;
        runSimulation(1); // Run for only 1 cycle

        std::cout << "CacheMissTest - Access " << i 
                  << " - Hit: " << (int)top->hit 
                  << ", Address: 0x" << std::hex << address << std::dec << std::endl;

        if (top->hit == 0) {
            EXPECT_EQ(top->hit, 0);
            return; // Exit the test as soon as a miss is detected
        }

        runSimulation(1); // Run for one more cycle to complete the access
    }

    FAIL() << "No cache misses observed after " << NUM_ACCESSES << " accesses";
}
```
This test was for a miss by accessing an entirely new location and we reset here to ensure that there is no potential interference from previous simulations or runs. 

```C
TEST_F(CacheTestbench, PerformanceCountersTest)
{

    int address1 = 0x00000050;
    int address2 = 0x00000060;
    int data1 = 0x12345678;

    EXPECT_EQ(top->total_accesses, 0);
    EXPECT_EQ(top->total_hits, 0);
    EXPECT_EQ(top->total_misses, 0);

    // First access (miss)
    top->AddrMode = 2; // LW (load word)
    top->A = address1;
    runSimulation(1); // Access should miss

    // Check after first access
    std::cout << "After first access - Accesses: " << top->total_accesses 
              << ", Hits: " << top->total_hits 
              << ", Misses: " << top->total_misses << std::endl;

    // Second access to the same address (hit)
    top->AddrMode = 2; // LW (load word)
    top->A = address1;
    runSimulation(1); // Access should hit

    // Check after second access
    std::cout << "After second access - Accesses: " << top->total_accesses 
              << ", Hits: " << top->total_hits 
              << ", Misses: " << top->total_misses << std::endl;

    // Third access to a different address (miss)
    top->AddrMode = 2; // LW (load word)
    top->A = address2;
    runSimulation(1); // Access should miss

    // Final check
    std::cout << "Final state - Accesses: " << top->total_accesses 
              << ", Hits: " << top->total_hits 
              << ", Misses: " << top->total_misses << std::endl;

    EXPECT_EQ(top->total_accesses, 3); // Expecting total accesses to be counted
    EXPECT_EQ(top->total_hits, 1);      // Expecting one hit
    EXPECT_EQ(top->total_misses, 2);    // Expecting two misses
}
```

This was to ensure that our performance counters are counting correctly based on the condition. 


#### [Top-level integration](../../tb/top_cache_tb.cpp)

```
main:
    addi x13, x13, 0x1
    sw x13, 0(x10)

    addi x13, x13, 0x1
    sw x13, 4(x10)

    addi x13, x13, 0x1
    sw x13, 8(x10)

    addi x13, x13, 0x1
    sw x13, 12(x10)

    # Read Test
    lb x11, 0(x10)   # Read first word, expect cache miss
    lb x11, 1(x10)   # Read second word, expect cache hit as same code block
    lb x11, 0(x10)   # Read first word again, expect cache hit
```

By using the above code we get 4 misses and 3 hits. Upon looking at gtkwave it seems that the store instructions are all the misses and the loads are hits. This is right because the cache implements temporal locality and therefore the store accesses the address and therefore the first load would be a hit.

<img width="692" alt="Screenshot 2024-12-13 at 5 45 17 PM" src="https://github.com/user-attachments/assets/cdfbcb7e-7828-4c6c-a4ff-1745d5ac231c" />


```
main:
    # Read Test
    lb x11, 0(x10)   # Read first word, expect cache miss
    lb x11, 1(x10)   # Read second word, expect cache hit as same code block
    lb x11, 0(x10)   # Read first word again, expect cache hit
```

Upon removing the store instructions and preloading the data in our program.hex we are able to get 2 hits and 1 miss which is expected. The 1 miss seems to be coming from the first load instruction which in this case is right and therefore the 2 hits are the following load. The reason the second instruction is a hit is because that it is from the same code block which is implementing the spatial locality.

<img width="691" alt="Screenshot 2024-12-13 at 5 45 28 PM" src="https://github.com/user-attachments/assets/7fa2173a-f2ef-4dfd-a10a-f7a4d90fc4e5" />


## [Two-Way Set Associative Cache](../../rtl/tw_cache.sv) 

The tag was changed from 27 to 28 bits (to compensate for fewer sets), and the number of sets went from 8 to 4. The cache line was a total of 61 bits.
We also managed to implement a LRU policy:
```SV
logic [NUM_SETS-1:0] lru_bits;  // 0 means way 0 is LRU, 1 means way 1 is LRU
```
which was managed accordingly:
```SV
if (hit) begin
    hit_counter <= hit_counter + 1;
    // Update LRU - mark the other way as LRU
    lru_bits[set] <= ~hit_way;
end
```

The read logic of the two-way set associative cache was as follows:
```SV
for (int i = 0; i < NUM_WAYS; i++) begin
    if (cache[set][i].valid && cache[set][i].tag == tag) begin
        way_hits[i] = 1'b1;
        hit = 1'b1;
        hit_way = i[0:0];
        out = cache[set][i].data;
    end
end
```

The read operation:
  - Checks both ways in parallel
  - Sets hit flags for matching ways
  - Records which way hit for LRU update


On the other hand, the write operation was as follows:
For a miss:
```SV
miss_counter <= miss_counter + 1;
// On miss, update the LRU way
cache[set][lru_bits[set]].data <= RD;
cache[set][lru_bits[set]].valid <= 1'b1;
cache[set][lru_bits[set]].tag <= tag;
```
For a hit:
```SV
if (hit && AddrMode == 3'b111) begin  // Store operation
    case (byte_offset)
        2'b00: cache[set][hit_way].data[7:0] <= WD[7:0];
        // ... other byte offsets
    endcase
end
```

We maintained a write-through policy which updates both cache and memory on an LRU based replacement. 

Compared to the direct-mapped cache, the main improvements were:
  - Conflict Resolution
      - Two ways per set reduce conflict misses
      - LRU policy for intelligent replacement
  - Address Space Mapping
      - Larger tag field (28 bits vs 27 bits)
      - More flexible mapping with two ways
  - Set Organization
      - 4 sets × 2 ways = 8 total cache lines
      - Same total capacity, better utilization

![image](https://github.com/user-attachments/assets/6c9e37fb-a3a4-4239-9b5b-4fa671f2c288)

## Conclusion


