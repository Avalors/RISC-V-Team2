// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Valu__Syms.h"
#include "Valu.h"
#include "Valu___024root.h"

// FUNCTIONS
Valu__Syms::~Valu__Syms()
{
}

Valu__Syms::Valu__Syms(VerilatedContext* contextp, const char* namep, Valu* modelp)
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
    __Vscope_alu.configure(this, name(), "alu", "alu", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"ALUctrl", &(TOP.ALUctrl), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"ALUop1", &(TOP.ALUop1), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"ALUop2", &(TOP.ALUop2), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"EQ", &(TOP.EQ), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"Result", &(TOP.Result), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_alu.varInsert(__Vfinal,"ALUctrl", &(TOP.alu__DOT__ALUctrl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_alu.varInsert(__Vfinal,"ALUop1", &(TOP.alu__DOT__ALUop1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_alu.varInsert(__Vfinal,"ALUop2", &(TOP.alu__DOT__ALUop2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_alu.varInsert(__Vfinal,"EQ", &(TOP.alu__DOT__EQ), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_alu.varInsert(__Vfinal,"Result", &(TOP.alu__DOT__Result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
