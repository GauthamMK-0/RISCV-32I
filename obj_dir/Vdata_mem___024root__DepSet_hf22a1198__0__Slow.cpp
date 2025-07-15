// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"
#include "Vdata_mem__Syms.h"
#include "Vdata_mem___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__stl(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdata_mem___024root___eval_triggers__stl(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_triggers__stl\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdata_mem___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
