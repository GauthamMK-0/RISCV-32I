// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwb_stage_pip__Syms.h"


VL_ATTR_COLD void Vwb_stage_pip___024root__trace_init_sub__TOP__0(Vwb_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_init_sub__TOP__0\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"mem_to_reg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"reg_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"reg_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wb_stage_pip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"mem_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"rd_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"wb_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"mem_to_reg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reg_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"reg_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_init_top(Vwb_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_init_top\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vwb_stage_pip___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vwb_stage_pip___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vwb_stage_pip___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vwb_stage_pip___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_register(Vwb_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_register\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vwb_stage_pip___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vwb_stage_pip___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vwb_stage_pip___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vwb_stage_pip___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_const_0\n"); );
    // Init
    Vwb_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_stage_pip___024root*>(voidSelf);
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_full_0_sub_0(Vwb_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_full_0\n"); );
    // Init
    Vwb_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_stage_pip___024root*>(voidSelf);
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vwb_stage_pip___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vwb_stage_pip___024root__trace_full_0_sub_0(Vwb_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_full_0_sub_0\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst));
    bufp->fullIData(oldp+3,(vlSelfRef.pc_in),32);
    bufp->fullIData(oldp+4,(vlSelfRef.alu_result_in),32);
    bufp->fullIData(oldp+5,(vlSelfRef.mem_data_in),32);
    bufp->fullCData(oldp+6,(vlSelfRef.rd_in),5);
    bufp->fullCData(oldp+7,(vlSelfRef.wb_sel),2);
    bufp->fullBit(oldp+8,(vlSelfRef.reg_write_in));
    bufp->fullBit(oldp+9,(vlSelfRef.mem_to_reg_in));
    bufp->fullIData(oldp+10,(vlSelfRef.reg_data_out),32);
    bufp->fullCData(oldp+11,(vlSelfRef.rd_out),5);
    bufp->fullBit(oldp+12,(vlSelfRef.reg_write_out));
    bufp->fullBit(oldp+13,(vlSelfRef.wb_stage_pip__DOT__clk));
    bufp->fullBit(oldp+14,(vlSelfRef.wb_stage_pip__DOT__rst));
    bufp->fullIData(oldp+15,(vlSelfRef.wb_stage_pip__DOT__pc_in),32);
    bufp->fullIData(oldp+16,(vlSelfRef.wb_stage_pip__DOT__alu_result_in),32);
    bufp->fullIData(oldp+17,(vlSelfRef.wb_stage_pip__DOT__mem_data_in),32);
    bufp->fullCData(oldp+18,(vlSelfRef.wb_stage_pip__DOT__rd_in),5);
    bufp->fullCData(oldp+19,(vlSelfRef.wb_stage_pip__DOT__wb_sel),2);
    bufp->fullBit(oldp+20,(vlSelfRef.wb_stage_pip__DOT__reg_write_in));
    bufp->fullBit(oldp+21,(vlSelfRef.wb_stage_pip__DOT__mem_to_reg_in));
    bufp->fullIData(oldp+22,(vlSelfRef.wb_stage_pip__DOT__reg_data_out),32);
    bufp->fullCData(oldp+23,(vlSelfRef.wb_stage_pip__DOT__rd_out),5);
    bufp->fullBit(oldp+24,(vlSelfRef.wb_stage_pip__DOT__reg_write_out));
    bufp->fullIData(oldp+25,(vlSelfRef.wb_stage_pip__DOT__pc_4),32);
}
