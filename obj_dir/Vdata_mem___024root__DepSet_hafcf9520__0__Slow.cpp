// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"
#include "Vdata_mem___024root.h"

VL_ATTR_COLD void Vdata_mem___024root___eval_static(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_static\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vdata_mem___024root___eval_initial(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_initial\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdata_mem___024root___eval_final(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_final\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__stl(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdata_mem___024root___eval_phase__stl(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem___024root___eval_settle(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_settle\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdata_mem___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/mem_stage_pip.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdata_mem___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__stl(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___dump_triggers__stl\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vdata_mem___024root___ico_sequent__TOP__0(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem___024root___eval_stl(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_stl\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdata_mem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdata_mem___024root___eval_triggers__stl(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD bool Vdata_mem___024root___eval_phase__stl(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__stl\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdata_mem___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdata_mem___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__ico(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___dump_triggers__ico\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__act(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___dump_triggers__act\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__nba(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___dump_triggers__nba\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vdata_mem___024root___ctor_var_reset(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ctor_var_reset\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->funct3_in = VL_RAND_RESET_I(3);
    vlSelf->rd_in = VL_RAND_RESET_I(5);
    vlSelf->mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__funct3_in = VL_RAND_RESET_I(3);
    vlSelf->mem_stage_pip__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->mem_stage_pip__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->mem_stage_pip__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__addr_lsb = VL_RAND_RESET_I(2);
    vlSelf->mem_stage_pip__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->mem_stage_pip__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memory__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memory__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->mem_stage_pip__DOT__memory__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memory__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memory__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mem_stage_pip__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mem_stage_pip__DOT__byte_mask__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->mem_stage_pip__DOT__byte_mask__DOT__addr_lsb = VL_RAND_RESET_I(2);
    vlSelf->mem_stage_pip__DOT__byte_mask__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->mem_stage_pip__DOT__mem_access__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__mem_access__DOT__addr_lsb = VL_RAND_RESET_I(2);
    vlSelf->mem_stage_pip__DOT__mem_access__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->mem_stage_pip__DOT__mem_access__DOT__mem_out = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__mem_data_in = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->mem_stage_pip__DOT__memwb_register__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
