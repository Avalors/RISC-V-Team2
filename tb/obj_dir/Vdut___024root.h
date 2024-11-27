// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vdut__Syms;

class Vdut___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ top__DOT__PC;
    CData/*0:0*/ top__DOT__EQ;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*0:0*/ top__DOT__ALUsrc;
    CData/*0:0*/ top__DOT__PCsrc;
    CData/*1:0*/ top__DOT__ImmSrc;
    CData/*2:0*/ top__DOT__ALUctrl;
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__rst;
    CData/*4:0*/ top__DOT____Vtogcov__PC;
    CData/*0:0*/ top__DOT____Vtogcov__EQ;
    CData/*0:0*/ top__DOT____Vtogcov__RegWrite;
    CData/*0:0*/ top__DOT____Vtogcov__ALUsrc;
    CData/*0:0*/ top__DOT____Vtogcov__PCsrc;
    CData/*1:0*/ top__DOT____Vtogcov__ImmSrc;
    CData/*2:0*/ top__DOT____Vtogcov__ALUctrl;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__ALUop1;
    IData/*31:0*/ top__DOT__ALUop2;
    IData/*31:0*/ top__DOT__ALUout;
    IData/*31:0*/ top__DOT__RD2;
    IData/*31:0*/ top__DOT____Vtogcov__a0;
    IData/*31:0*/ top__DOT____Vtogcov__instr;
    IData/*31:0*/ top__DOT____Vtogcov__ImmOp;
    IData/*31:0*/ top__DOT____Vtogcov__ALUop1;
    IData/*31:0*/ top__DOT____Vtogcov__ALUop2;
    IData/*31:0*/ top__DOT____Vtogcov__ALUout;
    IData/*31:0*/ top__DOT____Vtogcov__RD2;
    IData/*31:0*/ top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__RegFile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__RegFile__DOT__unnamedblk2__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__InstructionMemory__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__RegFile__DOT__registers;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut___024root(Vdut__Syms* symsp, const char* name);
    ~Vdut___024root();
    VL_UNCOPYABLE(Vdut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
