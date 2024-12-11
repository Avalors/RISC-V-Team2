#include "sync_testbench.h"
#include <verilated_cov.h>

#define NAME            "branch_predictor"

class BranchPredictorTestbench : public SyncTestbench
{
protected:
    void initializeInputs() override
    {
        top->clk = 1;
        top->reset = 1;
        top->branch_taken = 0;
        top->branch_valid = 0;
    }
};

// Test Case: Reset Behavior
TEST_F(BranchPredictorTestbench, ResetBehaviorTest)
{
    runSimulation(1);

    // After reset, ensure predictor starts in STRONGLY_NOT_TAKEN state
    EXPECT_EQ(top->prediction, 0); // STRONGLY_NOT_TAKEN predicts not taken

    top->reset = 0;
    runSimulation(1);
}

// Test Case: Transition Through States
TEST_F(BranchPredictorTestbench, StateTransitionTest)
{
    top->reset = 0;
    top->branch_valid = 1;

    // Test STRONGLY_NOT_TAKEN to WEAKLY_NOT_TAKEN
    top->branch_taken = 1;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 0); // Still predicts not taken

    // Test WEAKLY_NOT_TAKEN to WEAKLY_TAKEN
    top->branch_taken = 1;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 1); // Predicts taken

    // Test WEAKLY_TAKEN to STRONGLY_TAKEN
    top->branch_taken = 1;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 1); // Strongly predicts taken

    // Test STRONGLY_TAKEN to WEAKLY_TAKEN
    top->branch_taken = 0;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 1); // Still predicts taken

    // Test WEAKLY_TAKEN to WEAKLY_NOT_TAKEN
    top->branch_taken = 0;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 0); // Predicts not taken

    // Test WEAKLY_NOT_TAKEN to STRONGLY_NOT_TAKEN
    top->branch_taken = 0;
    runSimulation(1);
    EXPECT_EQ(top->prediction, 0); // Strongly predicts not taken
}

// Test Case: Prediction Accuracy
TEST_F(BranchPredictorTestbench, PredictionAccuracyTest)
{
    top->reset = 0;
    top->branch_valid = 1;

    // Initial state: STRONGLY_NOT_TAKEN
    EXPECT_EQ(top->prediction, 0); 

    // Branch taken, transition to WEAKLY_NOT_TAKEN  then WEAKLY_TAKEN
    top->branch_taken = 1;
    runSimulation(2); // Run two cycles to allow state transition
    EXPECT_EQ(top->prediction, 1); 

    // Branch taken again, transition to WEAKLY_TAKEN then STRONGLY_TAKEN
    top->branch_taken = 1;
    runSimulation(2); // Run two cycles to allow state transition
    EXPECT_EQ(top->prediction, 1); // Predicts taken (transition from WEAKLY_NOT_TAKEN to WEAKLY_TAKEN)

    // Branch not taken, transition to WEAKLY_TAKEN then WEAKLY_NOT_TAKEN
    top->branch_taken = 0;
    runSimulation(2); // Run two cycles to allow state transition
    EXPECT_EQ(top->prediction, 0); // Still predicts taken (transition from WEAKLY_TAKEN to STRONGLY_TAKEN)

    // Branch not taken again, transition to STRONGLY_NOT_TAKEN then STRONGLY_NOT_TAKEN
    top->branch_taken = 0;
    runSimulation(2); // Run two cycles to allow state transition
    EXPECT_EQ(top->prediction, 0); // Predicts taken (transition from STRONGLY_TAKEN to WEAKLY_TAKEN)

    // Branch not taken again, stays at STRONGLY_NOT_TAKEN
    top->branch_taken = 0;
    runSimulation(2); // Run two cycles to allow state transition
    EXPECT_EQ(top->prediction, 0); // Predicts not taken (transition from WEAKLY_TAKEN to WEAKLY_NOT_TAKEN)

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
