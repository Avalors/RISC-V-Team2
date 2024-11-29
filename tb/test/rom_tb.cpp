#include "base_testbench.h"
#include <verilated_cov.h>
#include <gtest/gtest.h>
#include <vector>

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
    std::vector<uint32_t> expected_instrs = {
        0x0ff00313,  
        0x00000513,  
        0x00000593,  
        0x00058513,  
        0x00158593,  
        0xfe659ce3,
        0xfe0318e3
    };

    // Test ROM reads for sequential addresses
    for (int i = 0; i < expected_instrs.size(); i++) {
        top->addr = i*4;  // Set the address
        top->eval();    // Evaluate the model
        
        // Check the output
        EXPECT_EQ(top->instr, expected_instrs[i]) 
            << "Mismatch at addr " << i*4;
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