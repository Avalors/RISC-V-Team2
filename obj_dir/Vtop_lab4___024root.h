// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_lab4.h for the primary calling header

#ifndef VERILATED_VTOP_LAB4___024ROOT_H_
#define VERILATED_VTOP_LAB4___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vtop_lab4__Syms;

class Vtop_lab4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ TopLevelCPU__DOT__clk;
        CData/*0:0*/ TopLevelCPU__DOT__rst;
        CData/*0:0*/ TopLevelCPU__DOT__EQ;
        CData/*0:0*/ TopLevelCPU__DOT__RegWrite;
        CData/*0:0*/ TopLevelCPU__DOT__ALUsrc;
        CData/*0:0*/ TopLevelCPU__DOT__PCsrc;
        CData/*1:0*/ TopLevelCPU__DOT__ImmSrc;
        CData/*2:0*/ TopLevelCPU__DOT__ALUctrl;
        CData/*0:0*/ TopLevelCPU__DOT____Vtogcov__clk;
        CData/*0:0*/ TopLevelCPU__DOT____Vtogcov__rst;
        CData/*0:0*/ TopLevelCPU__DOT____Vtogcov__EQ;
        CData/*0:0*/ TopLevelCPU__DOT____Vtogcov__RegWrite;
        CData/*0:0*/ TopLevelCPU__DOT____Vtogcov__ALUsrc;
        CData/*0:0*/ TopLevelCPU__DOT____Vtogcov__PCsrc;
        CData/*1:0*/ TopLevelCPU__DOT____Vtogcov__ImmSrc;
        CData/*2:0*/ TopLevelCPU__DOT____Vtogcov__ALUctrl;
        CData/*0:0*/ TopLevelCPU__DOT__PC_Reg__DOT__clk;
        CData/*0:0*/ TopLevelCPU__DOT__PC_Reg__DOT__rst;
        CData/*0:0*/ TopLevelCPU__DOT__PC_Reg__DOT__PCsrc;
        CData/*0:0*/ TopLevelCPU__DOT__InstructionMemory__DOT__clk;
        CData/*4:0*/ TopLevelCPU__DOT__InstructionMemory__DOT__addr;
        CData/*0:0*/ TopLevelCPU__DOT__SignExtender__DOT__ImmSrc;
        CData/*0:0*/ TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmSrc;
        CData/*0:0*/ TopLevelCPU__DOT__RegFile__DOT__clk;
        CData/*0:0*/ TopLevelCPU__DOT__RegFile__DOT__rst;
        CData/*0:0*/ TopLevelCPU__DOT__RegFile__DOT__WE3;
        CData/*4:0*/ TopLevelCPU__DOT__RegFile__DOT__AD1;
        CData/*4:0*/ TopLevelCPU__DOT__RegFile__DOT__AD2;
        CData/*4:0*/ TopLevelCPU__DOT__RegFile__DOT__AD3;
        CData/*0:0*/ TopLevelCPU__DOT__ALUOperandMux__DOT__sel;
        CData/*2:0*/ TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUctrl;
        CData/*0:0*/ TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ;
        CData/*0:0*/ TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__EQ;
        CData/*6:0*/ TopLevelCPU__DOT__controlunit__DOT__opcode;
        CData/*0:0*/ TopLevelCPU__DOT__controlunit__DOT__EQ;
        CData/*0:0*/ TopLevelCPU__DOT__controlunit__DOT__RegWrite;
        CData/*0:0*/ TopLevelCPU__DOT__controlunit__DOT__ALUsrc;
        CData/*1:0*/ TopLevelCPU__DOT__controlunit__DOT__ImmSrc;
        CData/*0:0*/ TopLevelCPU__DOT__controlunit__DOT__PCsrc;
        CData/*2:0*/ TopLevelCPU__DOT__controlunit__DOT__ALUctrl;
        CData/*0:0*/ TopLevelCPU__DOT__controlunit__DOT____Vtogcov__RegWrite;
        CData/*0:0*/ TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUsrc;
        CData/*1:0*/ TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ImmSrc;
        CData/*0:0*/ TopLevelCPU__DOT__controlunit__DOT____Vtogcov__PCsrc;
        CData/*2:0*/ TopLevelCPU__DOT__controlunit__DOT____Vtogcov__ALUctrl;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*11:0*/ TopLevelCPU__DOT__SignExtender__DOT__ImmI;
        VL_OUT(a0,31,0);
        IData/*31:0*/ TopLevelCPU__DOT__a0;
        IData/*31:0*/ TopLevelCPU__DOT__PC;
        IData/*31:0*/ TopLevelCPU__DOT__instr;
        IData/*31:0*/ TopLevelCPU__DOT__ImmOp;
        IData/*31:0*/ TopLevelCPU__DOT__ALUop1;
        IData/*31:0*/ TopLevelCPU__DOT__ALUop2;
        IData/*31:0*/ TopLevelCPU__DOT__ALUout;
        IData/*31:0*/ TopLevelCPU__DOT__RD1;
        IData/*31:0*/ TopLevelCPU__DOT__RD2;
        IData/*31:0*/ TopLevelCPU__DOT__WD3;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__a0;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__PC;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__instr;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__ImmOp;
    };
    struct {
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__ALUop1;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__ALUop2;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__ALUout;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__RD1;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__RD2;
        IData/*31:0*/ TopLevelCPU__DOT____Vtogcov__WD3;
        IData/*31:0*/ TopLevelCPU__DOT__PC_Reg__DOT__ImmOp;
        IData/*31:0*/ TopLevelCPU__DOT__PC_Reg__DOT__PC;
        IData/*31:0*/ TopLevelCPU__DOT__PC_Reg__DOT____Vtogcov__PC;
        IData/*31:0*/ TopLevelCPU__DOT__InstructionMemory__DOT__instr;
        IData/*31:0*/ TopLevelCPU__DOT__InstructionMemory__DOT____Vtogcov__instr;
        IData/*31:0*/ TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ TopLevelCPU__DOT__SignExtender__DOT__ImmOp;
        IData/*31:0*/ TopLevelCPU__DOT__SignExtender__DOT____Vtogcov__ImmOp;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT__WD3;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT__RD1;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT__RD2;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT__a0;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD1;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT____Vtogcov__RD2;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT____Vtogcov__a0;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ TopLevelCPU__DOT__ALUOperandMux__DOT__in0;
        IData/*31:0*/ TopLevelCPU__DOT__ALUOperandMux__DOT__in1;
        IData/*31:0*/ TopLevelCPU__DOT__ALUOperandMux__DOT__out;
        IData/*31:0*/ TopLevelCPU__DOT__ALUOperandMux__DOT____Vtogcov__out;
        IData/*31:0*/ TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop1;
        IData/*31:0*/ TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop2;
        IData/*31:0*/ TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result;
        IData/*31:0*/ TopLevelCPU__DOT__ArithmeticLogicUnit__DOT____Vtogcov__Result;
        VlUnpacked<IData/*31:0*/, 32> TopLevelCPU__DOT__InstructionMemory__DOT__rom_array;
        VlUnpacked<IData/*31:0*/, 32> TopLevelCPU__DOT__RegFile__DOT__registers;
    };

    // INTERNAL VARIABLES
    Vtop_lab4__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*6:0*/ TopLevelCPU__DOT__controlunit__DOT__OP_IMM = 0x13U;
    static constexpr CData/*6:0*/ TopLevelCPU__DOT__controlunit__DOT__OP_JAL = 0x6fU;
    static constexpr IData/*31:0*/ TopLevelCPU__DOT__PC_Reg__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ TopLevelCPU__DOT__InstructionMemory__DOT__ADDRESS_WIDTH = 5U;
    static constexpr IData/*31:0*/ TopLevelCPU__DOT__InstructionMemory__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ TopLevelCPU__DOT__SignExtender__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ TopLevelCPU__DOT__ALUOperandMux__DOT__DATA_WIDTH = 0x00000020U;

    // CONSTRUCTORS
    Vtop_lab4___024root(Vtop_lab4__Syms* symsp, const char* name);
    ~Vtop_lab4___024root();
    VL_UNCOPYABLE(Vtop_lab4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
