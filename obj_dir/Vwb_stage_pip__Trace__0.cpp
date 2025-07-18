// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwb_stage_pip__Syms.h"


void Vwb_stage_pip___024root__trace_chg_0_sub_0(Vwb_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vwb_stage_pip___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_chg_0\n"); );
    // Init
    Vwb_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_stage_pip___024root*>(voidSelf);
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vwb_stage_pip___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vwb_stage_pip___024root__trace_chg_0_sub_0(Vwb_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_chg_0_sub_0\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgIData(oldp+2,(vlSelfRef.pc_in),32);
    bufp->chgIData(oldp+3,(vlSelfRef.alu_result_in),32);
    bufp->chgIData(oldp+4,(vlSelfRef.mem_data_in),32);
    bufp->chgCData(oldp+5,(vlSelfRef.rd_in),5);
    bufp->chgCData(oldp+6,(vlSelfRef.wb_sel),2);
    bufp->chgBit(oldp+7,(vlSelfRef.reg_write_in));
    bufp->chgBit(oldp+8,(vlSelfRef.mem_to_reg_in));
    bufp->chgIData(oldp+9,(vlSelfRef.reg_data_out),32);
    bufp->chgCData(oldp+10,(vlSelfRef.rd_out),5);
    bufp->chgBit(oldp+11,(vlSelfRef.reg_write_out));
    bufp->chgBit(oldp+12,(vlSelfRef.wb_stage_pip__DOT__clk));
    bufp->chgBit(oldp+13,(vlSelfRef.wb_stage_pip__DOT__rst));
    bufp->chgIData(oldp+14,(vlSelfRef.wb_stage_pip__DOT__pc_in),32);
    bufp->chgIData(oldp+15,(vlSelfRef.wb_stage_pip__DOT__alu_result_in),32);
    bufp->chgIData(oldp+16,(vlSelfRef.wb_stage_pip__DOT__mem_data_in),32);
    bufp->chgCData(oldp+17,(vlSelfRef.wb_stage_pip__DOT__rd_in),5);
    bufp->chgCData(oldp+18,(vlSelfRef.wb_stage_pip__DOT__wb_sel),2);
    bufp->chgBit(oldp+19,(vlSelfRef.wb_stage_pip__DOT__reg_write_in));
    bufp->chgBit(oldp+20,(vlSelfRef.wb_stage_pip__DOT__mem_to_reg_in));
    bufp->chgIData(oldp+21,(vlSelfRef.wb_stage_pip__DOT__reg_data_out),32);
    bufp->chgCData(oldp+22,(vlSelfRef.wb_stage_pip__DOT__rd_out),5);
    bufp->chgBit(oldp+23,(vlSelfRef.wb_stage_pip__DOT__reg_write_out));
    bufp->chgIData(oldp+24,(vlSelfRef.wb_stage_pip__DOT__pc_4),32);
}

void Vwb_stage_pip___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root__trace_cleanup\n"); );
    // Init
    Vwb_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwb_stage_pip___024root*>(voidSelf);
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
