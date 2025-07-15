// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip___024root.h"

VL_ATTR_COLD void Vid_stage_pip___024root___eval_static(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_static\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vid_stage_pip___024root___eval_initial(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_initial\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vid_stage_pip___024root___eval_final(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_final\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__stl(Vid_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vid_stage_pip___024root___eval_phase__stl(Vid_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vid_stage_pip___024root___eval_settle(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_settle\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vid_stage_pip___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/id_stage_pip.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vid_stage_pip___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__stl(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___dump_triggers__stl\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vid_stage_pip___024root___ico_sequent__TOP__0(Vid_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vid_stage_pip___024root___eval_stl(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_stl\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vid_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vid_stage_pip___024root___eval_triggers__stl(Vid_stage_pip___024root* vlSelf);

VL_ATTR_COLD bool Vid_stage_pip___024root___eval_phase__stl(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_phase__stl\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vid_stage_pip___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vid_stage_pip___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__ico(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___dump_triggers__ico\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__act(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___dump_triggers__act\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__nba(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___dump_triggers__nba\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vid_stage_pip___024root___ctor_var_reset(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___ctor_var_reset\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->instr_in = VL_RAND_RESET_I(32);
    vlSelf->pc_in = VL_RAND_RESET_I(32);
    vlSelf->reg_write_wb = VL_RAND_RESET_I(1);
    vlSelf->rd_wb = VL_RAND_RESET_I(5);
    vlSelf->rd_data_wb = VL_RAND_RESET_I(32);
    vlSelf->rs1_hzd = VL_RAND_RESET_I(5);
    vlSelf->rs2_hzd = VL_RAND_RESET_I(5);
    vlSelf->rd_hzd = VL_RAND_RESET_I(5);
    vlSelf->rs1_out = VL_RAND_RESET_I(5);
    vlSelf->rs2_out = VL_RAND_RESET_I(5);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->imm_out = VL_RAND_RESET_I(32);
    vlSelf->alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->jal_out = VL_RAND_RESET_I(1);
    vlSelf->jalr_out = VL_RAND_RESET_I(1);
    vlSelf->branch_out = VL_RAND_RESET_I(1);
    vlSelf->alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__instr_in = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__reg_write_wb = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rd_data_wb = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__rs1_hzd = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rs2_hzd = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rd_hzd = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->id_stage_pip__DOT__branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__jal_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__jalr_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__branch_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->id_stage_pip__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->id_stage_pip__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->id_stage_pip__DOT__branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__decoder__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__decoder__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->id_stage_pip__DOT__decoder__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__decoder__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__decoder__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__decoder__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__decoder__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->id_stage_pip__DOT__decoder__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__control__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->id_stage_pip__DOT__control__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__control__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->id_stage_pip__DOT__control__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->id_stage_pip__DOT__control__DOT__branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__control__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__control__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__control__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__control__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__control__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__control__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__control__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__control__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__out_data_rs1 = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__reg_file__DOT__out_data_rs2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->id_stage_pip__DOT__reg_file__DOT__register_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->id_stage_pip__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__reg_file__DOT____Vlvbound_hf3ed909f__0 = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs1_data_in = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__imm_in = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs2_in = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__alu_ctrl_in = VL_RAND_RESET_I(4);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__branch_ctrl_in = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__alu_src_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__branch_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__jal_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__jalr_in = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__branch_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__jal_out = VL_RAND_RESET_I(1);
    vlSelf->id_stage_pip__DOT__idex_register__DOT__jalr_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
