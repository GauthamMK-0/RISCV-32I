// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_ex_reg.h for the primary calling header

#include "Vid_ex_reg__pch.h"
#include "Vid_ex_reg___024root.h"

void Vid_ex_reg___024root___eval_act(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_act\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vid_ex_reg___024root___nba_sequent__TOP__0(Vid_ex_reg___024root* vlSelf);

void Vid_ex_reg___024root___eval_nba(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_nba\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vid_ex_reg___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vid_ex_reg___024root___nba_sequent__TOP__0(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___nba_sequent__TOP__0\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        if (vlSelfRef.id_ex_flush) {
            vlSelfRef.mem_write_out = 0U;
            vlSelfRef.mem_read_out = 0U;
            vlSelfRef.branch_ctrl_out = 0U;
            vlSelfRef.alu_ctrl_out = 0U;
            vlSelfRef.rd_out = 0U;
            vlSelfRef.rs2_out = 0U;
            vlSelfRef.imm_out = 0U;
            vlSelfRef.rs2_data_out = 0U;
            vlSelfRef.rs1_data_out = 0U;
            vlSelfRef.reg_write_out = 0U;
            vlSelfRef.rs1_out = 0U;
            vlSelfRef.mem_to_reg_out = 0U;
            vlSelfRef.alu_src_out = 0U;
            vlSelfRef.branch_out = 0U;
            vlSelfRef.jal_out = 0U;
            vlSelfRef.jalr_out = 0U;
        } else if (vlSelfRef.id_ex_write) {
            vlSelfRef.mem_write_out = vlSelfRef.mem_write_in;
            vlSelfRef.mem_read_out = vlSelfRef.mem_read_in;
            vlSelfRef.branch_ctrl_out = vlSelfRef.branch_ctrl_in;
            vlSelfRef.alu_ctrl_out = vlSelfRef.alu_ctrl_in;
            vlSelfRef.rd_out = vlSelfRef.rd_in;
            vlSelfRef.rs2_out = vlSelfRef.rs2_in;
            vlSelfRef.imm_out = vlSelfRef.imm_in;
            vlSelfRef.rs2_data_out = vlSelfRef.rs2_data_in;
            vlSelfRef.rs1_data_out = vlSelfRef.rs1_data_in;
            vlSelfRef.reg_write_out = vlSelfRef.reg_write_in;
            vlSelfRef.rs1_out = vlSelfRef.rs1_in;
            vlSelfRef.mem_to_reg_out = vlSelfRef.mem_to_reg_in;
            vlSelfRef.alu_src_out = vlSelfRef.alu_src_in;
            vlSelfRef.branch_out = vlSelfRef.branch_in;
            vlSelfRef.jal_out = vlSelfRef.jal_in;
            vlSelfRef.jalr_out = vlSelfRef.jalr_in;
        }
    } else {
        vlSelfRef.mem_write_out = 0U;
        vlSelfRef.mem_read_out = 0U;
        vlSelfRef.branch_ctrl_out = 0U;
        vlSelfRef.alu_ctrl_out = 0U;
        vlSelfRef.rd_out = 0U;
        vlSelfRef.rs2_out = 0U;
        vlSelfRef.imm_out = 0U;
        vlSelfRef.rs2_data_out = 0U;
        vlSelfRef.rs1_data_out = 0U;
        vlSelfRef.reg_write_out = 0U;
        vlSelfRef.rs1_out = 0U;
        vlSelfRef.mem_to_reg_out = 0U;
        vlSelfRef.alu_src_out = 0U;
        vlSelfRef.branch_out = 0U;
        vlSelfRef.jal_out = 0U;
        vlSelfRef.jalr_out = 0U;
    }
}

void Vid_ex_reg___024root___eval_triggers__act(Vid_ex_reg___024root* vlSelf);

bool Vid_ex_reg___024root___eval_phase__act(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_phase__act\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vid_ex_reg___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vid_ex_reg___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vid_ex_reg___024root___eval_phase__nba(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_phase__nba\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vid_ex_reg___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_ex_reg___024root___dump_triggers__nba(Vid_ex_reg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_ex_reg___024root___dump_triggers__act(Vid_ex_reg___024root* vlSelf);
#endif  // VL_DEBUG

void Vid_ex_reg___024root___eval(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vid_ex_reg___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/id_ex_reg.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vid_ex_reg___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/id_ex_reg.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vid_ex_reg___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vid_ex_reg___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vid_ex_reg___024root___eval_debug_assertions(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_debug_assertions\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.id_ex_write & 0xfeU)))) {
        Verilated::overWidthError("id_ex_write");}
    if (VL_UNLIKELY(((vlSelfRef.id_ex_flush & 0xfeU)))) {
        Verilated::overWidthError("id_ex_flush");}
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
}
#endif  // VL_DEBUG
