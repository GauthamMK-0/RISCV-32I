// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwb_stage_pip.h for the primary calling header

#include "Vwb_stage_pip__pch.h"
#include "Vwb_stage_pip__Syms.h"
#include "Vwb_stage_pip___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vwb_stage_pip___024root___dump_triggers__stl(Vwb_stage_pip___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vwb_stage_pip___024root___eval_triggers__stl(Vwb_stage_pip___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwb_stage_pip___024root___eval_triggers__stl\n"); );
    Vwb_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vwb_stage_pip___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
