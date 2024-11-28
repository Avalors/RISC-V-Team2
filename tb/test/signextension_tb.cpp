#include "base_testbench.h"
#include <verilated_cov.h>
#include <gtest/gtest.h>

class SignExtensionTestbench : public BaseTestbench {  // Use template for signextension
protected:
    void initializeInputs() override {
        // Initialize DUT inputs to default values
        top->instr = 0;
        top->ImmSrc = 0;
    }
};

TEST_F(SignExtensionTestbench, ImmSrc00Test) {
    // Test for ImmSrc = 2'b00
    top->instr = 0xFFF00013;  // Example instruction: 0xFFF represents a negative immediate
    top->ImmSrc = 0b00;

    top->eval();

    // Expected output: Sign-extended 12-bit immediate field (0xFFFFFFFFFFF)
    EXPECT_EQ(top->ImmOp, 0xFFFFFFFF);
}

TEST_F(SignExtensionTestbench, ImmSrc01Test) {
    // Test for ImmSrc = 2'b01
    top->instr = 0xFE000FA3;  // Example instruction
    top->ImmSrc = 0b01;

    top->eval();

    // Expected output: Sign-extended instruction for S-type immediate
    EXPECT_EQ(top->ImmOp, 0xFFFFFFFF);
}

TEST_F(SignExtensionTestbench, ImmSrc10Test) {
    // Test for ImmSrc = 2'b10
    top->instr = 0x000FF06F;  // Example instruction
    top->ImmSrc = 0b10;

    top->eval();

    // Expected output: Sign-extended instruction for B-type immediate
    EXPECT_EQ(top->ImmOp, 0xFFFFFFFFFFFFFFFE);  // Replace with actual expected value
}

TEST_F(SignExtensionTestbench, DefaultTest) {
    // Test default behavior (ImmSrc = invalid)
    top->instr = 0x12345678;  // Random instruction
    top->ImmSrc = 0b11;       // Invalid ImmSrc

    top->eval();

    // Expected output: Default case (same as ImmSrc = 2'b00)
    EXPECT_EQ(top->ImmOp, 0xFFFFFFFFF2345678);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);

    Verilated::mkdir("logs");
    auto result = RUN_ALL_TESTS();
    VerilatedCov::write("logs/coverage.dat");

    return result;
}