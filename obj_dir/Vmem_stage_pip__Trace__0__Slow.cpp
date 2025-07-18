// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmem_stage_pip__Syms.h"


VL_ATTR_COLD void Vmem_stage_pip___024root__trace_init_sub__TOP__0(Vmem_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_init_sub__TOP__0\n"); );
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"funct3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"wb_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+9,0,"mem_read_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"mem_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"mem_to_reg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"alu_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"wb_sel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+18,0,"reg_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mem_to_reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_stage_pip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"funct3_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"wb_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+28,0,"mem_read_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"mem_to_reg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"alu_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+36,0,"wb_sel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+37,0,"reg_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"mem_to_reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"addr_lsb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+40,0,"byte_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("byte_mask", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"addr_lsb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"byte_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_access", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"addr_lsb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"mem_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+50,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"byte_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+54,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memwb_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"mem_to_reg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"wb_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+66,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"alu_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+70,0,"wb_sel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"reg_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"mem_to_reg_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_init_top(Vmem_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_init_top\n"); );
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmem_stage_pip___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmem_stage_pip___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmem_stage_pip___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmem_stage_pip___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_register(Vmem_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_register\n"); );
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmem_stage_pip___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmem_stage_pip___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmem_stage_pip___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmem_stage_pip___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_const_0\n"); );
    // Init
    Vmem_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem_stage_pip___024root*>(voidSelf);
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_full_0_sub_0(Vmem_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_full_0\n"); );
    // Init
    Vmem_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmem_stage_pip___024root*>(voidSelf);
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmem_stage_pip___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmem_stage_pip___024root__trace_full_0_sub_0(Vmem_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_stage_pip___024root__trace_full_0_sub_0\n"); );
    Vmem_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst));
    bufp->fullIData(oldp+3,(vlSelfRef.pc_in),32);
    bufp->fullIData(oldp+4,(vlSelfRef.alu_result_in),32);
    bufp->fullIData(oldp+5,(vlSelfRef.rs2_data_in),32);
    bufp->fullCData(oldp+6,(vlSelfRef.funct3_in),3);
    bufp->fullCData(oldp+7,(vlSelfRef.rd_in),5);
    bufp->fullCData(oldp+8,(vlSelfRef.wb_sel_in),2);
    bufp->fullBit(oldp+9,(vlSelfRef.mem_read_in));
    bufp->fullBit(oldp+10,(vlSelfRef.mem_write_in));
    bufp->fullBit(oldp+11,(vlSelfRef.reg_write_in));
    bufp->fullBit(oldp+12,(vlSelfRef.mem_to_reg_in));
    bufp->fullIData(oldp+13,(vlSelfRef.pc_out),32);
    bufp->fullIData(oldp+14,(vlSelfRef.alu_result_out),32);
    bufp->fullIData(oldp+15,(vlSelfRef.mem_data_out),32);
    bufp->fullCData(oldp+16,(vlSelfRef.rd_out),5);
    bufp->fullCData(oldp+17,(vlSelfRef.wb_sel_out),2);
    bufp->fullBit(oldp+18,(vlSelfRef.reg_write_out));
    bufp->fullBit(oldp+19,(vlSelfRef.mem_to_reg_out));
    bufp->fullBit(oldp+20,(vlSelfRef.mem_stage_pip__DOT__clk));
    bufp->fullBit(oldp+21,(vlSelfRef.mem_stage_pip__DOT__rst));
    bufp->fullIData(oldp+22,(vlSelfRef.mem_stage_pip__DOT__pc_in),32);
    bufp->fullIData(oldp+23,(vlSelfRef.mem_stage_pip__DOT__alu_result_in),32);
    bufp->fullIData(oldp+24,(vlSelfRef.mem_stage_pip__DOT__rs2_data_in),32);
    bufp->fullCData(oldp+25,(vlSelfRef.mem_stage_pip__DOT__funct3_in),3);
    bufp->fullCData(oldp+26,(vlSelfRef.mem_stage_pip__DOT__rd_in),5);
    bufp->fullCData(oldp+27,(vlSelfRef.mem_stage_pip__DOT__wb_sel_in),2);
    bufp->fullBit(oldp+28,(vlSelfRef.mem_stage_pip__DOT__mem_read_in));
    bufp->fullBit(oldp+29,(vlSelfRef.mem_stage_pip__DOT__mem_write_in));
    bufp->fullBit(oldp+30,(vlSelfRef.mem_stage_pip__DOT__reg_write_in));
    bufp->fullBit(oldp+31,(vlSelfRef.mem_stage_pip__DOT__mem_to_reg_in));
    bufp->fullIData(oldp+32,(vlSelfRef.mem_stage_pip__DOT__pc_out),32);
    bufp->fullIData(oldp+33,(vlSelfRef.mem_stage_pip__DOT__alu_result_out),32);
    bufp->fullIData(oldp+34,(vlSelfRef.mem_stage_pip__DOT__mem_data_out),32);
    bufp->fullCData(oldp+35,(vlSelfRef.mem_stage_pip__DOT__rd_out),5);
    bufp->fullCData(oldp+36,(vlSelfRef.mem_stage_pip__DOT__wb_sel_out),2);
    bufp->fullBit(oldp+37,(vlSelfRef.mem_stage_pip__DOT__reg_write_out));
    bufp->fullBit(oldp+38,(vlSelfRef.mem_stage_pip__DOT__mem_to_reg_out));
    bufp->fullCData(oldp+39,(vlSelfRef.mem_stage_pip__DOT__addr_lsb),2);
    bufp->fullCData(oldp+40,(vlSelfRef.mem_stage_pip__DOT__byte_enable),4);
    bufp->fullIData(oldp+41,(vlSelfRef.mem_stage_pip__DOT__mem_data),32);
    bufp->fullIData(oldp+42,(vlSelfRef.mem_stage_pip__DOT__read_data),32);
    bufp->fullCData(oldp+43,(vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__funct3),3);
    bufp->fullCData(oldp+44,(vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__addr_lsb),2);
    bufp->fullCData(oldp+45,(vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__byte_enable),4);
    bufp->fullIData(oldp+46,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_data),32);
    bufp->fullCData(oldp+47,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__addr_lsb),2);
    bufp->fullCData(oldp+48,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__funct3),3);
    bufp->fullIData(oldp+49,(vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_out),32);
    bufp->fullBit(oldp+50,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__clk));
    bufp->fullIData(oldp+51,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__addr),32);
    bufp->fullIData(oldp+52,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__write_data),32);
    bufp->fullCData(oldp+53,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__byte_enable),4);
    bufp->fullBit(oldp+54,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem_write));
    bufp->fullBit(oldp+55,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem_read));
    bufp->fullIData(oldp+56,(vlSelfRef.mem_stage_pip__DOT__memory__DOT__read_data),32);
    bufp->fullBit(oldp+57,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__clk));
    bufp->fullBit(oldp+58,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rst));
    bufp->fullBit(oldp+59,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_in));
    bufp->fullBit(oldp+60,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_in));
    bufp->fullCData(oldp+61,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__wb_sel_in),2);
    bufp->fullIData(oldp+62,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__pc_in),32);
    bufp->fullIData(oldp+63,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_in),32);
    bufp->fullIData(oldp+64,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_in),32);
    bufp->fullCData(oldp+65,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_in),5);
    bufp->fullIData(oldp+66,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__pc_out),32);
    bufp->fullIData(oldp+67,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out),32);
    bufp->fullIData(oldp+68,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out),32);
    bufp->fullCData(oldp+69,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out),5);
    bufp->fullCData(oldp+70,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__wb_sel_out),2);
    bufp->fullBit(oldp+71,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out));
    bufp->fullBit(oldp+72,(vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out));
}
