#include "testbench.h"
#include <cstdlib>
#define CYCLES 10000
unsigned int ticks = 0;

class CpuTestbench : public Testbench
{
protected:
    void initializeInputs() override
    {
        system("./compile.sh --input asm/data_mem_test.s --output ../rtl/program.hex");
        top->clk = 1;
        top->rst = 0;
    }
};

TEST_F(CpuTestbench, InitialStateTest)
{
    top->eval();
    EXPECT_EQ(top->clk, 1);
    EXPECT_EQ(top->rst, 0);
}

TEST_F(CpuTestbench, LoadByteTest) 
{
    runSimulation(7);

    EXPECT_EQ(top->a0, 0x00000078) << top->a0;
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}