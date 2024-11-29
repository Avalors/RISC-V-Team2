// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+65,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBus(c+65,"a0", false,-1, 31,0);
    tracep->declBus(c+11,"PC", false,-1, 31,0);
    tracep->declBus(c+12,"instr", false,-1, 31,0);
    tracep->declBus(c+13,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+14,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+15,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+16,"ALUout", false,-1, 31,0);
    tracep->declBit(c+17,"EQ", false,-1);
    tracep->declBus(c+18,"RD2", false,-1, 31,0);
    tracep->declBus(c+16,"WD3", false,-1, 31,0);
    tracep->declBit(c+19,"RegWrite", false,-1);
    tracep->declBit(c+20,"ALUsrc", false,-1);
    tracep->declBit(c+21,"PCsrc", false,-1);
    tracep->declBus(c+22,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+23,"ALUctrl", false,-1, 2,0);
    tracep->pushNamePrefix("ALUOperandMux ");
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"in0", false,-1, 31,0);
    tracep->declBus(c+13,"in1", false,-1, 31,0);
    tracep->declBit(c+20,"sel", false,-1);
    tracep->declBus(c+15,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ArithmeticLogicUnit ");
    tracep->declBus(c+14,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+15,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+23,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+16,"Result", false,-1, 31,0);
    tracep->declBit(c+17,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+66,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"addr", false,-1, 31,0);
    tracep->declBus(c+12,"instr", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1+i*1,"machine_code", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+8,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBit(c+21,"PCsrc", false,-1);
    tracep->declBus(c+13,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+11,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBit(c+63,"clk", false,-1);
    tracep->declBit(c+64,"rst", false,-1);
    tracep->declBit(c+19,"WE3", false,-1);
    tracep->declBus(c+24,"AD1", false,-1, 4,0);
    tracep->declBus(c+25,"AD2", false,-1, 4,0);
    tracep->declBus(c+26,"AD3", false,-1, 4,0);
    tracep->declBus(c+16,"WD3", false,-1, 31,0);
    tracep->declBus(c+14,"RD1", false,-1, 31,0);
    tracep->declBus(c+18,"RD2", false,-1, 31,0);
    tracep->declBus(c+65,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+27+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+10,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+59,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SignExtender ");
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"instr", false,-1, 31,0);
    tracep->declBus(c+22,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+13,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"instr", false,-1, 31,0);
    tracep->declBit(c+17,"EQ", false,-1);
    tracep->declBus(c+23,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+20,"ALUsrc", false,-1);
    tracep->declBus(c+22,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+21,"PCsrc", false,-1);
    tracep->declBit(c+19,"RegWrite", false,-1);
    tracep->declBus(c+60,"op", false,-1, 6,0);
    tracep->declBus(c+61,"funct3", false,-1, 2,0);
    tracep->declBus(c+62,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_top\n"); );
    // Body
    Vdut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__InstructionMemory__DOT__machine_code[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__InstructionMemory__DOT__machine_code[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__InstructionMemory__DOT__machine_code[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__InstructionMemory__DOT__machine_code[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__InstructionMemory__DOT__machine_code[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__InstructionMemory__DOT__machine_code[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__InstructionMemory__DOT__machine_code[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__RegFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__instr),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ALUop1),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ALUop2),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ALUout),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__EQ));
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__RD2),32);
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__PCsrc));
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__ImmSrc),2);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__ALUctrl),3);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+26,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__RegFile__DOT__registers[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__RegFile__DOT__registers[1]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__RegFile__DOT__registers[2]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__RegFile__DOT__registers[3]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__RegFile__DOT__registers[4]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__RegFile__DOT__registers[5]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__RegFile__DOT__registers[6]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__RegFile__DOT__registers[7]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__RegFile__DOT__registers[8]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__RegFile__DOT__registers[9]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__RegFile__DOT__registers[10]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__RegFile__DOT__registers[11]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__RegFile__DOT__registers[12]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__RegFile__DOT__registers[13]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__RegFile__DOT__registers[14]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__RegFile__DOT__registers[15]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__RegFile__DOT__registers[16]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__RegFile__DOT__registers[17]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__RegFile__DOT__registers[18]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__RegFile__DOT__registers[19]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__RegFile__DOT__registers[20]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__RegFile__DOT__registers[21]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__RegFile__DOT__registers[22]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__RegFile__DOT__registers[23]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__RegFile__DOT__registers[24]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__RegFile__DOT__registers[25]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__RegFile__DOT__registers[26]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__RegFile__DOT__registers[27]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__RegFile__DOT__registers[28]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__RegFile__DOT__registers[29]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__RegFile__DOT__registers[30]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__RegFile__DOT__registers[31]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+60,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+61,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+62,((vlSelf->top__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+63,(vlSelf->clk));
    bufp->fullBit(oldp+64,(vlSelf->rst));
    bufp->fullIData(oldp+65,(vlSelf->a0),32);
    bufp->fullIData(oldp+66,(0x20U),32);
    bufp->fullIData(oldp+67,(8U),32);
}
