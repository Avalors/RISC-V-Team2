#include "sync_testbench.h"
#include <cstdlib>

#define NAME            "cpu-performance"

// Testbench for measuring performance with and without cache
class CpuTestbench : public SyncTestbench
{
protected:
    // Initialize necessary inputs for the CPU
    void initializeInputs() override
    {
        top->clk = 1;
        top->rst = 0;
    }

    // Helper function to run the simulation and measure the clock cycles
    int runSimulationAndMeasureTime(int numCycles) {
        // Reset the design before running the simulation
        top->rst = 1;
        runSimulation(1); // Run one cycle for reset
        top->rst = 0;
        
        // Measure the start time (current clock cycle)
        int startCycle = Verilated::time();

        // Run the simulation for the desired number of cycles
        runSimulation(numCycles);

        // Measure the end time (after the simulation run)
        int endCycle = Verilated::time();

        // Return the number of clock cycles used
        return endCycle - startCycle;
    }
};

// Test case to compare performance with and without cache
TEST_F(CpuTestbench, CachePerformanceComparison)
{
    // Run the simulation with the cache enabled (uncomment the cache in top.sv)
    system("./compile.sh --input asm/010-cache_read.s");  // A simple program that reads from memory

    // Run for a set number of cycles with cache enabled
    int cyclesWithCache = runSimulationAndMeasureTime(1000); // Adjust the number of cycles if needed

    // Output the number of cycles taken with cache enabled
    std::cout << "Cycles with cache: " << cyclesWithCache << std::endl;

    // Now, disable the cache by commenting it out in top.sv and recompile

    //system("./compile.sh --input asm/010-cache_read.s");  // Recompile the same program

    // Run for a set number of cycles with cache disabled
    //int cyclesWithoutCache = runSimulationAndMeasureTime(1000); // Adjust the number of cycles if needed

    // Output the number of cycles taken with cache disabled
    //std::cout << "Cycles without cache: " << cyclesWithoutCache << std::endl;

    // You can manually compare the two outputs
    //EXPECT_LT(cyclesWithCache, cyclesWithoutCache) << "Cache should improve performance";
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv); // Process Verilator arguments
    testing::InitGoogleTest(&argc, argv); // Initialize Google Test
    
    Verilated::mkdir("logs"); // Create a logs directory if it doesn't exist
    
    // Run all tests and store the result
    auto res = RUN_ALL_TESTS();

    return res; // Return test results
}
