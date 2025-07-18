// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vif_stage_pip__Syms.h"


void Vif_stage_pip___024root__trace_chg_0_sub_0(Vif_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vif_stage_pip___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_chg_0\n"); );
    // Init
    Vif_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vif_stage_pip___024root*>(voidSelf);
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vif_stage_pip___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vif_stage_pip___024root__trace_chg_0_sub_0(Vif_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_chg_0_sub_0\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.pc_write));
    bufp->chgBit(oldp+3,(vlSelfRef.if_id_write));
    bufp->chgBit(oldp+4,(vlSelfRef.if_id_flush));
    bufp->chgBit(oldp+5,(vlSelfRef.jump));
    bufp->chgBit(oldp+6,(vlSelfRef.branch_taken));
    bufp->chgIData(oldp+7,(vlSelfRef.branch_target),32);
    bufp->chgIData(oldp+8,(vlSelfRef.jump_target),32);
    bufp->chgIData(oldp+9,(vlSelfRef.instr_out),32);
    bufp->chgIData(oldp+10,(vlSelfRef.pc_out),32);
    bufp->chgBit(oldp+11,(vlSelfRef.if_stage_pip__DOT__clk));
    bufp->chgBit(oldp+12,(vlSelfRef.if_stage_pip__DOT__rst));
    bufp->chgBit(oldp+13,(vlSelfRef.if_stage_pip__DOT__pc_write));
    bufp->chgBit(oldp+14,(vlSelfRef.if_stage_pip__DOT__if_id_write));
    bufp->chgBit(oldp+15,(vlSelfRef.if_stage_pip__DOT__if_id_flush));
    bufp->chgBit(oldp+16,(vlSelfRef.if_stage_pip__DOT__jump));
    bufp->chgBit(oldp+17,(vlSelfRef.if_stage_pip__DOT__branch_taken));
    bufp->chgIData(oldp+18,(vlSelfRef.if_stage_pip__DOT__branch_target),32);
    bufp->chgIData(oldp+19,(vlSelfRef.if_stage_pip__DOT__jump_target),32);
    bufp->chgIData(oldp+20,(vlSelfRef.if_stage_pip__DOT__instr_out),32);
    bufp->chgIData(oldp+21,(vlSelfRef.if_stage_pip__DOT__pc_out),32);
    bufp->chgIData(oldp+22,(vlSelfRef.if_stage_pip__DOT__current_pc),32);
    bufp->chgIData(oldp+23,(vlSelfRef.if_stage_pip__DOT__next_pc),32);
    bufp->chgIData(oldp+24,(vlSelfRef.if_stage_pip__DOT__instr),32);
    bufp->chgBit(oldp+25,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__clk));
    bufp->chgBit(oldp+26,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__rst));
    bufp->chgBit(oldp+27,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__if_id_write));
    bufp->chgBit(oldp+28,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__if_id_flush));
    bufp->chgIData(oldp+29,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_in),32);
    bufp->chgIData(oldp+30,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_in),32);
    bufp->chgIData(oldp+31,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out),32);
    bufp->chgIData(oldp+32,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out),32);
    bufp->chgIData(oldp+33,(vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__addr),32);
    bufp->chgIData(oldp+34,(vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__instr),32);
    bufp->chgIData(oldp+35,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__current_pc),32);
    bufp->chgIData(oldp+36,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__branch_target),32);
    bufp->chgIData(oldp+37,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__jump_target),32);
    bufp->chgBit(oldp+38,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__jump));
    bufp->chgBit(oldp+39,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__branch_taken));
    bufp->chgIData(oldp+40,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__next_pc),32);
    bufp->chgIData(oldp+41,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__pc_4),32);
    bufp->chgBit(oldp+42,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__clk));
    bufp->chgBit(oldp+43,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__rst));
    bufp->chgBit(oldp+44,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__pc_write));
    bufp->chgIData(oldp+45,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__next_pc),32);
    bufp->chgIData(oldp+46,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc),32);
}

void Vif_stage_pip___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_cleanup\n"); );
    // Init
    Vif_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vif_stage_pip___024root*>(voidSelf);
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
