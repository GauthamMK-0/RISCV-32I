// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_ex_reg.h for the primary calling header

#include "Vid_ex_reg__pch.h"
#include "Vid_ex_reg___024root.h"

VL_ATTR_COLD void Vid_ex_reg___024root___eval_static(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_static\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vid_ex_reg___024root___eval_initial(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_initial\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vid_ex_reg___024root___eval_final(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_final\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vid_ex_reg___024root___eval_settle(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_settle\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_ex_reg___024root___dump_triggers__act(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___dump_triggers__act\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_ex_reg___024root___dump_triggers__nba(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___dump_triggers__nba\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vid_ex_reg___024root___ctor_var_reset(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___ctor_var_reset\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->rs1_data_in = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->imm_in = VL_RAND_RESET_I(32);
    vlSelf->rs1_in = VL_RAND_RESET_I(5);
    vlSelf->rs2_in = VL_RAND_RESET_I(5);
    vlSelf->rd_in = VL_RAND_RESET_I(5);
    vlSelf->alu_ctrl_in = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl_in = VL_RAND_RESET_I(3);
    vlSelf->reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->alu_src_in = VL_RAND_RESET_I(1);
    vlSelf->branch_in = VL_RAND_RESET_I(1);
    vlSelf->jal_in = VL_RAND_RESET_I(1);
    vlSelf->jalr_in = VL_RAND_RESET_I(1);
    vlSelf->rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->imm_out = VL_RAND_RESET_I(32);
    vlSelf->rs1_out = VL_RAND_RESET_I(5);
    vlSelf->rs2_out = VL_RAND_RESET_I(5);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->branch_out = VL_RAND_RESET_I(1);
    vlSelf->jal_out = VL_RAND_RESET_I(1);
    vlSelf->jalr_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
