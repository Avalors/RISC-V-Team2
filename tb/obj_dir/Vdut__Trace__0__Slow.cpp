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
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBus(c+89,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBus(c+89,"a0", false,-1, 31,0);
    tracep->declBus(c+35,"PC", false,-1, 4,0);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBus(c+37,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+38,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+39,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+40,"ALUout", false,-1, 31,0);
    tracep->declBit(c+41,"EQ", false,-1);
    tracep->declBus(c+42,"RD2", false,-1, 31,0);
    tracep->declBus(c+40,"WD3", false,-1, 31,0);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBit(c+44,"ALUsrc", false,-1);
    tracep->declBit(c+45,"PCsrc", false,-1);
    tracep->declBus(c+46,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+47,"ALUctrl", false,-1, 2,0);
    tracep->pushNamePrefix("ALUOperandMux ");
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"in0", false,-1, 31,0);
    tracep->declBus(c+37,"in1", false,-1, 31,0);
    tracep->declBit(c+44,"sel", false,-1);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ArithmeticLogicUnit ");
    tracep->declBus(c+38,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+39,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+47,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+40,"Result", false,-1, 31,0);
    tracep->declBit(c+41,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+91,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"addr", false,-1, 4,0);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+33,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+91,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBit(c+45,"PCsrc", false,-1);
    tracep->declBus(c+37,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+35,"PC", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBit(c+43,"WE3", false,-1);
    tracep->declBus(c+48,"AD1", false,-1, 4,0);
    tracep->declBus(c+49,"AD2", false,-1, 4,0);
    tracep->declBus(c+50,"AD3", false,-1, 4,0);
    tracep->declBus(c+40,"WD3", false,-1, 31,0);
    tracep->declBus(c+38,"RD1", false,-1, 31,0);
    tracep->declBus(c+42,"RD2", false,-1, 31,0);
    tracep->declBus(c+89,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+51+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+34,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+83,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SignExtender ");
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBus(c+46,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+37,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBit(c+41,"EQ", false,-1);
    tracep->declBus(c+47,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+44,"ALUsrc", false,-1);
    tracep->declBus(c+46,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+45,"PCsrc", false,-1);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBus(c+84,"op", false,-1, 6,0);
    tracep->declBus(c+85,"funct3", false,-1, 2,0);
    tracep->declBus(c+86,"funct7", false,-1, 6,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__InstructionMemory__DOT__rom_array[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__RegFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__PC),5);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__instr),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ALUop1),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ALUop2),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ALUout),32);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__EQ));
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__RD2),32);
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__RegWrite));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__ALUsrc));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__PCsrc));
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__ImmSrc),2);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__ALUctrl),3);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__RegFile__DOT__registers[0]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__RegFile__DOT__registers[1]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__RegFile__DOT__registers[2]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__RegFile__DOT__registers[3]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__RegFile__DOT__registers[4]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__RegFile__DOT__registers[5]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__RegFile__DOT__registers[6]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__RegFile__DOT__registers[7]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__RegFile__DOT__registers[8]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__RegFile__DOT__registers[9]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__RegFile__DOT__registers[10]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__RegFile__DOT__registers[11]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__RegFile__DOT__registers[12]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__RegFile__DOT__registers[13]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__RegFile__DOT__registers[14]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__RegFile__DOT__registers[15]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__RegFile__DOT__registers[16]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__RegFile__DOT__registers[17]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__RegFile__DOT__registers[18]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__RegFile__DOT__registers[19]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__RegFile__DOT__registers[20]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__RegFile__DOT__registers[21]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__RegFile__DOT__registers[22]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__RegFile__DOT__registers[23]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__RegFile__DOT__registers[24]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__RegFile__DOT__registers[25]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__RegFile__DOT__registers[26]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__RegFile__DOT__registers[27]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__RegFile__DOT__registers[28]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__RegFile__DOT__registers[29]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__RegFile__DOT__registers[30]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__RegFile__DOT__registers[31]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__RegFile__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+84,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullCData(oldp+85,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+86,((vlSelf->top__DOT__instr 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+87,(vlSelf->clk));
    bufp->fullBit(oldp+88,(vlSelf->rst));
    bufp->fullIData(oldp+89,(vlSelf->a0),32);
    bufp->fullIData(oldp+90,(0x20U),32);
    bufp->fullIData(oldp+91,(5U),32);
}
