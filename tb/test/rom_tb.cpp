#include "base_testbench.h"
#include <verilated_cov.h>
#include <gtest/gtest.h>

class RomTestbench : public BaseTestbench {
protected:
    void initializeInputs() override {
        // Initialize DUT inputs to default values
        top->addr = 0;
    }
};

// Test for reading instructions from ROM
TEST_F(RomTestbench, ReadInstructions) {
    // Array to hold expected values for test validation
    std::array<uint32_t, 7> expected_instrs = {
        0x0ff00313,  // addi a0, x0, 1
        0x00000513,  // addi a0, a0, 1
        0x00000593,  // addi a0, a0, 1
        0x00058513,  // addi a0, a0, 1
        0x00158593,  // addi a0, a0, 1
        0xfe659ce3,
        0xfe0318e3
    };

    // Test ROM reads for sequential addresses
    for (size_t i = 0; i < expected_instrs.size(); ++i) {
        top->addr = i;  // Set the address
        top->eval();    // Evaluate the model
        
        // Check the output
        EXPECT_EQ(top->instr, expected_instrs[i]) 
            << "Mismatch at addr " << i;
    }
}

// Test for unused memory locations
TEST_F(RomTestbench, DefaultNOPs) {
    // ROM locations beyond test program are expected to contain NOP (0x00000013)
    for (size_t i = 7; i < (1 << top->ADDRESS_WIDTH); ++i) {
        top->addr = i;  // Set the address
        top->eval();    // Evaluate the model
        
        // Check that unused memory returns a NOP
        EXPECT_EQ(top->instr, 0x00000013) 
            << "Unexpected value at unused addr " << i;
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);

    Verilated::mkdir("logs");
    auto result = RUN_ALL_TESTS();
    VerilatedCov::write("logs/coverage_rom.dat");

    return result;
}