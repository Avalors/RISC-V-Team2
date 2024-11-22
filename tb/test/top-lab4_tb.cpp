/*
 *  Verifies the results of the counter and binary-to-BCD conversion system.
 */

#include "sync_testbench.h"
#include <cstdlib>

#define NAME            "top-binary-to-bcd"


class CounterBcdTestbench : public SyncTestbench
{
protected:
    void initializeInputs() override
    {
        top->clk = 1;
        top->rst = 1; // Start in reset state.
    }
};

TEST_F(CounterBcdTestbench, InitialStateTest)
{
    top->eval();

    EXPECT_EQ(top->rst, 1);
    EXPECT_EQ(top->counter_out, 0);
    EXPECT_EQ(top->bcd_out, 0);
}

TEST_F(CounterBcdTestbench, CounterResetTest)
{
    top->rst = 1;
    runSimulation(1); // Run 1 clock cycle with reset.
    EXPECT_EQ(top->counter_out, 0);

    top->rst = 0; // Release reset.
    runSimulation(1); // Run 1 clock cycle.
    EXPECT_NE(top->counter_out, 0); // Counter should start incrementing.
}

TEST_F(CounterBcdTestbench, CounterIncrementTest)
{
    top->rst = 0;
    for (int i = 0; i < 10; ++i)
    {
        runSimulation(1);
        EXPECT_EQ(top->counter_out, i + 1); // Counter increments sequentially.
    }
}

TEST_F(CounterBcdTestbench, CounterWraparoundTest)
{
    top->rst = 0;
    for (int i = 0; i < 256; ++i)
    {
        runSimulation(1);
    }

    EXPECT_EQ(top->counter_out, 0); // Counter should wrap around to 0 after reaching 255.
}

TEST_F(CounterBcdTestbench, BcdConversionTest)
{
    top->rst = 0;
    for (int i = 0; i < 256; ++i)
    {
        runSimulation(1);

        // Check that the BCD output matches the counter value.
        // Helper function to convert counter value to BCD.
        int counter_val = top->counter_out;
        int expected_bcd = 0;
        int factor = 1;
        while (counter_val > 0)
        {
            expected_bcd += (counter_val % 10) * factor;
            counter_val /= 10;
            factor *= 16; // Each BCD digit uses 4 bits.
        }

        EXPECT_EQ(top->bcd_out, expected_bcd);
    }
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    auto res = RUN_ALL_TESTS();

    return res;
}
