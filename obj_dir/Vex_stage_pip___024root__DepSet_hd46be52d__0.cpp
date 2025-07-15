// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vex_stage_pip.h for the primary calling header

#include "Vex_stage_pip__pch.h"
#include "Vex_stage_pip___024root.h"

void Vex_stage_pip___024root___ico_sequent__TOP__0(Vex_stage_pip___024root* vlSelf);

void Vex_stage_pip___024root___eval_ico(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_ico\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vex_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vex_stage_pip___024root___ico_sequent__TOP__0(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___ico_sequent__TOP__0\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ex_stage_pip__DOT__rs1_data_in = vlSelfRef.rs1_data_in;
    vlSelfRef.ex_stage_pip__DOT__rs2_data_in = vlSelfRef.rs2_data_in;
    vlSelfRef.ex_stage_pip__DOT__alu_src_in = vlSelfRef.alu_src_in;
    vlSelfRef.ex_stage_pip__DOT__forward_rs1 = vlSelfRef.forward_rs1;
    vlSelfRef.ex_stage_pip__DOT__forward_rs2 = vlSelfRef.forward_rs2;
    vlSelfRef.ex_stage_pip__DOT__forward_data_mem = vlSelfRef.forward_data_mem;
    vlSelfRef.ex_stage_pip__DOT__forward_data_wb = vlSelfRef.forward_data_wb;
    vlSelfRef.pc_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.ex_stage_pip__DOT__pc_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.alu_result_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.ex_stage_pip__DOT__alu_result_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.rs2_data_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out;
    vlSelfRef.ex_stage_pip__DOT__rs2_data_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out;
    vlSelfRef.rd_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.ex_stage_pip__DOT__rd_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.rs1_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.ex_stage_pip__DOT__rs1_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.rs2_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.ex_stage_pip__DOT__rs2_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.branch_target_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.ex_stage_pip__DOT__branch_target_out 
        = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.jump_target_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.ex_stage_pip__DOT__jump_target_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.mem_read_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.ex_stage_pip__DOT__mem_read_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.mem_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.ex_stage_pip__DOT__mem_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.reg_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.ex_stage_pip__DOT__reg_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.mem_to_reg_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.ex_stage_pip__DOT__mem_to_reg_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.branch_taken_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.ex_stage_pip__DOT__branch_taken_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.jump_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.ex_stage_pip__DOT__jump_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.ex_stage_pip__DOT__clk = vlSelfRef.clk;
    vlSelfRef.ex_stage_pip__DOT__rst = vlSelfRef.rst;
    vlSelfRef.ex_stage_pip__DOT__rs1_in = vlSelfRef.rs1_in;
    vlSelfRef.ex_stage_pip__DOT__rs2_in = vlSelfRef.rs2_in;
    vlSelfRef.ex_stage_pip__DOT__rd_in = vlSelfRef.rd_in;
    vlSelfRef.ex_stage_pip__DOT__alu_ctrl_in = vlSelfRef.alu_ctrl_in;
    vlSelfRef.ex_stage_pip__DOT__branch_ctrl_in = vlSelfRef.branch_ctrl_in;
    vlSelfRef.ex_stage_pip__DOT__reg_write_in = vlSelfRef.reg_write_in;
    vlSelfRef.ex_stage_pip__DOT__mem_read_in = vlSelfRef.mem_read_in;
    vlSelfRef.ex_stage_pip__DOT__mem_write_in = vlSelfRef.mem_write_in;
    vlSelfRef.ex_stage_pip__DOT__mem_to_reg_in = vlSelfRef.mem_to_reg_in;
    vlSelfRef.ex_stage_pip__DOT__branch_in = vlSelfRef.branch_in;
    vlSelfRef.ex_stage_pip__DOT__jal_in = vlSelfRef.jal_in;
    vlSelfRef.ex_stage_pip__DOT__jalr_in = vlSelfRef.jalr_in;
    vlSelfRef.ex_stage_pip__DOT__imm_in = vlSelfRef.imm_in;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_target 
        = (vlSelfRef.pc_in + vlSelfRef.imm_in);
    vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump = 0U;
    vlSelfRef.ex_stage_pip__DOT__pc_in = vlSelfRef.pc_in;
    vlSelfRef.ex_stage_pip__DOT__rs2_data = ((0U == (IData)(vlSelfRef.forward_rs2))
                                              ? vlSelfRef.rs2_data_in
                                              : ((2U 
                                                  == (IData)(vlSelfRef.forward_rs2))
                                                  ? vlSelfRef.forward_data_mem
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.forward_rs2))
                                                   ? vlSelfRef.forward_data_wb
                                                   : 0U)));
    vlSelfRef.ex_stage_pip__DOT__rs1_data = ((0U == (IData)(vlSelfRef.forward_rs1))
                                              ? vlSelfRef.rs1_data_in
                                              : ((2U 
                                                  == (IData)(vlSelfRef.forward_rs1))
                                                  ? vlSelfRef.forward_data_mem
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.forward_rs1))
                                                   ? vlSelfRef.forward_data_wb
                                                   : 0U)));
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__clk 
        = vlSelfRef.ex_stage_pip__DOT__clk;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rst 
        = vlSelfRef.ex_stage_pip__DOT__rst;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_in 
        = vlSelfRef.ex_stage_pip__DOT__rs1_in;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_in 
        = vlSelfRef.ex_stage_pip__DOT__rs2_in;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_in 
        = vlSelfRef.ex_stage_pip__DOT__rd_in;
    vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__alu_ctrl 
        = vlSelfRef.ex_stage_pip__DOT__alu_ctrl_in;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_ctrl 
        = vlSelfRef.ex_stage_pip__DOT__branch_ctrl_in;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_in 
        = vlSelfRef.ex_stage_pip__DOT__reg_write_in;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_in 
        = vlSelfRef.ex_stage_pip__DOT__mem_read_in;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_in 
        = vlSelfRef.ex_stage_pip__DOT__mem_write_in;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_in 
        = vlSelfRef.ex_stage_pip__DOT__mem_to_reg_in;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch 
        = vlSelfRef.ex_stage_pip__DOT__branch_in;
    vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jal 
        = vlSelfRef.ex_stage_pip__DOT__jal_in;
    vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jalr 
        = vlSelfRef.ex_stage_pip__DOT__jalr_in;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__imm 
        = vlSelfRef.ex_stage_pip__DOT__imm_in;
    vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__imm 
        = vlSelfRef.ex_stage_pip__DOT__imm_in;
    vlSelfRef.ex_stage_pip__DOT__branch_target = vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_target;
    if (vlSelfRef.jal_in) {
        vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump = 1U;
    } else if (vlSelfRef.jalr_in) {
        vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump = 1U;
    }
    vlSelfRef.ex_stage_pip__DOT__jump = vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__pc 
        = vlSelfRef.ex_stage_pip__DOT__pc_in;
    vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__pc 
        = vlSelfRef.ex_stage_pip__DOT__pc_in;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_in 
        = vlSelfRef.ex_stage_pip__DOT__pc_in;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__op_B 
        = vlSelfRef.ex_stage_pip__DOT__rs2_data;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_in 
        = vlSelfRef.ex_stage_pip__DOT__rs2_data;
    vlSelfRef.ex_stage_pip__DOT__alu_B = ((IData)(vlSelfRef.alu_src_in)
                                           ? vlSelfRef.imm_in
                                           : vlSelfRef.ex_stage_pip__DOT__rs2_data);
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__op_A 
        = vlSelfRef.ex_stage_pip__DOT__rs1_data;
    vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__rs1_data 
        = vlSelfRef.ex_stage_pip__DOT__rs1_data;
    vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump_target = 0U;
    if (vlSelfRef.jal_in) {
        vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump_target 
            = (vlSelfRef.pc_in + vlSelfRef.imm_in);
    } else if (vlSelfRef.jalr_in) {
        vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump_target 
            = (vlSelfRef.ex_stage_pip__DOT__rs1_data 
               + vlSelfRef.imm_in);
    }
    vlSelfRef.ex_stage_pip__DOT__alu_A = vlSelfRef.ex_stage_pip__DOT__rs1_data;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_in 
        = vlSelfRef.ex_stage_pip__DOT__branch_target;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_in 
        = vlSelfRef.ex_stage_pip__DOT__jump;
    vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__op_B 
        = vlSelfRef.ex_stage_pip__DOT__alu_B;
    vlSelfRef.ex_stage_pip__DOT__jump_target = vlSelfRef.ex_stage_pip__DOT__jmp_unit__DOT__jump_target;
    vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__op_A 
        = vlSelfRef.ex_stage_pip__DOT__alu_A;
    vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__alu_result 
        = ((8U & (IData)(vlSelfRef.alu_ctrl_in)) ? 
           ((4U & (IData)(vlSelfRef.alu_ctrl_in)) ? 0U
             : ((2U & (IData)(vlSelfRef.alu_ctrl_in))
                 ? 0U : ((1U & (IData)(vlSelfRef.alu_ctrl_in))
                          ? ((vlSelfRef.ex_stage_pip__DOT__alu_A 
                              < vlSelfRef.ex_stage_pip__DOT__alu_B)
                              ? 1U : 0U) : (VL_LTS_III(32, vlSelfRef.ex_stage_pip__DOT__alu_A, vlSelfRef.ex_stage_pip__DOT__alu_B)
                                             ? 1U : 0U))))
            : ((4U & (IData)(vlSelfRef.alu_ctrl_in))
                ? ((2U & (IData)(vlSelfRef.alu_ctrl_in))
                    ? ((1U & (IData)(vlSelfRef.alu_ctrl_in))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ex_stage_pip__DOT__alu_A, 
                                         (0x1fU & vlSelfRef.ex_stage_pip__DOT__alu_B))
                        : (vlSelfRef.ex_stage_pip__DOT__alu_A 
                           >> (0x1fU & vlSelfRef.ex_stage_pip__DOT__alu_B)))
                    : ((1U & (IData)(vlSelfRef.alu_ctrl_in))
                        ? (vlSelfRef.ex_stage_pip__DOT__alu_A 
                           << (0x1fU & vlSelfRef.ex_stage_pip__DOT__alu_B))
                        : (vlSelfRef.ex_stage_pip__DOT__alu_A 
                           ^ vlSelfRef.ex_stage_pip__DOT__alu_B)))
                : ((2U & (IData)(vlSelfRef.alu_ctrl_in))
                    ? ((1U & (IData)(vlSelfRef.alu_ctrl_in))
                        ? (vlSelfRef.ex_stage_pip__DOT__alu_A 
                           | vlSelfRef.ex_stage_pip__DOT__alu_B)
                        : (vlSelfRef.ex_stage_pip__DOT__alu_A 
                           & vlSelfRef.ex_stage_pip__DOT__alu_B))
                    : ((1U & (IData)(vlSelfRef.alu_ctrl_in))
                        ? (vlSelfRef.ex_stage_pip__DOT__alu_A 
                           - vlSelfRef.ex_stage_pip__DOT__alu_B)
                        : (vlSelfRef.ex_stage_pip__DOT__alu_A 
                           + vlSelfRef.ex_stage_pip__DOT__alu_B)))));
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_in 
        = vlSelfRef.ex_stage_pip__DOT__jump_target;
    vlSelfRef.ex_stage_pip__DOT__alu_result = vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__alu_result;
    vlSelfRef.ex_stage_pip__DOT__zero_flag = (0U == vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__alu_result);
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_in 
        = vlSelfRef.ex_stage_pip__DOT__alu_result;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__zero_flag 
        = vlSelfRef.ex_stage_pip__DOT__zero_flag;
    vlSelfRef.ex_stage_pip__DOT__alu_unit__DOT__zero_flag 
        = vlSelfRef.ex_stage_pip__DOT__zero_flag;
    vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_taken = 0U;
    if (vlSelfRef.branch_in) {
        vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_taken 
            = (1U & ((4U & (IData)(vlSelfRef.branch_ctrl_in))
                      ? ((1U & (~ ((IData)(vlSelfRef.branch_ctrl_in) 
                                   >> 1U))) && ((1U 
                                                 & (IData)(vlSelfRef.branch_ctrl_in))
                                                 ? 
                                                (vlSelfRef.ex_stage_pip__DOT__rs1_data 
                                                 >= vlSelfRef.ex_stage_pip__DOT__rs2_data)
                                                 : 
                                                (vlSelfRef.ex_stage_pip__DOT__rs1_data 
                                                 < vlSelfRef.ex_stage_pip__DOT__rs2_data)))
                      : ((2U & (IData)(vlSelfRef.branch_ctrl_in))
                          ? ((1U & (IData)(vlSelfRef.branch_ctrl_in))
                              ? VL_GTES_III(32, vlSelfRef.ex_stage_pip__DOT__rs1_data, vlSelfRef.ex_stage_pip__DOT__rs2_data)
                              : VL_LTS_III(32, vlSelfRef.ex_stage_pip__DOT__rs1_data, vlSelfRef.ex_stage_pip__DOT__rs2_data))
                          : ((1U & (IData)(vlSelfRef.branch_ctrl_in))
                              ? (~ (IData)(vlSelfRef.ex_stage_pip__DOT__zero_flag))
                              : (IData)(vlSelfRef.ex_stage_pip__DOT__zero_flag)))));
    }
    vlSelfRef.ex_stage_pip__DOT__branch_taken = vlSelfRef.ex_stage_pip__DOT__brch_unit__DOT__branch_taken;
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_in 
        = vlSelfRef.ex_stage_pip__DOT__branch_taken;
}

