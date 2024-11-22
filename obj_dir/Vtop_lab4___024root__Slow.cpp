// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_lab4.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_lab4__Syms.h"
#include "Vtop_lab4___024root.h"

// Parameter definitions for Vtop_lab4___024root
constexpr CData/*6:0*/ Vtop_lab4___024root::TopLevelCPU__DOT__controlunit__DOT__OP_IMM;
constexpr CData/*6:0*/ Vtop_lab4___024root::TopLevelCPU__DOT__controlunit__DOT__OP_JAL;
constexpr IData/*31:0*/ Vtop_lab4___024root::TopLevelCPU__DOT__PC_Reg__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_lab4___024root::TopLevelCPU__DOT__InstructionMemory__DOT__ADDRESS_WIDTH;
constexpr IData/*31:0*/ Vtop_lab4___024root::TopLevelCPU__DOT__InstructionMemory__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_lab4___024root::TopLevelCPU__DOT__SignExtender__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_lab4___024root::TopLevelCPU__DOT__ALUOperandMux__DOT__DATA_WIDTH;


void Vtop_lab4___024root___ctor_var_reset(Vtop_lab4___024root* vlSelf);

Vtop_lab4___024root::Vtop_lab4___024root(Vtop_lab4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_lab4___024root___ctor_var_reset(this);
}

void Vtop_lab4___024root___configure_coverage(Vtop_lab4___024root* vlSelf, bool first);

void Vtop_lab4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    Vtop_lab4___024root___configure_coverage(this, first);
}

Vtop_lab4___024root::~Vtop_lab4___024root() {
}

// Coverage
void Vtop_lab4___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
