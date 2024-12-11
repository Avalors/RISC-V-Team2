#include "sync_testbench.h"
#include <verilated_cov.h>

#define NAME            "regfile"


class RegfileTestbench : public SyncTestbench
{
protected:
    void initializeInputs() override
    {
        top->clk = 1;
        top->AD1 = 0;
        top->AD2 = 0;
        top->AD3 = 0;
        top->WE3 = 0;
        top->WD3 = 0;

        // output logic [WIDTH - 1:0] RD1,
        // output logic [WIDTH - 1:0] RD2,
    }
};


TEST_F(RegfileTestbench, RegZeroHardWiredTest)
{
    int randomNumber = 0x12345678;

    // Modify x0 (zero)
    top->AD3 = 1;
    top->WD3 = randomNumber;
    top->WE3 = 1;

    runSimulation(1);
    
    // Both dual ports looking for x0
    top->AD1 = 0;
    top->AD2 = 0;

    runSimulation(1);

    EXPECT_EQ(top->RD1, 0);
    EXPECT_EQ(top->RD2, 0);
}


TEST_F(RegfileTestbench, AllRegsFunctionTest)
{
    int randomNumber = 0x12345678;

    // Modify x0 (zero)
    top->WD3 = randomNumber;
    top->WE3 = 1;

    for (int i = 1; i < 32; ++i)
    {
        top->AD3 = i;
        runSimulation(1);
        
        // Both dual ports looking for x_i
        top->AD1 = i;
        top->AD2 = i;

        runSimulation(1);

        EXPECT_EQ(top->RD1, randomNumber);
        EXPECT_EQ(top->RD2, randomNumber);
    }
}


TEST_F(RegfileTestbench, asyncReadTest)
{
    int randomNumber = 0x12345678;

    top->AD3 = 10;
    top->WD3 = randomNumber;
    top->WE3 = 1;

    runSimulation(1);

    top->AD1 = 10;
    top->AD2 = 10;

    // Async operation
    top->eval();
    
    EXPECT_EQ(top->RD1, randomNumber);
    EXPECT_EQ(top->RD2, randomNumber);
}


int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    auto res = RUN_ALL_TESTS();
    //VerilatedCov::write(
      //  ("logs/coverage_" + std::string(NAME) + ".dat").c_str()
    //);

    return res;
}