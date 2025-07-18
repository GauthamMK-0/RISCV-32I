// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwb_stage_pip.h for the primary calling header

#include "Vwb_stage_pip__pch.h"
#include "Vwb_stage_pip___024root.h"

VL_ATTR_COLD void Vwb_stage_pip___024root___eval_static(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_static\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vwb_stage_pip___024root___eval_initial(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_initial\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vwb_stage_pip___024root___eval_final(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_final\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__stl(Vwb_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vwb_stage_pip___024root___eval_phase__stl(Vwb_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vwb_stage_pip___024root___eval_settle(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_settle\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vwb_stage_pip___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/wb_stage_pip.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vwb_stage_pip___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__stl(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___dump_triggers__stl\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vwb_stage_pip___024root___ico_sequent__TOP__0(Vwb_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vwb_stage_pip___024root___eval_stl(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_stl\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vwb_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vwb_stage_pip___024root___eval_triggers__stl(Vwb_stage_pip___024root* vlSelf);

VL_ATTR_COLD bool Vwb_stage_pip___024root___eval_phase__stl(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_phase__stl\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vwb_stage_pip___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vwb_stage_pip___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__ico(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___dump_triggers__ico\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__act(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___dump_triggers__act\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__nba(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___dump_triggers__nba\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vwb_stage_pip___024root___ctor_var_reset(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___ctor_var_reset\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc_in = VL_RAND_RESET_I(32);
    vlSelf->alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->mem_data_in = VL_RAND_RESET_I(32);
    vlSelf->rd_in = VL_RAND_RESET_I(5);
    vlSelf->wb_sel = VL_RAND_RESET_I(2);
    vlSelf->reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->reg_data_out = VL_RAND_RESET_I(32);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->wb_stage_pip__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->wb_stage_pip__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->wb_stage_pip__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->wb_stage_pip__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->wb_stage_pip__DOT__mem_data_in = VL_RAND_RESET_I(32);
    vlSelf->wb_stage_pip__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->wb_stage_pip__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->wb_stage_pip__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->wb_stage_pip__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->wb_stage_pip__DOT__reg_data_out = VL_RAND_RESET_I(32);
    vlSelf->wb_stage_pip__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->wb_stage_pip__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->wb_stage_pip__DOT__pc_4 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
