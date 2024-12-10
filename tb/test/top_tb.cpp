#include "sync_testbench.h"
#include <cstdlib>

#define NAME            "top-instr"


class InstrTestbench : public SyncTestbench
{
protected:
    void initializeInputs() override
    {
        top->clk = 1;
        top->rst = 0;
    }
};

TEST_F(InstrTestbench, RTypeTest)
{
    // Compile the assembly code r-type.s
    system("./compile.sh --input asm/01-R_type.s");
    
    runSimulation(1000);

    //value a0 = 150 is arbitrary value that I set to check all R-type instr
    //All checks are done in the asm code itself and this "special" value 150 only seen if all are passed
    EXPECT_EQ((int)top->a0, 150);
}

// TEST_F(InstrTestbench, ITypeArithTest)
// {
     // Compile the assembly code r-type.s
//     system("./compile.sh --input asm/02-I_type_arith.s");
    
//     runSimulation(1000);

        //value a0 = 150 is arbitrary value that I set to check all I-type instr
        //All checks are done in the asm code itself and this "special" value 150 only seen if all are passed
//     EXPECT_EQ((int)top->a0, 150);
// }

// TEST_F(InstrTestbench, ITypeLoadTest)
// {
     // Compile the assembly code r-type.s
//     system("./compile.sh --input asm/03-I_type_load.s");
    
//     runSimulation(1000);

     //value a0 = 150 is arbitrary value that I set to check all I-type instr
     //All checks are done in the asm code itself and this "special" value 150 only seen if all are passed
//     EXPECT_EQ((int)top->a0, 150);
// }

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    auto res = RUN_ALL_TESTS();

    return res;
}