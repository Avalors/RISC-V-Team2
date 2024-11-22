#include "Vtop_lab4.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_cov.h"
#include "gtest/gtest.h"
#include <cstdlib>

#define MAX_SIM_TIME 1000
#define VERIF_START_TIME 2

class TopLevelCPUTestbench : public ::testing::Test {
protected:
    Vtop_lab4* top;
    VerilatedContext* contextp;
    VerilatedVcdC* m_trace;
    uint64_t sim_time;
    uint64_t posedge_cnt;

    void SetUp() override {
        // Initialize context and create instance of module
        contextp = new VerilatedContext;
        top = new Vtop_lab4{contextp};
        
        // Initialize trace dump
        Verilated::traceEverOn(true);
        m_trace = new VerilatedVcdC;
        top->trace(m_trace, 99);  // Trace 99 levels of hierarchy
        m_trace->open("cpu_trace.vcd");
        
        // Initialize simulation time and inputs
        sim_time = 0;
        posedge_cnt = 0;
        initializeInputs();
    }

    void TearDown() override {
        // Close trace if exists
        if (m_trace) {
            m_trace->close();
            delete m_trace;
        }
        
        // Clean up
        delete top;
        delete contextp;
    }

    void initializeInputs() {
        top->clk = 0;
        top->rst = 1;
    }

    // Single clock cycle with tracing
    void tick() {
        // Toggle clock and evaluate on each edge
        contextp->timeInc(1);
        
        // Rising edge
        top->clk = 1;
        top->eval();
        m_trace->dump(sim_time++);
        posedge_cnt++;
        
        contextp->timeInc(1);
        
        // Falling edge
        top->clk = 0;
        top->eval();
        m_trace->dump(sim_time++);
        
        m_trace->flush();
    }

    // Multiple clock cycles
    void ticks(int num_ticks) {
        for(int i = 0; i < num_ticks; i++) {
            tick();
        }
    }

    // Complete reset sequence
    void reset() {
        printf("\nApplying reset...\n");
        top->rst = 1;
        ticks(5);  // Hold in reset for 5 cycles
        
        printf("Releasing reset...\n");
        top->rst = 0;
        tick();    // One cycle after reset
    }

    void dumpState(const char* msg) {
        printf("\n=== %s ===\n", msg);
        printf("Simulation time: %lu\n", sim_time);
        printf("Clock: %d\n", top->clk);
        printf("Reset: %d\n", top->rst);
        printf("Register a0: %d (0x%08x)\n", (int)top->a0, (unsigned int)top->a0);
        printf("Posedge count: %lu\n", posedge_cnt);
    }
};

TEST_F(TopLevelCPUTestbench, InitialStateTest) {
    dumpState("Initial State");
    
    EXPECT_EQ(top->rst, 1) << "Reset should be active initially";
    EXPECT_EQ(top->clk, 0) << "Clock should start at 0";
    EXPECT_EQ(top->a0, 0) << "a0 should be 0 initially";
    
    top->eval();
    EXPECT_EQ(top->a0, 0) << "a0 should remain 0 before any clock edges";
}

TEST_F(TopLevelCPUTestbench, ResetTest) {
    printf("\n=== Reset Sequence Test ===\n");
    
    // Initial reset state
    EXPECT_EQ(top->a0, 0) << "a0 should be 0 initially";
    
    // Multiple cycles in reset
    for (int i = 0; i < 5; i++) {
        tick();
        printf("Reset cycle %d: a0 = %d\n", i, (int)top->a0);
        EXPECT_EQ(top->a0, 0) << "a0 should remain 0 during reset";
    }
    
    // Release reset and check immediate behavior
    printf("\nReleasing reset...\n");
    top->rst = 0;
    
    for (int i = 0; i < 3; i++) {
        tick();
        printf("Post-reset cycle %d: a0 = %d\n", i, (int)top->a0);
        if (i == 0) {
            EXPECT_EQ(top->a0, 0) << "a0 should be 0 immediately after reset release";
        }
    }
}

TEST_F(TopLevelCPUTestbench, BasicExecutionTest) {
    printf("\n=== Basic Execution Test ===\n");
    
    reset();
    dumpState("After Reset");
    
    // First instruction should set a0 to 1
    tick();
    printf("After first instruction: a0 = %d\n", (int)top->a0);
    EXPECT_EQ(top->a0, 1) << "First ADDI should set a0 to 1";
    
    // Next instructions increment a0
    for (int i = 1; i < 5; i++) {
        tick();
        printf("After instruction %d: a0 = %d\n", i+1, (int)top->a0);
        EXPECT_EQ(top->a0, i+1) << "a0 should increment by 1 each cycle";
    }
}

TEST_F(TopLevelCPUTestbench, InfiniteLoopTest) {
    printf("\n=== Infinite Loop Test ===\n");
    
    reset();
    
    // Run until we should hit the loop
    for (int i = 0; i < 6; i++) {
        tick();
        printf("Cycle %d: a0 = %d\n", i, (int)top->a0);
        if (i < 5) {
            EXPECT_EQ(top->a0, i+1) << "a0 should increment up to 5";
        } else {
            EXPECT_EQ(top->a0, 5) << "a0 should stay at 5 in the loop";
        }
    }
    
    // Verify we stay in the loop
    for (int i = 0; i < 5; i++) {
        tick();
        printf("Loop cycle %d: a0 = %d\n", i, (int)top->a0);
        EXPECT_EQ(top->a0, 5) << "a0 should remain 5 in the loop";
    }
}

TEST_F(TopLevelCPUTestbench, ResetAfterExecutionTest) {
    printf("\n=== Reset After Execution Test ===\n");
    
    // Run until we have a non-zero value
    reset();
    ticks(10);
    int32_t a0_before_reset = top->a0;
    printf("a0 before reset: %d\n", a0_before_reset);
    EXPECT_EQ(a0_before_reset, 5) << "a0 should be 5 before reset";
    
    // Apply reset
    top->rst = 1;
    ticks(5);
    printf("a0 during reset: %d\n", (int)top->a0);
    EXPECT_EQ(top->a0, 0) << "a0 should be 0 during reset";
    
    // Release reset and verify we start over
    top->rst = 0;
    tick();
    printf("a0 after reset released: %d\n", (int)top->a0);
    EXPECT_EQ(top->a0, 0) << "a0 should be 0 right after reset released";
    
    tick();
    printf("a0 after first instruction: %d\n", (int)top->a0);
    EXPECT_EQ(top->a0, 1) << "First instruction after reset should set a0 to 1";
}

TEST_F(TopLevelCPUTestbench, ComprehensiveExecutionTest) {
    printf("\n=== Comprehensive Execution Test ===\n");
    
    reset();
    
    // Expected values for each cycle
    const int expected_values[] = {0, 1, 2, 3, 4, 5, 5, 5, 5, 5};
    const int num_cycles = sizeof(expected_values) / sizeof(expected_values[0]);
    
    for (int i = 0; i < num_cycles; i++) {
        printf("Cycle %d: a0 = %d (expected %d)\n", 
               i, (int)top->a0, expected_values[i]);
               
        EXPECT_EQ(top->a0, expected_values[i]) 
            << "a0 should match expected value at cycle " << i;
            
        tick();
    }
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    
    printf("Starting CPU tests...\n");
    auto res = RUN_ALL_TESTS();
    
    VerilatedCov::write("logs/coverage_top_lab4.dat");
    return res;
}
