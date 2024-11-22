#include "Valu.h"
#include "verilated.h"
#include "verilated_cov.h"
#include "gtest/gtest.h"

#define NAME            "alu"

#define OPCODE_ADD      0b0000
#define OPCODE_SUB      0b0001
#define OPCODE_AND      0b0010
#define OPCODE_OR       0b0011
#define OPCODE_XOR      0b0100
#define OPCODE_LSL      0b0101
#define OPCODE_LSR      0b0110
#define OPCODE_ASR      0b0111
#define OPCODE_SLT      0b1000
#define OPCODE_SLTU     0b1001
#define OPCODE_B        0b1010

class ALUTestbench : public ::testing::Test {
protected:
    Valu* top;

    void SetUp() override {
        top = new Valu;
        initializeInputs();
    }

    void TearDown() override {
        delete top;
    }

    void initializeInputs() {
        top->a = 0;
        top->b = 0;
        top->ALUctrl = 0;
    }
};

TEST_F(ALUTestbench, AdditionTest) {
    int op1 = 0x55555555;
    int op2 = 0xAAAAAAAA;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_ADD;

    top->eval();

    EXPECT_EQ(top->ALUout, op1 + op2);
    EXPECT_EQ(top->EQ, op1 + op2 == 0);
}

TEST_F(ALUTestbench, SubtractionTest) {
    int op1 = 0xAAAAAAAA;
    int op2 = 0x55555555;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_SUB;

    top->eval();

    EXPECT_EQ(top->ALUout, op1 - op2);
    EXPECT_EQ(top->EQ, op1 - op2 == 0);
}

TEST_F(ALUTestbench, BinaryAndTest) {
    int op1 = 0b0110;
    int op2 = 0b0101;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_AND;

    top->eval();

    EXPECT_EQ(top->ALUout, op1 & op2);
    EXPECT_EQ(top->EQ, (op1 & op2) == 0);
}

TEST_F(ALUTestbench, BinaryOrTest) {
    int op1 = 0b0110;
    int op2 = 0b0101;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_OR;

    top->eval();

    EXPECT_EQ(top->ALUout, op1 | op2);
    EXPECT_EQ(top->EQ, (op1 | op2) == 0);
}

TEST_F(ALUTestbench, BinaryXorTest) {
    int op1 = 0b0110;
    int op2 = 0b0101;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_XOR;

    top->eval();

    EXPECT_EQ(top->ALUout, op1 ^ op2);
    EXPECT_EQ(top->EQ, (op1 ^ op2) == 0);
}

TEST_F(ALUTestbench, LogicalShiftLeftTest) {
    int op1 = 0b0110;
    int op2 = 4;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_LSL;

    top->eval();

    EXPECT_EQ(top->ALUout, op1 << op2);
    EXPECT_EQ(top->EQ, (op1 << op2) == 0);
}

TEST_F(ALUTestbench, LogicalShiftRightTest) {
    unsigned int op1 = 0b0110;
    unsigned int op2 = 4;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_LSR;

    top->eval();

    EXPECT_EQ(top->ALUout, op1 >> op2);
    EXPECT_EQ(top->EQ, (op1 >> op2) == 0);
}

TEST_F(ALUTestbench, ASRTest) {
    int op1 = 0xffffd8f1;
    int op2 = 0x5;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_ASR;

    top->eval();

    EXPECT_EQ((int)top->ALUout, op1 >> op2);
    EXPECT_EQ(top->EQ, op2 == 0);
}

TEST_F(ALUTestbench, SetIfLessThanTest) {
    int op1 = 0b0110;
    int op2 = 0b0101;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_SLT;

    top->eval();

    EXPECT_EQ(top->ALUout, (op1 < op2) ? 1 : 0);
    EXPECT_EQ(top->EQ, (op1 < op2) == 0);
}

TEST_F(ALUTestbench, LoadUpperImmTest) {
    int op1 = 0b0110;
    int op2 = 0b1101;
    
    top->a = op1;
    top->b = op2;
    top->ALUctrl = OPCODE_B;

    top->eval();

    EXPECT_EQ(top->ALUout, op2);
    EXPECT_EQ(top->EQ, op2 == 0);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    auto res = RUN_ALL_TESTS();
    VerilatedCov::write(("logs/coverage_" + std::string(NAME) + ".dat").c_str());
    return res;
}