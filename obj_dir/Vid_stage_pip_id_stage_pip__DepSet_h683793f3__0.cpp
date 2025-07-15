// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip__Syms.h"
#include "Vid_stage_pip_id_stage_pip.h"

VL_INLINE_OPT void Vid_stage_pip_id_stage_pip___ico_sequent__TOP__id_stage_pip__0(Vid_stage_pip_id_stage_pip* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vid_stage_pip_id_stage_pip___ico_sequent__TOP__id_stage_pip__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__id_stage_pip__reg_file.rd_data = vlSelfRef.rd_data_wb;
    vlSymsp->TOP__id_stage_pip__reg_file.rd = vlSelfRef.rd_wb;
    vlSymsp->TOP__id_stage_pip__reg_file.reg_write 
        = vlSelfRef.reg_write_wb;
    vlSymsp->TOP__id_stage_pip__idex_register.id_ex_write 
        = vlSelfRef.id_ex_write;
    vlSymsp->TOP__id_stage_pip__idex_register.id_ex_flush 
        = vlSelfRef.id_ex_flush;
    vlSymsp->TOP__id_stage_pip__reg_file.rst = vlSelfRef.rst;
    vlSymsp->TOP__id_stage_pip__idex_register.rst = vlSelfRef.rst;
    vlSymsp->TOP__id_stage_pip__reg_file.clk = vlSelfRef.clk;
    vlSymsp->TOP__id_stage_pip__idex_register.clk = vlSelfRef.clk;
    vlSymsp->TOP__id_stage_pip__decoder.instr = vlSelfRef.instr_in;
}

VL_INLINE_OPT void Vid_stage_pip_id_stage_pip___ico_sequent__TOP__id_stage_pip__1(Vid_stage_pip_id_stage_pip* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vid_stage_pip_id_stage_pip___ico_sequent__TOP__id_stage_pip__1\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.imm = vlSymsp->TOP__id_stage_pip__decoder.imm;
    vlSelfRef.rd = vlSymsp->TOP__id_stage_pip__decoder.rd;
    vlSelfRef.rs1 = vlSymsp->TOP__id_stage_pip__decoder.rs1;
    vlSelfRef.rs2 = vlSymsp->TOP__id_stage_pip__decoder.rs2;
    vlSelfRef.opcode = vlSymsp->TOP__id_stage_pip__decoder.opcode;
    vlSelfRef.funct3 = vlSymsp->TOP__id_stage_pip__decoder.funct3;
    vlSelfRef.funct7 = vlSymsp->TOP__id_stage_pip__decoder.funct7;
    vlSymsp->TOP__id_stage_pip__idex_register.imm_in 
        = vlSelfRef.imm;
    vlSymsp->TOP__id_stage_pip__idex_register.rd_in 
        = vlSelfRef.rd;
    vlSelfRef.rd_hzd = vlSelfRef.rd;
    vlSymsp->TOP__id_stage_pip__idex_register.rs1_in 
        = vlSelfRef.rs1;
    vlSelfRef.rs1_hzd = vlSelfRef.rs1;
    vlSymsp->TOP__id_stage_pip__reg_file.rs1 = vlSelfRef.rs1;
    vlSymsp->TOP__id_stage_pip__idex_register.rs2_in 
        = vlSelfRef.rs2;
    vlSelfRef.rs2_hzd = vlSelfRef.rs2;
    vlSymsp->TOP__id_stage_pip__reg_file.rs2 = vlSelfRef.rs2;
    vlSymsp->TOP__id_stage_pip__control.opcode = vlSelfRef.opcode;
    vlSymsp->TOP__id_stage_pip__control.funct3 = vlSelfRef.funct3;
    vlSymsp->TOP__id_stage_pip__control.funct7 = vlSelfRef.funct7;
}