void Vex_stage_pip___024root___eval_triggers__ico(Vex_stage_pip___024root* vlSelf);

bool Vex_stage_pip___024root___eval_phase__ico(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_phase__ico\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vex_stage_pip___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vex_stage_pip___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vex_stage_pip___024root___eval_act(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_act\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vex_stage_pip___024root___nba_sequent__TOP__0(Vex_stage_pip___024root* vlSelf);

void Vex_stage_pip___024root___eval_nba(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_nba\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vex_stage_pip___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vex_stage_pip___024root___nba_sequent__TOP__0(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___nba_sequent__TOP__0\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.mem_to_reg_in));
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.reg_write_in));
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.mem_write_in));
    if (vlSelfRef.rst) {
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_out = 0U;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_out = 0U;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_out = 0U;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_out = 0U;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out = 0U;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out = 0U;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out = 0U;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out = 0U;
    } else {
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_out 
            = vlSelfRef.rs2_in;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_out 
            = vlSelfRef.rs1_in;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_out 
            = vlSelfRef.rd_in;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_out 
            = vlSelfRef.pc_in;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out 
            = vlSelfRef.ex_stage_pip__DOT__jump_target;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out 
            = vlSelfRef.ex_stage_pip__DOT__branch_target;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out 
            = vlSelfRef.ex_stage_pip__DOT__alu_result;
        vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out 
            = vlSelfRef.ex_stage_pip__DOT__rs2_data;
    }
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.mem_read_in));
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.ex_stage_pip__DOT__branch_taken));
    vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.ex_stage_pip__DOT__jump));
    vlSelfRef.mem_to_reg_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.ex_stage_pip__DOT__mem_to_reg_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_to_reg_out;
    vlSelfRef.reg_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.ex_stage_pip__DOT__reg_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__reg_write_out;
    vlSelfRef.mem_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.ex_stage_pip__DOT__mem_write_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_write_out;
    vlSelfRef.rs2_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.ex_stage_pip__DOT__rs2_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_out;
    vlSelfRef.rs1_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.ex_stage_pip__DOT__rs1_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs1_out;
    vlSelfRef.rd_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.ex_stage_pip__DOT__rd_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rd_out;
    vlSelfRef.pc_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.ex_stage_pip__DOT__pc_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__pc_out;
    vlSelfRef.mem_read_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.ex_stage_pip__DOT__mem_read_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__mem_read_out;
    vlSelfRef.jump_target_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.ex_stage_pip__DOT__jump_target_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_target_out;
    vlSelfRef.branch_target_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.ex_stage_pip__DOT__branch_target_out 
        = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_target_out;
    vlSelfRef.alu_result_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.ex_stage_pip__DOT__alu_result_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__alu_result_out;
    vlSelfRef.branch_taken_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.ex_stage_pip__DOT__branch_taken_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__branch_taken_out;
    vlSelfRef.jump_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.ex_stage_pip__DOT__jump_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__jump_out;
    vlSelfRef.rs2_data_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out;
    vlSelfRef.ex_stage_pip__DOT__rs2_data_out = vlSelfRef.ex_stage_pip__DOT__exmem_register__DOT__rs2_data_out;
}

