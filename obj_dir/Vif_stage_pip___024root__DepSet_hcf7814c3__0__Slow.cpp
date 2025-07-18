// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vif_stage_pip.h for the primary calling header

#include "Vif_stage_pip__pch.h"
#include "Vif_stage_pip___024root.h"

VL_ATTR_COLD void Vif_stage_pip___024root___eval_static(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_static\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vif_stage_pip___024root___eval_initial__TOP(Vif_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vif_stage_pip___024root___eval_initial(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_initial\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vif_stage_pip___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vif_stage_pip___024root___eval_initial__TOP(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_initial__TOP\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0U] = 0x100093U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[1U] = 0x200113U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[2U] = 0x300193U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[3U] = 0x400213U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[4U] = 0x2082b3U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[5U] = 0x40228333U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[6U] = 0x42f3b3U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[7U] = 0x52e433U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[8U] = 0x62c4b3U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[9U] = 0x729433U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0xaU] = 0x82d4b3U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0xbU] = 0x40a2d533U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0xcU] = 0xb2a5b3U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0xdU] = 0xc2b633U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0xeU] = 0x10a693U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0xfU] = 0x10b713U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0x10U] = 0x10c793U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0x11U] = 0x10d813U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0x12U] = 0x10e893U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0x13U] = 0x109613U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0x14U] = 0x10d693U;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory[0x15U] = 0x4010d713U;
}

VL_ATTR_COLD void Vif_stage_pip___024root___eval_final(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_final\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__stl(Vif_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vif_stage_pip___024root___eval_phase__stl(Vif_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vif_stage_pip___024root___eval_settle(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_settle\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vif_stage_pip___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/if_stage_pip.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vif_stage_pip___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__stl(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___dump_triggers__stl\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vif_stage_pip___024root___ico_sequent__TOP__0(Vif_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vif_stage_pip___024root___eval_stl(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_stl\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vif_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vif_stage_pip___024root___eval_triggers__stl(Vif_stage_pip___024root* vlSelf);

VL_ATTR_COLD bool Vif_stage_pip___024root___eval_phase__stl(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_phase__stl\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vif_stage_pip___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vif_stage_pip___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__ico(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___dump_triggers__ico\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__act(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___dump_triggers__act\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__nba(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___dump_triggers__nba\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vif_stage_pip___024root___ctor_var_reset(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___ctor_var_reset\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc_write = VL_RAND_RESET_I(1);
    vlSelf->if_id_write = VL_RAND_RESET_I(1);
    vlSelf->if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->jump = VL_RAND_RESET_I(1);
    vlSelf->branch_taken = VL_RAND_RESET_I(1);
    vlSelf->branch_target = VL_RAND_RESET_I(32);
    vlSelf->jump_target = VL_RAND_RESET_I(32);
    vlSelf->instr_out = VL_RAND_RESET_I(32);
    vlSelf->pc_out = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__if_id_write = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__instr_out = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__instruction_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__instruction_memory__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->if_stage_pip__DOT__instruction_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->if_stage_pip__DOT__prog_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__prog_counter__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__prog_counter__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__prog_counter__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__prog_counter__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__pc_logic_unit__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__pc_logic_unit__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__pc_logic_unit__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__pc_logic_unit__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__pc_logic_unit__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__pc_logic_unit__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__pc_logic_unit__DOT__pc_4 = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__if_id_write = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__instr_in = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__instr_out = VL_RAND_RESET_I(32);
    vlSelf->if_stage_pip__DOT__ifid_register__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
