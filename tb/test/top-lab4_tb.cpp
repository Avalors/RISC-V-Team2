/*
 *  Verifies the results of the TopLevelCPU module.
 */

#include "VTopLevelCPU.h"
#include "verilated.h"
#include "gtest/gtest.h"
#include <cstdlib>

#define NAME            "top-level-cpu"

class TopLevelCPUTestbench : public ::testing::Test
{
protected:
    VTopLevelCPU* top;

    // Called before each test.
    void SetUp() override
    {
        top = new VTopLevelCPU; // Instantiate the top-level CPU module
    }

    // Called after each test.
    void TearDown() override
    {
        delete top; // Clean up the module after each test
    }

    // Run one simulation cycle.
    void runSimulation(int cycles = 1)
    {
        for (int i = 0; i < cycles; ++i)
        {
            top->clk = !top->clk; // Toggle clock
            top->eval();          // Evaluate the design
        }
    }

    // Initialize the inputs (clock and reset).
    void initializeInputs()
    {
        top->clk = 1;
        top->rst = 1; // Start in reset state.
    }
};

TEST_F(TopLevelCPUTestbench, InitialStateTest)
{
    initializeInputs();
    top->eval();

    EXPECT_EQ(top->rst, 1);   // CPU should be in reset state.
    EXPECT_EQ(top->a0, 0);    // Register a0 should be 0 after reset.
}

TEST_F(TopLevelCPUTestbench, ResetBehaviorTest)
{
    initializeInputs();
    runSimulation(1);  // Run 1 clock cycle with reset active.

    EXPECT_EQ(top->a0, 0);  // Register a0 should remain 0 during reset.

    top->rst = 0;  // De-assert reset
    runSimulation(1);  // Run 1 clock cycle without reset.

    EXPECT_NE(top->a0, 0); // Register a0 should change after reset is de-asserted.
}

TEST_F(TopLevelCPUTestbench, InstructionExecutionTest)
{
    initializeInputs();
    top->rst = 0;  // Release reset.

    // Simulate a few clock cycles to execute instructions
    for (int cycle = 0; cycle < 10; ++cycle)
    {
        runSimulation(1);  // Run 1 clock cycle

        // Verify the value of a0 after each cycle (for example, it should increment)
        // This will depend on the instructions being executed by the CPU.
        // For a simple test, we assume the CPU increments the value of a0.
        EXPECT_EQ(top->a0, cycle + 1); // Expect a0 to increment with each cycle
    }
}

TEST_F(TopLevelCPUTestbench, FullCycleTest)
{
    initializeInputs();
    top->rst = 0;  // Release reset.

    // Run multiple clock cycles and check if the CPU executes instructions correctly.
    for (int cycle = 0; cycle < 20; ++cycle)
    {
        runSimulation(1);  // Run 1 clock cycle

        // Check a0 value at each cycle (this assumes the CPU is executing a sequence of instructions)
        // You will need to adapt this depending on the CPU's functionality (e.g., check register a0 or memory).
        EXPECT_EQ(top->a0, cycle + 1); // Adjust based on expected CPU behavior
    }
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);   // Parse command-line arguments
    testing::InitGoogleTest(&argc, argv); // Initialize Google Test framework
    Verilated::mkdir("logs");             // Create logs folder for simulation output
    auto res = RUN_ALL_TESTS();           // Run all tests

    return res;
}