VL_INLINE_OPT void Vid_stage_pip_id_stage_pip___ico_sequent__TOP__id_stage_pip__2(Vid_stage_pip_id_stage_pip* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vid_stage_pip_id_stage_pip___ico_sequent__TOP__id_stage_pip__2\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1_data = vlSymsp->TOP__id_stage_pip__reg_file.out_data_rs1;
    vlSelfRef.rs2_data = vlSymsp->TOP__id_stage_pip__reg_file.out_data_rs2;
    vlSelfRef.alu_ctrl = vlSymsp->TOP__id_stage_pip__control.alu_ctrl;
    vlSelfRef.branch_ctrl = vlSymsp->TOP__id_stage_pip__control.branch_ctrl;
    vlSelfRef.reg_write = vlSymsp->TOP__id_stage_pip__control.reg_write;
    vlSelfRef.mem_read = vlSymsp->TOP__id_stage_pip__control.mem_read;
    vlSelfRef.mem_write = vlSymsp->TOP__id_stage_pip__control.mem_write;
    vlSelfRef.mem_to_reg = vlSymsp->TOP__id_stage_pip__control.mem_to_reg;
    vlSelfRef.jal = vlSymsp->TOP__id_stage_pip__control.jal;
    vlSelfRef.jalr = vlSymsp->TOP__id_stage_pip__control.jalr;
    vlSelfRef.branch = vlSymsp->TOP__id_stage_pip__control.branch;
    vlSelfRef.alu_src = vlSymsp->TOP__id_stage_pip__control.alu_src;
    vlSymsp->TOP__id_stage_pip__idex_register.rs1_data_in 
        = vlSelfRef.rs1_data;
    vlSymsp->TOP__id_stage_pip__idex_register.rs2_data_in 
        = vlSelfRef.rs2_data;
    vlSymsp->TOP__id_stage_pip__idex_register.alu_ctrl_in 
        = vlSelfRef.alu_ctrl;
    vlSymsp->TOP__id_stage_pip__idex_register.branch_ctrl_in 
        = vlSelfRef.branch_ctrl;
    vlSymsp->TOP__id_stage_pip__idex_register.reg_write_in 
        = vlSelfRef.reg_write;
    vlSymsp->TOP__id_stage_pip__idex_register.mem_read_in 
        = vlSelfRef.mem_read;
    vlSymsp->TOP__id_stage_pip__idex_register.mem_write_in 
        = vlSelfRef.mem_write;
    vlSymsp->TOP__id_stage_pip__idex_register.mem_to_reg_in 
        = vlSelfRef.mem_to_reg;
    vlSymsp->TOP__id_stage_pip__idex_register.jal_in 
        = vlSelfRef.jal;
    vlSymsp->TOP__id_stage_pip__idex_register.jalr_in 
        = vlSelfRef.jalr;
    vlSymsp->TOP__id_stage_pip__idex_register.branch_in 
        = vlSelfRef.branch;
    vlSymsp->TOP__id_stage_pip__idex_register.alu_src_in 
        = vlSelfRef.alu_src;
}

VL_INLINE_OPT void Vid_stage_pip_id_stage_pip___nba_sequent__TOP__id_stage_pip__0(Vid_stage_pip_id_stage_pip* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vid_stage_pip_id_stage_pip___nba_sequent__TOP__id_stage_pip__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1_data = vlSymsp->TOP__id_stage_pip__reg_file.out_data_rs1;
    vlSelfRef.rs2_data = vlSymsp->TOP__id_stage_pip__reg_file.out_data_rs2;
}

VL_INLINE_OPT void Vid_stage_pip_id_stage_pip___nba_sequent__TOP__id_stage_pip__1(Vid_stage_pip_id_stage_pip* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vid_stage_pip_id_stage_pip___nba_sequent__TOP__id_stage_pip__1\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rs1_data_out = vlSymsp->TOP__id_stage_pip__idex_register.rs1_data_out;
    vlSelfRef.rs2_data_out = vlSymsp->TOP__id_stage_pip__idex_register.rs2_data_out;
    vlSelfRef.imm_out = vlSymsp->TOP__id_stage_pip__idex_register.imm_out;
    vlSelfRef.rs1_out = vlSymsp->TOP__id_stage_pip__idex_register.rs1_out;
    vlSelfRef.rs2_out = vlSymsp->TOP__id_stage_pip__idex_register.rs2_out;
    vlSelfRef.rd_out = vlSymsp->TOP__id_stage_pip__idex_register.rd_out;
    vlSelfRef.alu_ctrl_out = vlSymsp->TOP__id_stage_pip__idex_register.alu_ctrl_out;
    vlSelfRef.branch_ctrl_out = vlSymsp->TOP__id_stage_pip__idex_register.branch_ctrl_out;
    vlSelfRef.reg_write_out = vlSymsp->TOP__id_stage_pip__idex_register.reg_write_out;
    vlSelfRef.mem_read_out = vlSymsp->TOP__id_stage_pip__idex_register.mem_read_out;
    vlSelfRef.mem_write_out = vlSymsp->TOP__id_stage_pip__idex_register.mem_write_out;
    vlSelfRef.mem_to_reg_out = vlSymsp->TOP__id_stage_pip__idex_register.mem_to_reg_out;
    vlSelfRef.alu_src_out = vlSymsp->TOP__id_stage_pip__idex_register.alu_src_out;
    vlSelfRef.branch_out = vlSymsp->TOP__id_stage_pip__idex_register.branch_out;
    vlSelfRef.jal_out = vlSymsp->TOP__id_stage_pip__idex_register.jal_out;
    vlSelfRef.jalr_out = vlSymsp->TOP__id_stage_pip__idex_register.jalr_out;
}

VL_INLINE_OPT void Vid_stage_pip_id_stage_pip___nba_sequent__TOP__id_stage_pip__2(Vid_stage_pip_id_stage_pip* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vid_stage_pip_id_stage_pip___nba_sequent__TOP__id_stage_pip__2\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__id_stage_pip__idex_register.rs1_data_in 
        = vlSelfRef.rs1_data;
    vlSymsp->TOP__id_stage_pip__idex_register.rs2_data_in 
        = vlSelfRef.rs2_data;
}
