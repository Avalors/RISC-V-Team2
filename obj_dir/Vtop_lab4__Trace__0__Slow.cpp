// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_lab4__Syms.h"


VL_ATTR_COLD void Vtop_lab4___024root__trace_init_sub__TOP__0(Vtop_lab4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("TopLevelCPU ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBus(c+6,"a0", false,-1, 31,0);
    tracep->declBus(c+7,"PC", false,-1, 31,0);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+10,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+11,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+12,"ALUout", false,-1, 31,0);
    tracep->declBit(c+13,"EQ", false,-1);
    tracep->declBus(c+14,"RD1", false,-1, 31,0);
    tracep->declBus(c+15,"RD2", false,-1, 31,0);
    tracep->declBus(c+16,"WD3", false,-1, 31,0);
    tracep->declBit(c+17,"RegWrite", false,-1);
    tracep->declBit(c+18,"ALUsrc", false,-1);
    tracep->declBit(c+19,"PCsrc", false,-1);
    tracep->declBus(c+20,"ImmSrc", false,-1, 1,0);
    tracep->declBus(c+21,"ALUctrl", false,-1, 2,0);
    tracep->pushNamePrefix("ALUOperandMux ");
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"in0", false,-1, 31,0);
    tracep->declBus(c+23,"in1", false,-1, 31,0);
    tracep->declBit(c+24,"sel", false,-1);
    tracep->declBus(c+25,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ArithmeticLogicUnit ");
    tracep->declBus(c+26,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+27,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+28,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+29,"Result", false,-1, 31,0);
    tracep->declBit(c+30,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+127,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBus(c+32,"addr", false,-1, 4,0);
    tracep->declBus(c+33,"instr", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+34+i*1,"rom_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+66,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+68,"rst", false,-1);
    tracep->declBit(c+69,"PCsrc", false,-1);
    tracep->declBus(c+70,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+71,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBit(c+72,"clk", false,-1);
    tracep->declBit(c+73,"rst", false,-1);
    tracep->declBit(c+74,"WE3", false,-1);
    tracep->declBus(c+75,"AD1", false,-1, 4,0);
    tracep->declBus(c+76,"AD2", false,-1, 4,0);
    tracep->declBus(c+77,"AD3", false,-1, 4,0);
    tracep->declBus(c+78,"WD3", false,-1, 31,0);
    tracep->declBus(c+79,"RD1", false,-1, 31,0);
    tracep->declBus(c+80,"RD2", false,-1, 31,0);
    tracep->declBus(c+81,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+82+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+114,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+115,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SignExtender ");
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+116,"ImmI", false,-1, 11,0);
    tracep->declBit(c+117,"ImmSrc", false,-1);
    tracep->declBus(c+118,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+119,"opcode", false,-1, 6,0);
    tracep->declBit(c+120,"EQ", false,-1);
    tracep->declBit(c+121,"RegWrite", false,-1);
    tracep->declBit(c+122,"ALUsrc", false,-1);
    tracep->declBus(c+123,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+124,"PCsrc", false,-1);
    tracep->declBus(c+125,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+128,"OP_IMM", false,-1, 6,0);
    tracep->declBus(c+129,"OP_JAL", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_lab4___024root__trace_init_top(Vtop_lab4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_init_top\n"); );
    // Body
    Vtop_lab4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_lab4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_lab4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_lab4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_lab4___024root__trace_register(Vtop_lab4___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_lab4___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_lab4___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_lab4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_lab4___024root__trace_full_sub_0(Vtop_lab4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_lab4___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_full_top_0\n"); );
    // Init
    Vtop_lab4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_lab4___024root*>(voidSelf);
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_lab4___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_lab4___024root__trace_full_sub_0(Vtop_lab4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_lab4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_lab4___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullIData(oldp+3,(vlSelf->a0),32);
    bufp->fullBit(oldp+4,(vlSelf->TopLevelCPU__DOT__clk));
    bufp->fullBit(oldp+5,(vlSelf->TopLevelCPU__DOT__rst));
    bufp->fullIData(oldp+6,(vlSelf->TopLevelCPU__DOT__a0),32);
    bufp->fullIData(oldp+7,(vlSelf->TopLevelCPU__DOT__PC),32);
    bufp->fullIData(oldp+8,(vlSelf->TopLevelCPU__DOT__instr),32);
    bufp->fullIData(oldp+9,(vlSelf->TopLevelCPU__DOT__ImmOp),32);
    bufp->fullIData(oldp+10,(vlSelf->TopLevelCPU__DOT__ALUop1),32);
    bufp->fullIData(oldp+11,(vlSelf->TopLevelCPU__DOT__ALUop2),32);
    bufp->fullIData(oldp+12,(vlSelf->TopLevelCPU__DOT__ALUout),32);
    bufp->fullBit(oldp+13,(vlSelf->TopLevelCPU__DOT__EQ));
    bufp->fullIData(oldp+14,(vlSelf->TopLevelCPU__DOT__RD1),32);
    bufp->fullIData(oldp+15,(vlSelf->TopLevelCPU__DOT__RD2),32);
    bufp->fullIData(oldp+16,(vlSelf->TopLevelCPU__DOT__WD3),32);
    bufp->fullBit(oldp+17,(vlSelf->TopLevelCPU__DOT__RegWrite));
    bufp->fullBit(oldp+18,(vlSelf->TopLevelCPU__DOT__ALUsrc));
    bufp->fullBit(oldp+19,(vlSelf->TopLevelCPU__DOT__PCsrc));
    bufp->fullCData(oldp+20,(vlSelf->TopLevelCPU__DOT__ImmSrc),2);
    bufp->fullCData(oldp+21,(vlSelf->TopLevelCPU__DOT__ALUctrl),3);
    bufp->fullIData(oldp+22,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in0),32);
    bufp->fullIData(oldp+23,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__in1),32);
    bufp->fullBit(oldp+24,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__sel));
    bufp->fullIData(oldp+25,(vlSelf->TopLevelCPU__DOT__ALUOperandMux__DOT__out),32);
    bufp->fullIData(oldp+26,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop1),32);
    bufp->fullIData(oldp+27,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUop2),32);
    bufp->fullCData(oldp+28,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__ALUctrl),3);
    bufp->fullIData(oldp+29,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__Result),32);
    bufp->fullBit(oldp+30,(vlSelf->TopLevelCPU__DOT__ArithmeticLogicUnit__DOT__EQ));
    bufp->fullBit(oldp+31,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__clk));
    bufp->fullCData(oldp+32,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__addr),5);
    bufp->fullIData(oldp+33,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__instr),32);
    bufp->fullIData(oldp+34,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[0]),32);
    bufp->fullIData(oldp+35,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[1]),32);
    bufp->fullIData(oldp+36,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[2]),32);
    bufp->fullIData(oldp+37,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[3]),32);
    bufp->fullIData(oldp+38,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[4]),32);
    bufp->fullIData(oldp+39,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[5]),32);
    bufp->fullIData(oldp+40,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[6]),32);
    bufp->fullIData(oldp+41,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[7]),32);
    bufp->fullIData(oldp+42,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[8]),32);
    bufp->fullIData(oldp+43,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[9]),32);
    bufp->fullIData(oldp+44,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[10]),32);
    bufp->fullIData(oldp+45,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[11]),32);
    bufp->fullIData(oldp+46,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[12]),32);
    bufp->fullIData(oldp+47,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[13]),32);
    bufp->fullIData(oldp+48,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[14]),32);
    bufp->fullIData(oldp+49,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[15]),32);
    bufp->fullIData(oldp+50,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[16]),32);
    bufp->fullIData(oldp+51,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[17]),32);
    bufp->fullIData(oldp+52,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[18]),32);
    bufp->fullIData(oldp+53,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[19]),32);
    bufp->fullIData(oldp+54,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[20]),32);
    bufp->fullIData(oldp+55,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[21]),32);
    bufp->fullIData(oldp+56,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[22]),32);
    bufp->fullIData(oldp+57,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[23]),32);
    bufp->fullIData(oldp+58,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[24]),32);
    bufp->fullIData(oldp+59,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[25]),32);
    bufp->fullIData(oldp+60,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[26]),32);
    bufp->fullIData(oldp+61,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[27]),32);
    bufp->fullIData(oldp+62,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[28]),32);
    bufp->fullIData(oldp+63,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[29]),32);
    bufp->fullIData(oldp+64,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[30]),32);
    bufp->fullIData(oldp+65,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__rom_array[31]),32);
    bufp->fullIData(oldp+66,(vlSelf->TopLevelCPU__DOT__InstructionMemory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+67,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__clk));
    bufp->fullBit(oldp+68,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__rst));
    bufp->fullBit(oldp+69,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PCsrc));
    bufp->fullIData(oldp+70,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__ImmOp),32);
    bufp->fullIData(oldp+71,(vlSelf->TopLevelCPU__DOT__PC_Reg__DOT__PC),32);
    bufp->fullBit(oldp+72,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__clk));
    bufp->fullBit(oldp+73,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__rst));
    bufp->fullBit(oldp+74,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__WE3));
    bufp->fullCData(oldp+75,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD1),5);
    bufp->fullCData(oldp+76,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD2),5);
    bufp->fullCData(oldp+77,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__AD3),5);
    bufp->fullIData(oldp+78,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__WD3),32);
    bufp->fullIData(oldp+79,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD1),32);
    bufp->fullIData(oldp+80,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__RD2),32);
    bufp->fullIData(oldp+81,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__a0),32);
    bufp->fullIData(oldp+82,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[0]),32);
    bufp->fullIData(oldp+83,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[1]),32);
    bufp->fullIData(oldp+84,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[2]),32);
    bufp->fullIData(oldp+85,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[3]),32);
    bufp->fullIData(oldp+86,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[4]),32);
    bufp->fullIData(oldp+87,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[5]),32);
    bufp->fullIData(oldp+88,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[6]),32);
    bufp->fullIData(oldp+89,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[7]),32);
    bufp->fullIData(oldp+90,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[8]),32);
    bufp->fullIData(oldp+91,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[9]),32);
    bufp->fullIData(oldp+92,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[10]),32);
    bufp->fullIData(oldp+93,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[11]),32);
    bufp->fullIData(oldp+94,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[12]),32);
    bufp->fullIData(oldp+95,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[13]),32);
    bufp->fullIData(oldp+96,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[14]),32);
    bufp->fullIData(oldp+97,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[15]),32);
    bufp->fullIData(oldp+98,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[16]),32);
    bufp->fullIData(oldp+99,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[17]),32);
    bufp->fullIData(oldp+100,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[18]),32);
    bufp->fullIData(oldp+101,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[19]),32);
    bufp->fullIData(oldp+102,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[20]),32);
    bufp->fullIData(oldp+103,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[21]),32);
    bufp->fullIData(oldp+104,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[22]),32);
    bufp->fullIData(oldp+105,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[23]),32);
    bufp->fullIData(oldp+106,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[24]),32);
    bufp->fullIData(oldp+107,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[25]),32);
    bufp->fullIData(oldp+108,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[26]),32);
    bufp->fullIData(oldp+109,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[27]),32);
    bufp->fullIData(oldp+110,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[28]),32);
    bufp->fullIData(oldp+111,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[29]),32);
    bufp->fullIData(oldp+112,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[30]),32);
    bufp->fullIData(oldp+113,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__registers[31]),32);
    bufp->fullIData(oldp+114,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+115,(vlSelf->TopLevelCPU__DOT__RegFile__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+116,(vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmI),12);
    bufp->fullBit(oldp+117,(vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmSrc));
    bufp->fullIData(oldp+118,(vlSelf->TopLevelCPU__DOT__SignExtender__DOT__ImmOp),32);
    bufp->fullCData(oldp+119,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__opcode),7);
    bufp->fullBit(oldp+120,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__EQ));
    bufp->fullBit(oldp+121,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__RegWrite));
    bufp->fullBit(oldp+122,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUsrc));
    bufp->fullCData(oldp+123,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ImmSrc),2);
    bufp->fullBit(oldp+124,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__PCsrc));
    bufp->fullCData(oldp+125,(vlSelf->TopLevelCPU__DOT__controlunit__DOT__ALUctrl),3);
    bufp->fullIData(oldp+126,(0x20U),32);
    bufp->fullIData(oldp+127,(5U),32);
    bufp->fullCData(oldp+128,(0x13U),7);
    bufp->fullCData(oldp+129,(0x6fU),7);
}
