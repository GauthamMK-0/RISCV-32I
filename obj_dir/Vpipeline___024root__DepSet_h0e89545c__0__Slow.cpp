// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline___024root.h"

VL_ATTR_COLD void Vpipeline___024root___eval_static(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_static\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vpipeline___024root___eval_initial__TOP(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_initial(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_initial\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipeline___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root___eval_initial__TOP(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_initial__TOP\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[0U] = 0x93U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[1U] = 0x500113U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[2U] = 0xa00193U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[3U] = 0x218333U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[4U] = 0x6282b3U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[5U] = 0x62a2b3U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[6U] = 0x4000efU;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[7U] = 0x13U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[8U] = 0x108093U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[9U] = 0x310063U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[0xaU] = 0xc00093U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[0xbU] = 0x500193U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[0xcU] = 0x319063U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[0xdU] = 0xd00093U;
    vlSelfRef.pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[0xeU] = 0x100113U;
}

VL_ATTR_COLD void Vpipeline___024root___eval_final(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_final\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__stl(Vpipeline___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpipeline___024root___eval_phase__stl(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_settle(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_settle\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vpipeline___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/pipeline.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpipeline___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__stl(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__stl\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vpipeline___024root___ico_sequent__TOP__0(Vpipeline___024root* vlSelf);

VL_ATTR_COLD void Vpipeline___024root___eval_stl(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_stl\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipeline___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vpipeline___024root___eval_triggers__stl(Vpipeline___024root* vlSelf);

VL_ATTR_COLD bool Vpipeline___024root___eval_phase__stl(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___eval_phase__stl\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpipeline___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpipeline___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__ico(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__ico\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__act(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__act\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vpipeline___024root___dump_triggers__nba(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___dump_triggers__nba\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vpipeline___024root___ctor_var_reset(Vpipeline___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->dbg_if_pc = VL_RAND_RESET_I(32);
    vlSelf->dbg_if_instr = VL_RAND_RESET_I(32);
    vlSelf->dbg_id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->dbg_id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->dbg_id_rd = VL_RAND_RESET_I(5);
    vlSelf->dbg_id_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->dbg_id_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->dbg_ex_alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->dbg_ex_alu_op_a = VL_RAND_RESET_I(32);
    vlSelf->dbg_ex_alu_op_b = VL_RAND_RESET_I(32);
    vlSelf->dbg_ex_alu_result = VL_RAND_RESET_I(32);
    vlSelf->dbg_ex_branch_target = VL_RAND_RESET_I(32);
    vlSelf->dbg_ex_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->dbg_mem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->dbg_mem_data = VL_RAND_RESET_I(32);
    vlSelf->dbg_mem_write_en = VL_RAND_RESET_I(1);
    vlSelf->dbg_mem_read_en = VL_RAND_RESET_I(1);
    vlSelf->dbg_wb_data = VL_RAND_RESET_I(32);
    vlSelf->dbg_wb_rd = VL_RAND_RESET_I(5);
    vlSelf->dbg_wb_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__dbg_if_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_if_instr = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__dbg_id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__dbg_id_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__dbg_id_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_id_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_ex_alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__dbg_ex_alu_op_a = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_ex_alu_op_b = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_ex_alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_ex_branch_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_ex_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__dbg_mem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_mem_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_mem_write_en = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__dbg_mem_read_en = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__dbg_wb_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__dbg_wb_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__dbg_wb_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_id_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_instr = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_imm = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_funct3 = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__id_branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_mem_read = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_mem_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_jal = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_jalr = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_branch = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_alu_src = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_funct3 = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ex_mem_read = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_mem_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__mem_wb_sel = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__wb_reg_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__wb_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__wb_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__rs1_hzd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__rs2_hzd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__rd_hzd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__forward_rs1_ex = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__forward_rs2_ex = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__forward_rs1_id = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__forward_rs2_id = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__if_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__if_id_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__instr_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__instruction_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__instruction_memory__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->pipeline__DOT__if_stage__DOT__instruction_memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline__DOT__if_stage__DOT__prog_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__prog_counter__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__prog_counter__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__prog_counter__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__prog_counter__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__pc_logic_unit__DOT__pc_4 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__if_id_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__instr_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__if_stage__DOT__ifid_register__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__instr_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_write_wb = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rd_data_wb = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__ex_alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__ex_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__forward_rs1 = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_stage__DOT__forward_rs2 = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_stage__DOT__rs1_hzd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rs2_hzd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rd_hzd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__funct3_out = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__id_stage__DOT__branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__wb_sel_out = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__jal_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__jalr_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__branch_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__id_stage__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__id_stage__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__id_stage__DOT__branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__rs1_data_forwarded = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__rs2_data_forwarded = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__id_stage__DOT__decoder__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__control__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__out_data_rs1 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__out_data_rs2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__register_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline__DOT__id_stage__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_in = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_in = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_in = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_in = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__funct3_out = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__wb_sel_out = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__alu_src_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__branch_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__jal_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__id_stage__DOT__idex_register__DOT__jalr_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs1_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__funct3_in = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ex_stage__DOT__imm_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs2_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_ctrl_in = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__ex_stage__DOT__branch_ctrl_in = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ex_stage__DOT__wb_sel_in = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ex_stage__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_src_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__branch_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__jal_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__jalr_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__forward_rs1 = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ex_stage__DOT__forward_rs2 = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ex_stage__DOT__forward_data_mem = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__forward_data_wb = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__funct3_out = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__branch_target_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__jump_target_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__wb_sel_out = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ex_stage__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__branch_taken_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__jump_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_a_debug = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_b_debug = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_ctrl_debug = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_A = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_B = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__zero_flag = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_unit__DOT__op_A = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_unit__DOT__op_B = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_unit__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__alu_unit__DOT__zero_flag = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__op_A = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__op_B = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__zero_flag = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__brch_unit__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__jmp_unit__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_in = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_in = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__funct3_out = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs1_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rs2_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_target_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_target_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__wb_sel_out = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_read_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__branch_taken_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__ex_stage__DOT__exmem_register__DOT__jump_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__rs2_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__funct3_in = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__mem_stage__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__mem_stage__DOT__wb_sel_in = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_read_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__mem_stage__DOT__wb_sel_out = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_stage__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__addr_lsb = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_stage__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->pipeline__DOT__mem_stage__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline__DOT__mem_stage__DOT__byte_mask__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__mem_stage__DOT__byte_mask__DOT__addr_lsb = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_stage__DOT__byte_mask__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_access__DOT__addr_lsb = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_access__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->pipeline__DOT__mem_stage__DOT__mem_access__DOT__mem_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_in = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__pc_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__alu_result_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__wb_sel_out = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__mem_stage__DOT__memwb_register__DOT__mem_to_reg_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__wb_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__wb_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__wb_stage__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__wb_stage__DOT__alu_result_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__wb_stage__DOT__mem_data_in = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__wb_stage__DOT__rd_in = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__wb_stage__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__wb_stage__DOT__reg_write_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__wb_stage__DOT__mem_to_reg_in = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__wb_stage__DOT__reg_data_out = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__wb_stage__DOT__rd_out = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__wb_stage__DOT__reg_write_out = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__wb_stage__DOT__pc_4 = VL_RAND_RESET_I(32);
    vlSelf->pipeline__DOT__hzd__DOT__id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__hzd__DOT__id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__hzd__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__hzd__DOT__ex_mem_read = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__if_id_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__id_ex_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__hzd__DOT__load_hazard = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__fwd__DOT__ex_rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__fwd__DOT__ex_rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__fwd__DOT__id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__fwd__DOT__id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__fwd__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__fwd__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__fwd__DOT__wb_rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline__DOT__fwd__DOT__ex_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__fwd__DOT__mem_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__fwd__DOT__wb_reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline__DOT__fwd__DOT__forward_rs1_ex = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__fwd__DOT__forward_rs2_ex = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__fwd__DOT__forward_rs1_id = VL_RAND_RESET_I(2);
    vlSelf->pipeline__DOT__fwd__DOT__forward_rs2_id = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
