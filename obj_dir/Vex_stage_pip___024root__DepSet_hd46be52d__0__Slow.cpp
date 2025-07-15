// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vex_stage_pip.h for the primary calling header

#include "Vex_stage_pip__pch.h"
#include "Vex_stage_pip___024root.h"

VL_ATTR_COLD void Vex_stage_pip___024root___eval_static(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_static\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vex_stage_pip___024root___eval_initial(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_initial\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vex_stage_pip___024root___eval_final(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_final\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__stl(Vex_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vex_stage_pip___024root___eval_phase__stl(Vex_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vex_stage_pip___024root___eval_settle(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_settle\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vex_stage_pip___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/ex_stage_pip.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vex_stage_pip___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__stl(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___dump_triggers__stl\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vex_stage_pip___024root___ico_sequent__TOP__0(Vex_stage_pip___024root* vlSelf);

VL_ATTR_COLD void Vex_stage_pip___024root___eval_stl(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_stl\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vex_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vex_stage_pip___024root___eval_triggers__stl(Vex_stage_pip___024root* vlSelf);

VL_ATTR_COLD bool Vex_stage_pip___024root___eval_phase__stl(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_phase__stl\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vex_stage_pip___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vex_stage_pip___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__ico(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___dump_triggers__ico\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__act(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___dump_triggers__act\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__nba(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___dump_triggers__nba\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vex_stage_pip___024root___ctor_var_reset(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___ctor_var_reset\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc_in = VL_RAND_RESET_I(32);
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
    vlSelf->forward_rs1 = VL_RAND_RESET_I(2);
    vlSelf->forward_rs2 = VL_RAND_RESET_I(2);
    vlSelf->forward_data_mem = VL_RAND_RESET_I(32);
    vlSelf->forward_data_wb = VL_RAND_RESET_I(32);
    vlSelf->pc_out = VL_RAND_RESET_I(32);
    vlSelf->alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->rd_out = VL_RAND_RESET_I(5);
    vlSelf->rs1_out = VL_RAND_RESET_I(5);
    vlSelf->rs2_out = VL_RAND_RESET_I(5);
    vlSelf->branch_target_out = VL_RAND_RESET_I(32);
    vlSelf->jump_target_out = VL_RAND_RESET_I(32);
    vlSelf->mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->branch_taken_out = VL_RAND_RESET_I(1);
    vlSelf->jump_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__rs1_data_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__imm_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__rs2_in = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__alu_ctrl_in = VL_RAND_RESET_I(4);
    vlSelf->ex_stage_pip__DOT__branch_ctrl_in = VL_RAND_RESET_I(3);
    vlSelf->ex_stage_pip__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__alu_src_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__branch_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__jal_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__jalr_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__forward_rs1 = VL_RAND_RESET_I(2);
    vlSelf->ex_stage_pip__DOT__forward_rs2 = VL_RAND_RESET_I(2);
    vlSelf->ex_stage_pip__DOT__forward_data_mem = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__forward_data_wb = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__branch_target_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__jump_target_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__branch_taken_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__jump_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_A = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_B = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__zero_flag = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_unit__DOT__op_A = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_unit__DOT__op_B = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_unit__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ex_stage_pip__DOT__alu_unit__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__alu_unit__DOT__zero_flag = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__op_A = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__op_B = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__zero_flag = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__brch_unit__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__jmp_unit__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__jmp_unit__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__jmp_unit__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__jmp_unit__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__jmp_unit__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__jmp_unit__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__jmp_unit__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__branch_target_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__jump_target_in = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rs2_in = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__branch_taken_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__jump_in = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__branch_target_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__jump_target_out = VL_RAND_RESET_I(32);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out = VL_RAND_RESET_I(1);
    vlSelf->ex_stage_pip__DOT__exmem_register__DOT__jump_out = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
