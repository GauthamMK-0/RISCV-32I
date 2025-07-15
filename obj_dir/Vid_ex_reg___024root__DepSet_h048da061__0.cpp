// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_ex_reg.h for the primary calling header

#include "Vid_ex_reg__pch.h"
#include "Vid_ex_reg__Syms.h"
#include "Vid_ex_reg___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vid_ex_reg___024root___dump_triggers__act(Vid_ex_reg___024root* vlSelf);
#endif  // VL_DEBUG

void Vid_ex_reg___024root___eval_triggers__act(Vid_ex_reg___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vid_ex_reg___024root___eval_triggers__act\n"); );
    Vid_ex_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vid_ex_reg___024root___dump_triggers__act(vlSelf);
    }
#endif
}
