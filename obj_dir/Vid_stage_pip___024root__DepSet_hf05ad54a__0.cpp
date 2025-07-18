// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip___024root.h"

void Vid_stage_pip___024root___ico_sequent__TOP__0(Vid_stage_pip___024root* vlSelf);

void Vid_stage_pip___024root___eval_ico(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_ico\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vid_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vid_stage_pip___024root___ico_sequent__TOP__0(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___ico_sequent__TOP__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.id_stage_pip__DOT__ex_alu_result = vlSelfRef.ex_alu_result;
    vlSelfRef.id_stage_pip__DOT__mem_alu_result = vlSelfRef.mem_alu_result;
    vlSelfRef.id_stage_pip__DOT__ex_rd = vlSelfRef.ex_rd;
    vlSelfRef.id_stage_pip__DOT__mem_rd = vlSelfRef.mem_rd;
    vlSelfRef.id_stage_pip__DOT__ex_reg_write = vlSelfRef.ex_reg_write;
    vlSelfRef.id_stage_pip__DOT__mem_reg_write = vlSelfRef.mem_reg_write;
    vlSelfRef.id_stage_pip__DOT__forward_rs1 = vlSelfRef.forward_rs1;
    vlSelfRef.id_stage_pip__DOT__forward_rs2 = vlSelfRef.forward_rs2;
    vlSelfRef.rs1_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.id_stage_pip__DOT__rs1_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.rs2_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.id_stage_pip__DOT__rs2_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.rd_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_out;
    vlSelfRef.id_stage_pip__DOT__rd_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_out;
    vlSelfRef.pc_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_out;
    vlSelfRef.id_stage_pip__DOT__pc_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_out;
    vlSelfRef.rs1_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.id_stage_pip__DOT__rs1_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.rs2_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.id_stage_pip__DOT__rs2_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.imm_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_out;
    vlSelfRef.id_stage_pip__DOT__imm_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_out;
    vlSelfRef.funct3_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.id_stage_pip__DOT__funct3_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.alu_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.id_stage_pip__DOT__alu_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.branch_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.id_stage_pip__DOT__branch_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.wb_sel_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.id_stage_pip__DOT__wb_sel_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.reg_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.id_stage_pip__DOT__reg_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.mem_read_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.id_stage_pip__DOT__mem_read_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.mem_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.id_stage_pip__DOT__mem_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.mem_to_reg_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.id_stage_pip__DOT__mem_to_reg_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.jal_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_out;
    vlSelfRef.id_stage_pip__DOT__jal_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_out;
    vlSelfRef.jalr_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.id_stage_pip__DOT__jalr_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.branch_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_out;
    vlSelfRef.id_stage_pip__DOT__branch_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_out;
    vlSelfRef.alu_src_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.id_stage_pip__DOT__alu_src_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.id_stage_pip__DOT__id_ex_flush = vlSelfRef.id_ex_flush;
    vlSelfRef.id_stage_pip__DOT__id_ex_write = vlSelfRef.id_ex_write;
    vlSelfRef.id_stage_pip__DOT__instr_in = vlSelfRef.instr_in;
    vlSelfRef.id_stage_pip__DOT__pc_in = vlSelfRef.pc_in;
    vlSelfRef.id_stage_pip__DOT__reg_write_wb = vlSelfRef.reg_write_wb;
    vlSelfRef.id_stage_pip__DOT__rd_wb = vlSelfRef.rd_wb;
    vlSelfRef.id_stage_pip__DOT__rd_data_wb = vlSelfRef.rd_data_wb;
    vlSelfRef.id_stage_pip__DOT__clk = vlSelfRef.clk;
    vlSelfRef.id_stage_pip__DOT__rst = vlSelfRef.rst;
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__rd = 
        (0x1fU & (vlSelfRef.instr_in >> 7U));
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__funct7 
        = (vlSelfRef.instr_in >> 0x19U);
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__funct3 
        = (7U & (vlSelfRef.instr_in >> 0xcU));
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1 
        = (0x1fU & (vlSelfRef.instr_in >> 0xfU));
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2 
        = (0x1fU & (vlSelfRef.instr_in >> 0x14U));
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode 
        = (0x7fU & vlSelfRef.instr_in);
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__imm 
        = ((0x40U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                         ? ((((- (IData)(
                                                         (vlSelfRef.instr_in 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | (0x100000U 
                                                & (vlSelfRef.instr_in 
                                                   >> 0xbU))) 
                                            | (((0xff000U 
                                                 & vlSelfRef.instr_in) 
                                                | (0x800U 
                                                   & (vlSelfRef.instr_in 
                                                      >> 9U))) 
                                               | (0x7feU 
                                                  & (vlSelfRef.instr_in 
                                                     >> 0x14U))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.instr_in 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.instr_in 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.instr_in 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | (((0x1000U 
                                                        & (vlSelfRef.instr_in 
                                                           >> 0x13U)) 
                                                       | (0x800U 
                                                          & (vlSelfRef.instr_in 
                                                             << 4U))) 
                                                      | ((0x7e0U 
                                                          & (vlSelfRef.instr_in 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelfRef.instr_in 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.instr_in)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                               ? 0U : ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.instr_in 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.instr_in 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.instr_in 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.instr_in)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.instr_in 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.instr_in 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.instr_in 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.instr_in 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__id_ex_flush 
        = vlSelfRef.id_stage_pip__DOT__id_ex_flush;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__id_ex_write 
        = vlSelfRef.id_stage_pip__DOT__id_ex_write;
    vlSelfRef.id_stage_pip__DOT__decoder__DOT__instr 
        = vlSelfRef.id_stage_pip__DOT__instr_in;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_in 
        = vlSelfRef.id_stage_pip__DOT__pc_in;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__reg_write 
        = vlSelfRef.id_stage_pip__DOT__reg_write_wb;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__rd 
        = vlSelfRef.id_stage_pip__DOT__rd_wb;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__rd_data 
        = vlSelfRef.id_stage_pip__DOT__rd_data_wb;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__clk 
        = vlSelfRef.id_stage_pip__DOT__clk;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__clk 
        = vlSelfRef.id_stage_pip__DOT__clk;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__rst 
        = vlSelfRef.id_stage_pip__DOT__rst;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rst 
        = vlSelfRef.id_stage_pip__DOT__rst;
    vlSelfRef.rd_hzd = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rd;
    vlSelfRef.id_stage_pip__DOT__rd_hzd = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rd;
    vlSelfRef.id_stage_pip__DOT__rd = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rd;
    vlSelfRef.id_stage_pip__DOT__funct7 = vlSelfRef.id_stage_pip__DOT__decoder__DOT__funct7;
    vlSelfRef.id_stage_pip__DOT__funct3 = vlSelfRef.id_stage_pip__DOT__decoder__DOT__funct3;
    vlSelfRef.rs1_hzd = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1;
    vlSelfRef.id_stage_pip__DOT__rs1_hzd = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1;
    vlSelfRef.id_stage_pip__DOT__rs1 = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1;
    vlSelfRef.id_stage_pip__DOT__rs1_data = ((0U == (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1))
                                              ? 0U : 
                                             (((IData)(vlSelfRef.reg_write_wb) 
                                               & ((IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1) 
                                                  == (IData)(vlSelfRef.rd_wb)))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_
                                              [vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1]));
    vlSelfRef.rs2_hzd = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2;
    vlSelfRef.id_stage_pip__DOT__rs2_hzd = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2;
    vlSelfRef.id_stage_pip__DOT__rs2 = vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2;
    vlSelfRef.id_stage_pip__DOT__rs2_data = ((0U == (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2))
                                              ? 0U : 
                                             (((IData)(vlSelfRef.reg_write_wb) 
                                               & ((IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2) 
                                                  == (IData)(vlSelfRef.rd_wb)))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_
                                              [vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2]));
    vlSelfRef.id_stage_pip__DOT__imm = vlSelfRef.id_stage_pip__DOT__decoder__DOT__imm;
    vlSelfRef.id_stage_pip__DOT__opcode = vlSelfRef.id_stage_pip__DOT__decoder__DOT__opcode;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_in 
        = vlSelfRef.id_stage_pip__DOT__rd;
    vlSelfRef.id_stage_pip__DOT__control__DOT__funct7 
        = vlSelfRef.id_stage_pip__DOT__funct7;
    vlSelfRef.id_stage_pip__DOT__control__DOT__funct3 
        = vlSelfRef.id_stage_pip__DOT__funct3;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_in 
        = vlSelfRef.id_stage_pip__DOT__funct3;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__rs1 
        = vlSelfRef.id_stage_pip__DOT__rs1;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_in 
        = vlSelfRef.id_stage_pip__DOT__rs1;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__out_data_rs1 
        = vlSelfRef.id_stage_pip__DOT__rs1_data;
    vlSelfRef.id_stage_pip__DOT__rs1_data_forwarded 
        = ((3U == (IData)(vlSelfRef.forward_rs1)) ? vlSelfRef.ex_alu_result
            : ((2U == (IData)(vlSelfRef.forward_rs1))
                ? vlSelfRef.mem_alu_result : ((1U == (IData)(vlSelfRef.forward_rs1))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__rs1_data)));
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__rs2 
        = vlSelfRef.id_stage_pip__DOT__rs2;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_in 
        = vlSelfRef.id_stage_pip__DOT__rs2;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__out_data_rs2 
        = vlSelfRef.id_stage_pip__DOT__rs2_data;
    vlSelfRef.id_stage_pip__DOT__rs2_data_forwarded 
        = ((3U == (IData)(vlSelfRef.forward_rs2)) ? vlSelfRef.ex_alu_result
            : ((2U == (IData)(vlSelfRef.forward_rs2))
                ? vlSelfRef.mem_alu_result : ((1U == (IData)(vlSelfRef.forward_rs2))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__rs2_data)));
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_in 
        = vlSelfRef.id_stage_pip__DOT__imm;
    vlSelfRef.id_stage_pip__DOT__control__DOT__opcode 
        = vlSelfRef.id_stage_pip__DOT__opcode;
    vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__mem_read = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__mem_write = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__mem_to_reg = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                                vlSelfRef.id_stage_pip__DOT__control__DOT__mem_read = 1U;
                                vlSelfRef.id_stage_pip__DOT__control__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x20U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                                vlSelfRef.id_stage_pip__DOT__control__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.id_stage_pip__DOT__control__DOT__jal = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__jalr = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__branch = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__branch_ctrl = 0U;
    vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 0U;
    if ((0x40U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                                vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 1U;
                                vlSelfRef.id_stage_pip__DOT__control__DOT__jal = 1U;
                                vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 1U;
                                vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 2U;
                                vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 0U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                            vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 1U;
                            vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 1U;
                            vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 2U;
                            vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        if ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))) {
                            vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl 
                                = ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                    ? 9U : 8U);
                        } else if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__funct3) 
                                             >> 1U)))) {
                            vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                                vlSelfRef.id_stage_pip__DOT__control__DOT__jalr = 1U;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                                vlSelfRef.id_stage_pip__DOT__control__DOT__branch = 1U;
                                vlSelfRef.id_stage_pip__DOT__control__DOT__branch_ctrl 
                                    = ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                        ? ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                                ? 5U
                                                : 4U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                                ? 3U
                                                : 2U))
                                        : ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                             ? 1U : 0U)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                            vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 1U;
                            vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 1U;
                            vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 0U;
                            vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 0xaU;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 1U;
                        vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 0U;
                        vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 0U;
                        vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl 
                            = ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                        ? 2U : 3U) : 
                                   ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                     ? ((0U == (IData)(vlSelfRef.id_stage_pip__DOT__funct7))
                                         ? 6U : 7U)
                                     : 4U)) : ((2U 
                                                & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.id_stage_pip__DOT__funct7))
                                                     ? 0U
                                                     : 1U))));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 1U;
                        vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 0U;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                        vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 1U;
                        vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 1U;
                        vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 0U;
                        vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 0xbU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 1U;
                    vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 1U;
                    vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 0U;
                    vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl 
                        = ((4U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                            ? ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.id_stage_pip__DOT__funct7))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(vlSelfRef.id_stage_pip__DOT__funct3))
                                                   ? 5U
                                                   : 0U)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.id_stage_pip__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.id_stage_pip__DOT__opcode))) {
                    vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write = 1U;
                    vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src = 1U;
                    vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel = 1U;
                    vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl = 0U;
                }
            }
        }
    }
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_in 
        = vlSelfRef.id_stage_pip__DOT__rs1_data_forwarded;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_in 
        = vlSelfRef.id_stage_pip__DOT__rs2_data_forwarded;
    vlSelfRef.id_stage_pip__DOT__reg_write = vlSelfRef.id_stage_pip__DOT__control__DOT__reg_write;
    vlSelfRef.id_stage_pip__DOT__mem_read = vlSelfRef.id_stage_pip__DOT__control__DOT__mem_read;
    vlSelfRef.id_stage_pip__DOT__mem_write = vlSelfRef.id_stage_pip__DOT__control__DOT__mem_write;
    vlSelfRef.id_stage_pip__DOT__mem_to_reg = vlSelfRef.id_stage_pip__DOT__control__DOT__mem_to_reg;
    vlSelfRef.id_stage_pip__DOT__jal = vlSelfRef.id_stage_pip__DOT__control__DOT__jal;
    vlSelfRef.id_stage_pip__DOT__jalr = vlSelfRef.id_stage_pip__DOT__control__DOT__jalr;
    vlSelfRef.id_stage_pip__DOT__branch = vlSelfRef.id_stage_pip__DOT__control__DOT__branch;
    vlSelfRef.id_stage_pip__DOT__alu_src = vlSelfRef.id_stage_pip__DOT__control__DOT__alu_src;
    vlSelfRef.id_stage_pip__DOT__wb_sel = vlSelfRef.id_stage_pip__DOT__control__DOT__wb_sel;
    vlSelfRef.id_stage_pip__DOT__branch_ctrl = vlSelfRef.id_stage_pip__DOT__control__DOT__branch_ctrl;
    vlSelfRef.id_stage_pip__DOT__alu_ctrl = vlSelfRef.id_stage_pip__DOT__control__DOT__alu_ctrl;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_in 
        = vlSelfRef.id_stage_pip__DOT__reg_write;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_in 
        = vlSelfRef.id_stage_pip__DOT__mem_read;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_in 
        = vlSelfRef.id_stage_pip__DOT__mem_write;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_in 
        = vlSelfRef.id_stage_pip__DOT__mem_to_reg;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_in 
        = vlSelfRef.id_stage_pip__DOT__jal;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_in 
        = vlSelfRef.id_stage_pip__DOT__jalr;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_in 
        = vlSelfRef.id_stage_pip__DOT__branch;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_in 
        = vlSelfRef.id_stage_pip__DOT__alu_src;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_in 
        = vlSelfRef.id_stage_pip__DOT__wb_sel;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_in 
        = vlSelfRef.id_stage_pip__DOT__branch_ctrl;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_in 
        = vlSelfRef.id_stage_pip__DOT__alu_ctrl;
}

