// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwb_stage_pip.h for the primary calling header

#include "Vwb_stage_pip__pch.h"
#include "Vwb_stage_pip___024root.h"

void Vwb_stage_pip___024root___ico_sequent__TOP__0(Vwb_stage_pip___024root* vlSelf);

void Vwb_stage_pip___024root___eval_ico(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_ico\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vwb_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vwb_stage_pip___024root___ico_sequent__TOP__0(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___ico_sequent__TOP__0\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.wb_stage_pip__DOT__clk = vlSelfRef.clk;
    vlSelfRef.wb_stage_pip__DOT__rst = vlSelfRef.rst;
    vlSelfRef.wb_stage_pip__DOT__pc_in = vlSelfRef.pc_in;
    vlSelfRef.wb_stage_pip__DOT__alu_result_in = vlSelfRef.alu_result_in;
    vlSelfRef.wb_stage_pip__DOT__mem_data_in = vlSelfRef.mem_data_in;
    vlSelfRef.wb_stage_pip__DOT__rd_in = vlSelfRef.rd_in;
    vlSelfRef.wb_stage_pip__DOT__wb_sel = vlSelfRef.wb_sel;
    vlSelfRef.wb_stage_pip__DOT__reg_write_in = vlSelfRef.reg_write_in;
    vlSelfRef.wb_stage_pip__DOT__mem_to_reg_in = vlSelfRef.mem_to_reg_in;
    vlSelfRef.wb_stage_pip__DOT__pc_4 = ((IData)(4U) 
                                         + vlSelfRef.pc_in);
    vlSelfRef.reg_data_out = vlSelfRef.wb_stage_pip__DOT__reg_data_out;
    vlSelfRef.rd_out = vlSelfRef.wb_stage_pip__DOT__rd_out;
    vlSelfRef.reg_write_out = vlSelfRef.wb_stage_pip__DOT__reg_write_out;
}

void Vwb_stage_pip___024root___eval_triggers__ico(Vwb_stage_pip___024root* vlSelf);

bool Vwb_stage_pip___024root___eval_phase__ico(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_phase__ico\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vwb_stage_pip___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vwb_stage_pip___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vwb_stage_pip___024root___eval_act(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_act\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vwb_stage_pip___024root___nba_sequent__TOP__0(Vwb_stage_pip___024root* vlSelf);

void Vwb_stage_pip___024root___eval_nba(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_nba\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vwb_stage_pip___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vwb_stage_pip___024root___nba_sequent__TOP__0(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___nba_sequent__TOP__0\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.wb_stage_pip__DOT__rd_out = 0U;
        vlSelfRef.wb_stage_pip__DOT__reg_data_out = 0U;
    } else {
        vlSelfRef.wb_stage_pip__DOT__rd_out = vlSelfRef.rd_in;
        vlSelfRef.wb_stage_pip__DOT__reg_data_out = 
            ((0U == (IData)(vlSelfRef.wb_sel)) ? vlSelfRef.alu_result_in
              : ((1U == (IData)(vlSelfRef.wb_sel)) ? vlSelfRef.mem_data_in
                  : ((2U == (IData)(vlSelfRef.wb_sel))
                      ? vlSelfRef.wb_stage_pip__DOT__pc_4
                      : 0U)));
    }
    vlSelfRef.wb_stage_pip__DOT__reg_write_out = ((1U 
                                                   & (~ (IData)(vlSelfRef.rst))) 
                                                  && (IData)(vlSelfRef.reg_write_in));
    vlSelfRef.rd_out = vlSelfRef.wb_stage_pip__DOT__rd_out;
    vlSelfRef.reg_write_out = vlSelfRef.wb_stage_pip__DOT__reg_write_out;
    vlSelfRef.reg_data_out = vlSelfRef.wb_stage_pip__DOT__reg_data_out;
}

void Vwb_stage_pip___024root___eval_triggers__act(Vwb_stage_pip___024root* vlSelf);

bool Vwb_stage_pip___024root___eval_phase__act(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_phase__act\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vwb_stage_pip___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vwb_stage_pip___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vwb_stage_pip___024root___eval_phase__nba(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_phase__nba\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vwb_stage_pip___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__ico(Vwb_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__nba(Vwb_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__act(Vwb_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG

void Vwb_stage_pip___024root___eval(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vwb_stage_pip___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/wb_stage_pip.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vwb_stage_pip___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vwb_stage_pip___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/wb_stage_pip.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vwb_stage_pip___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/wb_stage_pip.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vwb_stage_pip___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vwb_stage_pip___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vwb_stage_pip___024root___eval_debug_assertions(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_debug_assertions\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.rd_in & 0xe0U)))) {
        Verilated::overWidthError("rd_in");}
    if (VL_UNLIKELY(((vlSelfRef.wb_sel & 0xfcU)))) {
        Verilated::overWidthError("wb_sel");}
    if (VL_UNLIKELY(((vlSelfRef.reg_write_in & 0xfeU)))) {
        Verilated::overWidthError("reg_write_in");}
    if (VL_UNLIKELY(((vlSelfRef.mem_to_reg_in & 0xfeU)))) {
        Verilated::overWidthError("mem_to_reg_in");}
}
#endif  // VL_DEBUG
