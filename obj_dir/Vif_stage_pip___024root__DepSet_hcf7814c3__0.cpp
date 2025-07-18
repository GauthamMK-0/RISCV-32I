// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vif_stage_pip.h for the primary calling header

#include "Vif_stage_pip__pch.h"
#include "Vif_stage_pip___024root.h"

void Vif_stage_pip___024root___ico_sequent__TOP__0(Vif_stage_pip___024root* vlSelf);

void Vif_stage_pip___024root___eval_ico(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_ico\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vif_stage_pip___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vif_stage_pip___024root___ico_sequent__TOP__0(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___ico_sequent__TOP__0\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.instr_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.if_stage_pip__DOT__instr_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pc_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.if_stage_pip__DOT__pc_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.if_stage_pip__DOT__pc_write = vlSelfRef.pc_write;
    vlSelfRef.if_stage_pip__DOT__if_id_write = vlSelfRef.if_id_write;
    vlSelfRef.if_stage_pip__DOT__if_id_flush = vlSelfRef.if_id_flush;
    vlSelfRef.if_stage_pip__DOT__jump = vlSelfRef.jump;
    vlSelfRef.if_stage_pip__DOT__branch_taken = vlSelfRef.branch_taken;
    vlSelfRef.if_stage_pip__DOT__branch_target = vlSelfRef.branch_target;
    vlSelfRef.if_stage_pip__DOT__jump_target = vlSelfRef.jump_target;
    vlSelfRef.if_stage_pip__DOT__instr = vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.if_stage_pip__DOT__clk = vlSelfRef.clk;
    vlSelfRef.if_stage_pip__DOT__rst = vlSelfRef.rst;
    vlSelfRef.if_stage_pip__DOT__current_pc = vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__pc_4 
        = ((IData)(4U) + vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc);
    vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__pc_write 
        = vlSelfRef.if_stage_pip__DOT__pc_write;
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__if_id_write 
        = vlSelfRef.if_stage_pip__DOT__if_id_write;
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__if_id_flush 
        = vlSelfRef.if_stage_pip__DOT__if_id_flush;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__jump 
        = vlSelfRef.if_stage_pip__DOT__jump;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__branch_taken 
        = vlSelfRef.if_stage_pip__DOT__branch_taken;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__branch_target 
        = vlSelfRef.if_stage_pip__DOT__branch_target;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__jump_target 
        = vlSelfRef.if_stage_pip__DOT__jump_target;
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_in 
        = vlSelfRef.if_stage_pip__DOT__instr;
    vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__clk 
        = vlSelfRef.if_stage_pip__DOT__clk;
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__clk 
        = vlSelfRef.if_stage_pip__DOT__clk;
    vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__rst 
        = vlSelfRef.if_stage_pip__DOT__rst;
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__rst 
        = vlSelfRef.if_stage_pip__DOT__rst;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__addr 
        = vlSelfRef.if_stage_pip__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__current_pc 
        = vlSelfRef.if_stage_pip__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_in 
        = vlSelfRef.if_stage_pip__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__next_pc 
        = ((IData)(vlSelfRef.jump) ? vlSelfRef.jump_target
            : ((IData)(vlSelfRef.branch_taken) ? vlSelfRef.branch_target
                : vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__pc_4));
    vlSelfRef.if_stage_pip__DOT__next_pc = vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__next_pc;
    vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__next_pc 
        = vlSelfRef.if_stage_pip__DOT__next_pc;
}

void Vif_stage_pip___024root___eval_triggers__ico(Vif_stage_pip___024root* vlSelf);

bool Vif_stage_pip___024root___eval_phase__ico(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_phase__ico\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vif_stage_pip___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vif_stage_pip___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vif_stage_pip___024root___eval_act(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_act\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vif_stage_pip___024root___nba_sequent__TOP__0(Vif_stage_pip___024root* vlSelf);

void Vif_stage_pip___024root___eval_nba(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_nba\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vif_stage_pip___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vif_stage_pip___024root___nba_sequent__TOP__0(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___nba_sequent__TOP__0\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out = 0U;
        vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out = 0U;
        vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc = 0U;
    } else {
        if (vlSelfRef.if_id_flush) {
            vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out = 0U;
            vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out = 0U;
        } else if (vlSelfRef.if_id_write) {
            vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out 
                = vlSelfRef.if_stage_pip__DOT__instr;
            vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out 
                = vlSelfRef.if_stage_pip__DOT__current_pc;
        }
        if (vlSelfRef.pc_write) {
            vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc 
                = vlSelfRef.if_stage_pip__DOT__next_pc;
        }
    }
    vlSelfRef.instr_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.if_stage_pip__DOT__instr_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out;
    vlSelfRef.pc_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.if_stage_pip__DOT__pc_out = vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.if_stage_pip__DOT__instr = vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__memory
        [(0xffU & (vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc 
                   >> 2U))];
    vlSelfRef.if_stage_pip__DOT__current_pc = vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__pc_4 
        = ((IData)(4U) + vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc);
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_in 
        = vlSelfRef.if_stage_pip__DOT__instr;
    vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__addr 
        = vlSelfRef.if_stage_pip__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__current_pc 
        = vlSelfRef.if_stage_pip__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_in 
        = vlSelfRef.if_stage_pip__DOT__current_pc;
    vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__next_pc 
        = ((IData)(vlSelfRef.jump) ? vlSelfRef.jump_target
            : ((IData)(vlSelfRef.branch_taken) ? vlSelfRef.branch_target
                : vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__pc_4));
    vlSelfRef.if_stage_pip__DOT__next_pc = vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__next_pc;
    vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__next_pc 
        = vlSelfRef.if_stage_pip__DOT__next_pc;
}

void Vif_stage_pip___024root___eval_triggers__act(Vif_stage_pip___024root* vlSelf);

bool Vif_stage_pip___024root___eval_phase__act(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_phase__act\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vif_stage_pip___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vif_stage_pip___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vif_stage_pip___024root___eval_phase__nba(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_phase__nba\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vif_stage_pip___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__ico(Vif_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__nba(Vif_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vif_stage_pip___024root___dump_triggers__act(Vif_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG

void Vif_stage_pip___024root___eval(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vif_stage_pip___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/if_stage_pip.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vif_stage_pip___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vif_stage_pip___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/if_stage_pip.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vif_stage_pip___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/if_stage_pip.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vif_stage_pip___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vif_stage_pip___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vif_stage_pip___024root___eval_debug_assertions(Vif_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root___eval_debug_assertions\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.pc_write & 0xfeU)))) {
        Verilated::overWidthError("pc_write");}
    if (VL_UNLIKELY(((vlSelfRef.if_id_write & 0xfeU)))) {
        Verilated::overWidthError("if_id_write");}
    if (VL_UNLIKELY(((vlSelfRef.if_id_flush & 0xfeU)))) {
        Verilated::overWidthError("if_id_flush");}
    if (VL_UNLIKELY(((vlSelfRef.jump & 0xfeU)))) {
        Verilated::overWidthError("jump");}
    if (VL_UNLIKELY(((vlSelfRef.branch_taken & 0xfeU)))) {
        Verilated::overWidthError("branch_taken");}
}
#endif  // VL_DEBUG
