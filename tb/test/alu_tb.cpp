#include "base_testbench.h"
#include <verilated_cov.h>

#define NAME            "alu"

#define OPCODE_ADD      0b000
#define OPCODE_SUB      0b001
#define OPCODE_AND      0b010
#define OPCODE_OR       0b011
#define OPCODE_SLT      0b101

class ALUTestbench : public BaseTestbench
{
protected:
    void initializeInputs() override
    {
        // Initialize the ALU inputs to 0
        top->ALUop1 = 0;
        top->ALUop2 = 0;
        top->ALUctrl = 0;
    }
};

TEST_F(ALUTestbench, AdditionTest)
{
    int op1 = 5;
    int op2 = 10;
    
    // Set inputs for addition operation
    top->ALUop1 = op1;
    top->ALUop2 = op2;
    top->ALUctrl = OPCODE_ADD;

    top->eval();

    // Check the ALU result and EQ signal for addition
    EXPECT_EQ(top->Result, op1 + op2);
    EXPECT_EQ(top->EQ, (op1 + op2 == 0) ? 1 : 0);
}

TEST_F(ALUTestbench, SubtractionTest)
{
    int op1 = 5;
    int op2 = 5;
    
    // Set inputs for subtraction operation
    top->ALUop1 = op1;
    top->ALUop2 = op2;
    top->ALUctrl = OPCODE_SUB;

    top->eval();

    // Check the ALU result and EQ signal for subtraction
    EXPECT_EQ(top->Result, op1 - op2);
    EXPECT_EQ(top->EQ, (op1 - op2 == 0) ? 1 : 0);
}

TEST_F(ALUTestbench, BinaryAndTest)
{
    int op1 = 0b0110;
    int op2 = 0b0101;
    
    // Set inputs for binary AND operation
    top->ALUop1 = op1;
    top->ALUop2 = op2;
    top->ALUctrl = OPCODE_AND;

    top->eval();

    // Check the ALU result and EQ signal for AND operation
    EXPECT_EQ(top->Result, op1 & op2);
    EXPECT_EQ(top->EQ, ((op1 & op2) == 0) ? 1 : 0);
}

TEST_F(ALUTestbench, BinaryOrTest)
{
    int op1 = 0b0110;
    int op2 = 0b0101;
    
    // Set inputs for binary OR operation
    top->ALUop1 = op1;
    top->ALUop2 = op2;
    top->ALUctrl = OPCODE_OR;

    top->eval();

    // Check the ALU result and EQ signal for OR operation
    EXPECT_EQ(top->Result, op1 | op2);
    EXPECT_EQ(top->EQ, ((op1 | op2) == 0) ? 1 : 0);
}

TEST_F(ALUTestbench, SetIfLessThanTest)
{
    int op1 = 0b0110;
    int op2 = 0b0101;
    
    // Set inputs for SLT (Set Less Than) operation
    top->ALUop1 = op1;
    top->ALUop2 = op2;
    top->ALUctrl = OPCODE_SLT;

    top->eval();

    // Check the ALU result and EQ signal for SLT operation
    EXPECT_EQ(top->Result, (op1 < op2) ? 0b1 : 0b0);
    EXPECT_EQ(top->EQ, ((op1 < op2) ? 0b1 : 0b0) == 0 ? 1 : 0);
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    auto res = RUN_ALL_TESTS();
    VerilatedCov::write(("logs/coverage_" + std::string(NAME) + ".dat").c_str());

    return res;
}
