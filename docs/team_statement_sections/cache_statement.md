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
  – Locality in time
  – If data used recently, likely to use it again soon
  – How to exploit: keep recently accessed data in higher levels of memory hierarchy
Spatial Locality:
  – Locality in space
  – If data used recently, likely to use nearby data soon
  – How to exploit: when access data, bring

At the time of writing, we have a complete working version of `direct-mapped cache`, and a draft of `two-way set associative cache`, which was not fully integrated.

## Design Specifications

In order to analyse memory performance, we used two variables, called hit and miss.
• Hit: data found in that level of memory hierarchy
• Miss: data not found 

![image](https://github.com/user-attachments/assets/49b23f1f-1ada-496c-8658-de589986f87f)

Effectiveness of cache memory is dependent on how often a memory access is found in the cache memory in a given level of memory hierarchy. A cache
“hit” happens when the data or instruction required is found in the cache and therefore there is no need to go to the next level to fetch from memory. A
miss happens when the data or instruction is not in cache, and a fetch from the main memory is required, thus incurring extra latency.

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

A memory address of 32 bits allows for both modes of addressing, controlled by a signal `ADDRMODE`. A set size of $2^3 = 8$ allows for fast compact memory.

Finally an internal `HIT` signal was implemented, to ease the debugging, enhance testing and calculate the performance increase specified later in the results.

The full code can be located here: [`dm_cache.sv`](../../rtl/cache.sv)

### [Read Logic](../../rtl/cache.sv)

The data is read from cache if both:

  - the block is valid (`VALID` = 1) 
  - the `TAG` matches the input `ADDRESS` signal

The 4 bytes specified in the data are then forwarded to the output signal `OUT`, 
and `HIT` is set to high. Otherwise, the output signal is read from the 
`DATA MEMORY` through the signal read_data.

### [Write Logic](../../rtl/cache.sv) 

```SV
always_ff @(posedge clk) begin
    if (write_en) begin
        // Pulls data in from sw/sb
        cache[set].valid <= 1;
        cache[set].tag <= addr[31:5];
        
        case (addr_mode)
            // Byte addressing
            `DATA_ADDR_MODE_B, `DATA_ADDR_MODE_BU: begin
                case (byte_offset)
                    2'b00:  cache[set].byte0 <= write_data[7:0];
                    2'b01:  cache[set].byte1 <= write_data[7:0];
                    2'b10:  cache[set].byte2 <= write_data[7:0];
                    2'b11:  cache[set].byte3 <= write_data[7:0];
                endcase
            end
            // Word addressing
            default: begin
                cache[set].byte0 <= write_data[7:0];
                cache[set].byte1 <= write_data[15:8];
                cache[set].byte2 <= write_data[23:16];
                cache[set].byte3 <= write_data[31:24];
            end
        endcase
    end
```

The write logic is split into two modes: byte and word addressing. Word addressing is the more general case in the testbenches written therefore this 
was set to default. 

In word addressing, the input signal, `write_data[]`, is written to the word, 
whereas in byte addressing, it is written to the specified byte.

## [Two-Way Set Associative Cache](../../rtl/tw_cache.sv) 

We implemented a LRU policy.

![image](https://github.com/user-attachments/assets/6c9e37fb-a3a4-4239-9b5b-4fa671f2c288)

## Conclusion


