// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Valu__Syms;

class Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ALUctrl,2,0);
    VL_OUT8(EQ,0,0);
    CData/*2:0*/ alu__DOT__ALUctrl;
    CData/*0:0*/ alu__DOT__EQ;
    CData/*2:0*/ alu__DOT____Vtogcov__ALUctrl;
    CData/*0:0*/ alu__DOT____Vtogcov__EQ;
    VL_IN(ALUop1,31,0);
    VL_IN(ALUop2,31,0);
    VL_OUT(Result,31,0);
    IData/*31:0*/ alu__DOT__ALUop1;
    IData/*31:0*/ alu__DOT__ALUop2;
    IData/*31:0*/ alu__DOT__Result;
    IData/*31:0*/ alu__DOT____Vtogcov__ALUop1;
    IData/*31:0*/ alu__DOT____Vtogcov__ALUop2;
    IData/*31:0*/ alu__DOT____Vtogcov__Result;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
