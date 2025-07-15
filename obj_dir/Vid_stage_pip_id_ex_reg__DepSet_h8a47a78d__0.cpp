// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip_id_ex_reg.h"

VL_INLINE_OPT void Vid_stage_pip_id_ex_reg___nba_sequent__TOP__id_stage_pip__idex_register__0(Vid_stage_pip_id_ex_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_id_ex_reg___nba_sequent__TOP__id_stage_pip__idex_register__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__rs1_data_out = vlSelfRef.rs1_data_out;
    vlSelfRef.__Vdly__rs2_data_out = vlSelfRef.rs2_data_out;
    vlSelfRef.__Vdly__imm_out = vlSelfRef.imm_out;
    vlSelfRef.__Vdly__rs1_out = vlSelfRef.rs1_out;
    vlSelfRef.__Vdly__rs2_out = vlSelfRef.rs2_out;
    vlSelfRef.__Vdly__rd_out = vlSelfRef.rd_out;
    vlSelfRef.__Vdly__alu_ctrl_out = vlSelfRef.alu_ctrl_out;
    vlSelfRef.__Vdly__branch_ctrl_out = vlSelfRef.branch_ctrl_out;
    vlSelfRef.__Vdly__reg_write_out = vlSelfRef.reg_write_out;
    vlSelfRef.__Vdly__mem_read_out = vlSelfRef.mem_read_out;
    vlSelfRef.__Vdly__mem_write_out = vlSelfRef.mem_write_out;
    vlSelfRef.__Vdly__mem_to_reg_out = vlSelfRef.mem_to_reg_out;
    vlSelfRef.__Vdly__alu_src_out = vlSelfRef.alu_src_out;
    vlSelfRef.__Vdly__branch_out = vlSelfRef.branch_out;
    vlSelfRef.__Vdly__jal_out = vlSelfRef.jal_out;
    vlSelfRef.__Vdly__jalr_out = vlSelfRef.jalr_out;
    if (vlSelfRef.rst) {
        if (vlSelfRef.id_ex_flush) {
            vlSelfRef.__Vdly__rs1_data_out = 0U;
            vlSelfRef.__Vdly__rs2_data_out = 0U;
            vlSelfRef.__Vdly__imm_out = 0U;
            vlSelfRef.__Vdly__rs1_out = 0U;
            vlSelfRef.__Vdly__rs2_out = 0U;
            vlSelfRef.__Vdly__rd_out = 0U;
            vlSelfRef.__Vdly__alu_ctrl_out = 0U;
            vlSelfRef.__Vdly__branch_ctrl_out = 0U;
            vlSelfRef.__Vdly__reg_write_out = 0U;
            vlSelfRef.__Vdly__mem_read_out = 0U;
            vlSelfRef.__Vdly__mem_write_out = 0U;
            vlSelfRef.__Vdly__mem_to_reg_out = 0U;
            vlSelfRef.__Vdly__alu_src_out = 0U;
            vlSelfRef.__Vdly__branch_out = 0U;
            vlSelfRef.__Vdly__jal_out = 0U;
            vlSelfRef.__Vdly__jalr_out = 0U;
        } else if (vlSelfRef.id_ex_write) {
            vlSelfRef.__Vdly__rs1_data_out = vlSelfRef.rs1_data_in;
            vlSelfRef.__Vdly__rs2_data_out = vlSelfRef.rs2_data_in;
            vlSelfRef.__Vdly__imm_out = vlSelfRef.imm_in;
            vlSelfRef.__Vdly__rs1_out = vlSelfRef.rs1_in;
            vlSelfRef.__Vdly__rs2_out = vlSelfRef.rs2_in;
            vlSelfRef.__Vdly__rd_out = vlSelfRef.rd_in;
            vlSelfRef.__Vdly__alu_ctrl_out = vlSelfRef.alu_ctrl_in;
            vlSelfRef.__Vdly__branch_ctrl_out = vlSelfRef.branch_ctrl_in;
            vlSelfRef.__Vdly__reg_write_out = vlSelfRef.reg_write_in;
            vlSelfRef.__Vdly__mem_read_out = vlSelfRef.mem_read_in;
            vlSelfRef.__Vdly__mem_write_out = vlSelfRef.mem_write_in;
            vlSelfRef.__Vdly__mem_to_reg_out = vlSelfRef.mem_to_reg_in;
            vlSelfRef.__Vdly__alu_src_out = vlSelfRef.alu_src_in;
            vlSelfRef.__Vdly__branch_out = vlSelfRef.branch_in;
            vlSelfRef.__Vdly__jal_out = vlSelfRef.jal_in;
            vlSelfRef.__Vdly__jalr_out = vlSelfRef.jalr_in;
        }
    } else {
        vlSelfRef.__Vdly__rs1_data_out = 0U;
        vlSelfRef.__Vdly__rs2_data_out = 0U;
        vlSelfRef.__Vdly__imm_out = 0U;
        vlSelfRef.__Vdly__rs1_out = 0U;
        vlSelfRef.__Vdly__rs2_out = 0U;
        vlSelfRef.__Vdly__rd_out = 0U;
        vlSelfRef.__Vdly__alu_ctrl_out = 0U;
        vlSelfRef.__Vdly__branch_ctrl_out = 0U;
        vlSelfRef.__Vdly__reg_write_out = 0U;
        vlSelfRef.__Vdly__mem_read_out = 0U;
        vlSelfRef.__Vdly__mem_write_out = 0U;
        vlSelfRef.__Vdly__mem_to_reg_out = 0U;
        vlSelfRef.__Vdly__alu_src_out = 0U;
        vlSelfRef.__Vdly__branch_out = 0U;
        vlSelfRef.__Vdly__jal_out = 0U;
        vlSelfRef.__Vdly__jalr_out = 0U;
    }
    vlSelfRef.rs1_data_out = vlSelfRef.__Vdly__rs1_data_out;
    vlSelfRef.rs2_data_out = vlSelfRef.__Vdly__rs2_data_out;
    vlSelfRef.imm_out = vlSelfRef.__Vdly__imm_out;
    vlSelfRef.rs1_out = vlSelfRef.__Vdly__rs1_out;
    vlSelfRef.rs2_out = vlSelfRef.__Vdly__rs2_out;
    vlSelfRef.rd_out = vlSelfRef.__Vdly__rd_out;
    vlSelfRef.alu_ctrl_out = vlSelfRef.__Vdly__alu_ctrl_out;
    vlSelfRef.branch_ctrl_out = vlSelfRef.__Vdly__branch_ctrl_out;
    vlSelfRef.reg_write_out = vlSelfRef.__Vdly__reg_write_out;
    vlSelfRef.mem_read_out = vlSelfRef.__Vdly__mem_read_out;
    vlSelfRef.mem_write_out = vlSelfRef.__Vdly__mem_write_out;
    vlSelfRef.mem_to_reg_out = vlSelfRef.__Vdly__mem_to_reg_out;
    vlSelfRef.alu_src_out = vlSelfRef.__Vdly__alu_src_out;
    vlSelfRef.branch_out = vlSelfRef.__Vdly__branch_out;
    vlSelfRef.jal_out = vlSelfRef.__Vdly__jal_out;
    vlSelfRef.jalr_out = vlSelfRef.__Vdly__jalr_out;
}
