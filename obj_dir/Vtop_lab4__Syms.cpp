// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_lab4__Syms.h"
#include "Vtop_lab4.h"
#include "Vtop_lab4___024root.h"

// FUNCTIONS
Vtop_lab4__Syms::~Vtop_lab4__Syms()
{
}

Vtop_lab4__Syms::Vtop_lab4__Syms(VerilatedContext* contextp, const char* namep, Vtop_lab4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU.configure(this, name(), "TopLevelCPU", "TopLevelCPU", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__ALUOperandMux.configure(this, name(), "TopLevelCPU.ALUOperandMux", "ALUOperandMux", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__ArithmeticLogicUnit.configure(this, name(), "TopLevelCPU.ArithmeticLogicUnit", "ArithmeticLogicUnit", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__InstructionMemory.configure(this, name(), "TopLevelCPU.InstructionMemory", "InstructionMemory", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__InstructionMemory__unnamedblk1.configure(this, name(), "TopLevelCPU.InstructionMemory.unnamedblk1", "unnamedblk1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__PC_Reg.configure(this, name(), "TopLevelCPU.PC_Reg", "PC_Reg", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__RegFile.configure(this, name(), "TopLevelCPU.RegFile", "RegFile", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__RegFile__unnamedblk1.configure(this, name(), "TopLevelCPU.RegFile.unnamedblk1", "unnamedblk1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__RegFile__unnamedblk2.configure(this, name(), "TopLevelCPU.RegFile.unnamedblk2", "unnamedblk2", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__SignExtender.configure(this, name(), "TopLevelCPU.SignExtender", "SignExtender", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TopLevelCPU__controlunit.configure(this, name(), "TopLevelCPU.controlunit", "controlunit", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"a0", &(TOP.a0), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"ALUctrl", &(TOP.TopLevelCPU__DOT__ALUctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"ALUop1", &(TOP.TopLevelCPU__DOT__ALUop1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"ALUop2", &(TOP.TopLevelCPU__DOT__ALUop2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"ALUout", &(TOP.TopLevelCPU__DOT__ALUout), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"ALUsrc", &(TOP.TopLevelCPU__DOT__ALUsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"EQ", &(TOP.TopLevelCPU__DOT__EQ), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"ImmOp", &(TOP.TopLevelCPU__DOT__ImmOp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"ImmSrc", &(TOP.TopLevelCPU__DOT__ImmSrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"PC", &(TOP.TopLevelCPU__DOT__PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"PCsrc", &(TOP.TopLevelCPU__DOT__PCsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"RD1", &(TOP.TopLevelCPU__DOT__RD1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"RD2", &(TOP.TopLevelCPU__DOT__RD2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"RegWrite", &(TOP.TopLevelCPU__DOT__RegWrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"WD3", &(TOP.TopLevelCPU__DOT__WD3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"a0", &(TOP.TopLevelCPU__DOT__a0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"clk", &(TOP.TopLevelCPU__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"instr", &(TOP.TopLevelCPU__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU.varInsert(__Vfinal,"rst", &(TOP.TopLevelCPU__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__ALUOperandMux.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.TopLevelCPU__DOT__ALUOperandMux__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__ALUOperandMux.varInsert(__Vfinal,"in0", &(TOP.TopLevelCPU__DOT__ALUOperandMux__DOT__in0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__ALUOperandMux.varInsert(__Vfinal,"in1", &(TOP.TopLevelCPU__DOT__ALUOperandMux__DOT__in1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__ALUOperandMux.varInsert(__Vfinal,"out", &(TOP.TopLevelCPU__DOT__ALUOperandMux__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__ALUOperandMux.varInsert(__Vfinal,"sel", &(TOP.TopLevelCPU__DOT__ALUOperandMux__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__ArithmeticLogicUnit.varInsert(__Vfinal,"ALUctrl", &(TOP.TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TopLevelCPU__ArithmeticLogicUnit.varInsert(__Vfinal,"ALUop1", &(TOP.TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__ArithmeticLogicUnit.varInsert(__Vfinal,"ALUop2", &(TOP.TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__ArithmeticLogicUnit.varInsert(__Vfinal,"EQ", &(TOP.TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__ArithmeticLogicUnit.varInsert(__Vfinal,"Result", &(TOP.TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__InstructionMemory.varInsert(__Vfinal,"ADDRESS_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.TopLevelCPU__DOT__InstructionMemory__DOT__ADDRESS_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__InstructionMemory.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.TopLevelCPU__DOT__InstructionMemory__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__InstructionMemory.varInsert(__Vfinal,"addr", &(TOP.TopLevelCPU__DOT__InstructionMemory__DOT__addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TopLevelCPU__InstructionMemory.varInsert(__Vfinal,"clk", &(TOP.TopLevelCPU__DOT__InstructionMemory__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__InstructionMemory.varInsert(__Vfinal,"instr", &(TOP.TopLevelCPU__DOT__InstructionMemory__DOT__instr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__InstructionMemory.varInsert(__Vfinal,"rom_array", &(TOP.TopLevelCPU__DOT__InstructionMemory__DOT__rom_array), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        __Vscope_TopLevelCPU__InstructionMemory__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_TopLevelCPU__PC_Reg.varInsert(__Vfinal,"ImmOp", &(TOP.TopLevelCPU__DOT__PC_Reg__DOT__ImmOp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__PC_Reg.varInsert(__Vfinal,"PC", &(TOP.TopLevelCPU__DOT__PC_Reg__DOT__PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__PC_Reg.varInsert(__Vfinal,"PCsrc", &(TOP.TopLevelCPU__DOT__PC_Reg__DOT__PCsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__PC_Reg.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.TopLevelCPU__DOT__PC_Reg__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__PC_Reg.varInsert(__Vfinal,"clk", &(TOP.TopLevelCPU__DOT__PC_Reg__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__PC_Reg.varInsert(__Vfinal,"rst", &(TOP.TopLevelCPU__DOT__PC_Reg__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"AD1", &(TOP.TopLevelCPU__DOT__RegFile__DOT__AD1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"AD2", &(TOP.TopLevelCPU__DOT__RegFile__DOT__AD2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"AD3", &(TOP.TopLevelCPU__DOT__RegFile__DOT__AD3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"RD1", &(TOP.TopLevelCPU__DOT__RegFile__DOT__RD1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"RD2", &(TOP.TopLevelCPU__DOT__RegFile__DOT__RD2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"WD3", &(TOP.TopLevelCPU__DOT__RegFile__DOT__WD3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"WE3", &(TOP.TopLevelCPU__DOT__RegFile__DOT__WE3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"a0", &(TOP.TopLevelCPU__DOT__RegFile__DOT__a0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"clk", &(TOP.TopLevelCPU__DOT__RegFile__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"registers", &(TOP.TopLevelCPU__DOT__RegFile__DOT__registers), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_TopLevelCPU__RegFile.varInsert(__Vfinal,"rst", &(TOP.TopLevelCPU__DOT__RegFile__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__RegFile__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_TopLevelCPU__RegFile__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_TopLevelCPU__SignExtender.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.TopLevelCPU__DOT__SignExtender__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__SignExtender.varInsert(__Vfinal,"ImmI", &(TOP.TopLevelCPU__DOT__SignExtender__DOT__ImmI), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_TopLevelCPU__SignExtender.varInsert(__Vfinal,"ImmOp", &(TOP.TopLevelCPU__DOT__SignExtender__DOT__ImmOp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TopLevelCPU__SignExtender.varInsert(__Vfinal,"ImmSrc", &(TOP.TopLevelCPU__DOT__SignExtender__DOT__ImmSrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"ALUctrl", &(TOP.TopLevelCPU__DOT__controlunit__DOT__ALUctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"ALUsrc", &(TOP.TopLevelCPU__DOT__controlunit__DOT__ALUsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"EQ", &(TOP.TopLevelCPU__DOT__controlunit__DOT__EQ), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"ImmSrc", &(TOP.TopLevelCPU__DOT__controlunit__DOT__ImmSrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"OP_IMM", const_cast<void*>(static_cast<const void*>(&(TOP.TopLevelCPU__DOT__controlunit__DOT__OP_IMM))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"OP_JAL", const_cast<void*>(static_cast<const void*>(&(TOP.TopLevelCPU__DOT__controlunit__DOT__OP_JAL))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"PCsrc", &(TOP.TopLevelCPU__DOT__controlunit__DOT__PCsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"RegWrite", &(TOP.TopLevelCPU__DOT__controlunit__DOT__RegWrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TopLevelCPU__controlunit.varInsert(__Vfinal,"opcode", &(TOP.TopLevelCPU__DOT__controlunit__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
    }
}
