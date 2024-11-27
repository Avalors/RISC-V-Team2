// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024ROOT_H_
#define VERILATED_VDUT___024ROOT_H_  // guard

#include "verilated.h"


class Vdut__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdut___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__EQ;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*0:0*/ top__DOT__ALUsrc;
    CData/*0:0*/ top__DOT__PCsrc;
    CData/*1:0*/ top__DOT__ImmSrc;
    CData/*2:0*/ top__DOT__ALUctrl;
    CData/*4:0*/ top__DOT____Vcellinp__RegFile__AD3;
    CData/*4:0*/ top__DOT____Vcellinp__RegFile__AD2;
    CData/*4:0*/ top__DOT____Vcellinp__RegFile__AD1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__ALUop1;
    IData/*31:0*/ top__DOT__ALUop2;
    IData/*31:0*/ top__DOT__ALUout;
    IData/*31:0*/ top__DOT__RD1;
    IData/*31:0*/ top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__RegFile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top__DOT__RegFile__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__InstructionMemory__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__RegFile__DOT__registers;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut___024root(Vdut__Syms* symsp, const char* v__name);
    ~Vdut___024root();
    VL_UNCOPYABLE(Vdut___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