void Vid_stage_pip___024root___eval_triggers__ico(Vid_stage_pip___024root* vlSelf);

bool Vid_stage_pip___024root___eval_phase__ico(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_phase__ico\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vid_stage_pip___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vid_stage_pip___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vid_stage_pip___024root___eval_act(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_act\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vid_stage_pip___024root___nba_sequent__TOP__0(Vid_stage_pip___024root* vlSelf);

void Vid_stage_pip___024root___eval_nba(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_nba\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vid_stage_pip___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vid_stage_pip___024root___nba_sequent__TOP__0(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___nba_sequent__TOP__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v0;
    __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v0 = 0;
    IData/*31:0*/ __VdlyVal__id_stage_pip__DOT__reg_file__DOT__register___v32;
    __VdlyVal__id_stage_pip__DOT__reg_file__DOT__register___v32 = 0;
    CData/*4:0*/ __VdlyDim0__id_stage_pip__DOT__reg_file__DOT__register___v32;
    __VdlyDim0__id_stage_pip__DOT__reg_file__DOT__register___v32 = 0;
    CData/*0:0*/ __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v32;
    __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v32 = 0;
    // Body
    __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v0 = 0U;
    __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 1U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 2U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 3U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 4U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 5U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 6U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 7U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 8U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 9U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0xaU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0xbU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0xcU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0xdU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0xeU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0xfU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x10U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x11U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x12U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x13U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x14U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x15U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x16U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x17U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x18U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x19U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x1aU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x1bU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x1cU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x1dU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x1eU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x1fU;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__i = 0x20U;
        __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v0 = 1U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_out = 0U;
        vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_out = 0U;
    } else {
        if (((IData)(vlSelfRef.reg_write_wb) & (0U 
                                                != (IData)(vlSelfRef.rd_wb)))) {
            __VdlyVal__id_stage_pip__DOT__reg_file__DOT__register___v32 
                = vlSelfRef.rd_data_wb;
            __VdlyDim0__id_stage_pip__DOT__reg_file__DOT__register___v32 
                = vlSelfRef.rd_wb;
            __VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v32 = 1U;
        }
        if (vlSelfRef.id_ex_flush) {
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_out = 0U;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_out = 0U;
        } else if (vlSelfRef.id_ex_write) {
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_out 
                = vlSelfRef.pc_in;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_out 
                = vlSelfRef.id_stage_pip__DOT__reg_write;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_out 
                = vlSelfRef.id_stage_pip__DOT__wb_sel;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out 
                = vlSelfRef.id_stage_pip__DOT__branch_ctrl;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_out 
                = vlSelfRef.id_stage_pip__DOT__rd;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_out 
                = vlSelfRef.id_stage_pip__DOT__imm;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out 
                = vlSelfRef.id_stage_pip__DOT__alu_ctrl;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_out 
                = vlSelfRef.id_stage_pip__DOT__mem_read;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_out 
                = vlSelfRef.id_stage_pip__DOT__mem_write;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out 
                = vlSelfRef.id_stage_pip__DOT__mem_to_reg;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_out 
                = vlSelfRef.id_stage_pip__DOT__alu_src;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_out 
                = vlSelfRef.id_stage_pip__DOT__branch;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_out 
                = vlSelfRef.id_stage_pip__DOT__jal;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_out 
                = vlSelfRef.id_stage_pip__DOT__jalr;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_out 
                = vlSelfRef.id_stage_pip__DOT__rs2;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_out 
                = vlSelfRef.id_stage_pip__DOT__rs1;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_out 
                = vlSelfRef.id_stage_pip__DOT__rs2_data_forwarded;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_out 
                = vlSelfRef.id_stage_pip__DOT__rs1_data_forwarded;
            vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_out 
                = vlSelfRef.id_stage_pip__DOT__funct3;
        }
    }
    if (__VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v0) {
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[1U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[2U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[3U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[4U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[5U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[6U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[7U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[8U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[9U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0xaU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0xbU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0xcU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0xdU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0xeU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0xfU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x10U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x11U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x12U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x13U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x14U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x15U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x16U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x17U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x18U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x19U] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x1aU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x1bU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x1cU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x1dU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x1eU] = 0U;
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[0x1fU] = 0U;
    }
    if (__VdlySet__id_stage_pip__DOT__reg_file__DOT__register___v32) {
        vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_[__VdlyDim0__id_stage_pip__DOT__reg_file__DOT__register___v32] 
            = __VdlyVal__id_stage_pip__DOT__reg_file__DOT__register___v32;
    }
    vlSelfRef.id_stage_pip__DOT__rs1_data = ((0U == (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1))
                                              ? 0U : 
                                             (((IData)(vlSelfRef.reg_write_wb) 
                                               & ((IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1) 
                                                  == (IData)(vlSelfRef.rd_wb)))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_
                                              [vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs1]));
    vlSelfRef.id_stage_pip__DOT__rs2_data = ((0U == (IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2))
                                              ? 0U : 
                                             (((IData)(vlSelfRef.reg_write_wb) 
                                               & ((IData)(vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2) 
                                                  == (IData)(vlSelfRef.rd_wb)))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__reg_file__DOT__register_
                                              [vlSelfRef.id_stage_pip__DOT__decoder__DOT__rs2]));
    vlSelfRef.pc_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_out;
    vlSelfRef.id_stage_pip__DOT__pc_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__pc_out;
    vlSelfRef.reg_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.id_stage_pip__DOT__reg_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__reg_write_out;
    vlSelfRef.wb_sel_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.id_stage_pip__DOT__wb_sel_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__wb_sel_out;
    vlSelfRef.branch_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.id_stage_pip__DOT__branch_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_ctrl_out;
    vlSelfRef.rd_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_out;
    vlSelfRef.id_stage_pip__DOT__rd_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rd_out;
    vlSelfRef.imm_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_out;
    vlSelfRef.id_stage_pip__DOT__imm_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__imm_out;
    vlSelfRef.alu_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.id_stage_pip__DOT__alu_ctrl_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_ctrl_out;
    vlSelfRef.mem_read_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.id_stage_pip__DOT__mem_read_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_read_out;
    vlSelfRef.mem_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.id_stage_pip__DOT__mem_write_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_write_out;
    vlSelfRef.mem_to_reg_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.id_stage_pip__DOT__mem_to_reg_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__mem_to_reg_out;
    vlSelfRef.alu_src_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.id_stage_pip__DOT__alu_src_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__alu_src_out;
    vlSelfRef.branch_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_out;
    vlSelfRef.id_stage_pip__DOT__branch_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__branch_out;
    vlSelfRef.jal_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_out;
    vlSelfRef.id_stage_pip__DOT__jal_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jal_out;
    vlSelfRef.jalr_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.id_stage_pip__DOT__jalr_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__jalr_out;
    vlSelfRef.rs2_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.id_stage_pip__DOT__rs2_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_out;
    vlSelfRef.rs1_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.id_stage_pip__DOT__rs1_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_out;
    vlSelfRef.rs2_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.id_stage_pip__DOT__rs2_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_out;
    vlSelfRef.rs1_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.id_stage_pip__DOT__rs1_data_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_out;
    vlSelfRef.funct3_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.id_stage_pip__DOT__funct3_out = vlSelfRef.id_stage_pip__DOT__idex_register__DOT__funct3_out;
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__out_data_rs1 
        = vlSelfRef.id_stage_pip__DOT__rs1_data;
    vlSelfRef.id_stage_pip__DOT__rs1_data_forwarded 
        = ((3U == (IData)(vlSelfRef.forward_rs1)) ? vlSelfRef.ex_alu_result
            : ((2U == (IData)(vlSelfRef.forward_rs1))
                ? vlSelfRef.mem_alu_result : ((1U == (IData)(vlSelfRef.forward_rs1))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__rs1_data)));
    vlSelfRef.id_stage_pip__DOT__reg_file__DOT__out_data_rs2 
        = vlSelfRef.id_stage_pip__DOT__rs2_data;
    vlSelfRef.id_stage_pip__DOT__rs2_data_forwarded 
        = ((3U == (IData)(vlSelfRef.forward_rs2)) ? vlSelfRef.ex_alu_result
            : ((2U == (IData)(vlSelfRef.forward_rs2))
                ? vlSelfRef.mem_alu_result : ((1U == (IData)(vlSelfRef.forward_rs2))
                                               ? vlSelfRef.rd_data_wb
                                               : vlSelfRef.id_stage_pip__DOT__rs2_data)));
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs1_data_in 
        = vlSelfRef.id_stage_pip__DOT__rs1_data_forwarded;
    vlSelfRef.id_stage_pip__DOT__idex_register__DOT__rs2_data_in 
        = vlSelfRef.id_stage_pip__DOT__rs2_data_forwarded;
}

void Vid_stage_pip___024root___eval_triggers__act(Vid_stage_pip___024root* vlSelf);

bool Vid_stage_pip___024root___eval_phase__act(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_phase__act\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vid_stage_pip___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vid_stage_pip___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vid_stage_pip___024root___eval_phase__nba(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_phase__nba\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vid_stage_pip___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__ico(Vid_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__nba(Vid_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_stage_pip___024root___dump_triggers__act(Vid_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG

void Vid_stage_pip___024root___eval(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vid_stage_pip___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/id_stage_pip.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vid_stage_pip___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vid_stage_pip___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/id_stage_pip.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vid_stage_pip___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/id_stage_pip.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vid_stage_pip___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vid_stage_pip___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vid_stage_pip___024root___eval_debug_assertions(Vid_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_stage_pip___024root___eval_debug_assertions\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.id_ex_flush & 0xfeU)))) {
        Verilated::overWidthError("id_ex_flush");}
    if (VL_UNLIKELY(((vlSelfRef.id_ex_write & 0xfeU)))) {
        Verilated::overWidthError("id_ex_write");}
    if (VL_UNLIKELY(((vlSelfRef.reg_write_wb & 0xfeU)))) {
        Verilated::overWidthError("reg_write_wb");}
    if (VL_UNLIKELY(((vlSelfRef.rd_wb & 0xe0U)))) {
        Verilated::overWidthError("rd_wb");}
    if (VL_UNLIKELY(((vlSelfRef.ex_rd & 0xe0U)))) {
        Verilated::overWidthError("ex_rd");}
    if (VL_UNLIKELY(((vlSelfRef.mem_rd & 0xe0U)))) {
        Verilated::overWidthError("mem_rd");}
    if (VL_UNLIKELY(((vlSelfRef.ex_reg_write & 0xfeU)))) {
        Verilated::overWidthError("ex_reg_write");}
    if (VL_UNLIKELY(((vlSelfRef.mem_reg_write & 0xfeU)))) {
        Verilated::overWidthError("mem_reg_write");}
    if (VL_UNLIKELY(((vlSelfRef.forward_rs1 & 0xfcU)))) {
        Verilated::overWidthError("forward_rs1");}
    if (VL_UNLIKELY(((vlSelfRef.forward_rs2 & 0xfcU)))) {
        Verilated::overWidthError("forward_rs2");}
}
#endif  // VL_DEBUG