void Vex_stage_pip___024root___eval_triggers__act(Vex_stage_pip___024root* vlSelf);

bool Vex_stage_pip___024root___eval_phase__act(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_phase__act\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vex_stage_pip___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vex_stage_pip___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vex_stage_pip___024root___eval_phase__nba(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_phase__nba\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vex_stage_pip___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__ico(Vex_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__nba(Vex_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vex_stage_pip___024root___dump_triggers__act(Vex_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG

void Vex_stage_pip___024root___eval(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vex_stage_pip___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/ex_stage_pip.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vex_stage_pip___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vex_stage_pip___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/ex_stage_pip.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vex_stage_pip___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/ex_stage_pip.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vex_stage_pip___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vex_stage_pip___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vex_stage_pip___024root___eval_debug_assertions(Vex_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vex_stage_pip___024root___eval_debug_assertions\n"); );
    Vex_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.rs1_in & 0xe0U)))) {
        Verilated::overWidthError("rs1_in");}
    if (VL_UNLIKELY(((vlSelfRef.rs2_in & 0xe0U)))) {
        Verilated::overWidthError("rs2_in");}
    if (VL_UNLIKELY(((vlSelfRef.rd_in & 0xe0U)))) {
        Verilated::overWidthError("rd_in");}
    if (VL_UNLIKELY(((vlSelfRef.alu_ctrl_in & 0xf0U)))) {
        Verilated::overWidthError("alu_ctrl_in");}
    if (VL_UNLIKELY(((vlSelfRef.branch_ctrl_in & 0xf8U)))) {
        Verilated::overWidthError("branch_ctrl_in");}
    if (VL_UNLIKELY(((vlSelfRef.reg_write_in & 0xfeU)))) {
        Verilated::overWidthError("reg_write_in");}
    if (VL_UNLIKELY(((vlSelfRef.mem_read_in & 0xfeU)))) {
        Verilated::overWidthError("mem_read_in");}
    if (VL_UNLIKELY(((vlSelfRef.mem_write_in & 0xfeU)))) {
        Verilated::overWidthError("mem_write_in");}
    if (VL_UNLIKELY(((vlSelfRef.mem_to_reg_in & 0xfeU)))) {
        Verilated::overWidthError("mem_to_reg_in");}
    if (VL_UNLIKELY(((vlSelfRef.alu_src_in & 0xfeU)))) {
        Verilated::overWidthError("alu_src_in");}
    if (VL_UNLIKELY(((vlSelfRef.branch_in & 0xfeU)))) {
        Verilated::overWidthError("branch_in");}
    if (VL_UNLIKELY(((vlSelfRef.jal_in & 0xfeU)))) {
        Verilated::overWidthError("jal_in");}
    if (VL_UNLIKELY(((vlSelfRef.jalr_in & 0xfeU)))) {
        Verilated::overWidthError("jalr_in");}
    if (VL_UNLIKELY(((vlSelfRef.forward_rs1 & 0xfcU)))) {
        Verilated::overWidthError("forward_rs1");}
    if (VL_UNLIKELY(((vlSelfRef.forward_rs2 & 0xfcU)))) {
        Verilated::overWidthError("forward_rs2");}
}
#endif  // VL_DEBUG
