// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip_registers.h"

VL_INLINE_OPT void Vid_stage_pip_registers___ico_sequent__TOP__id_stage_pip__reg_file__0(Vid_stage_pip_registers* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_registers___ico_sequent__TOP__id_stage_pip__reg_file__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_data_rs1 = ((0U == (IData)(vlSelfRef.rs1))
                               ? 0U : ((0x1eU >= (0x1fU 
                                                  & ((IData)(vlSelfRef.rs1) 
                                                     - (IData)(1U))))
                                        ? vlSelfRef.register_
                                       [(0x1fU & ((IData)(vlSelfRef.rs1) 
                                                  - (IData)(1U)))]
                                        : 0U));
    vlSelfRef.out_data_rs2 = ((0U == (IData)(vlSelfRef.rs2))
                               ? 0U : ((0x1eU >= (0x1fU 
                                                  & ((IData)(vlSelfRef.rs2) 
                                                     - (IData)(1U))))
                                        ? vlSelfRef.register_
                                       [(0x1fU & ((IData)(vlSelfRef.rs2) 
                                                  - (IData)(1U)))]
                                        : 0U));
}

VL_INLINE_OPT void Vid_stage_pip_registers___nba_sequent__TOP__id_stage_pip__reg_file__0(Vid_stage_pip_registers* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_registers___nba_sequent__TOP__id_stage_pip__reg_file__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__register___v0 = 0U;
    vlSelfRef.__VdlySet__register___v1 = 0U;
    vlSelfRef.__VdlySet__register___v2 = 0U;
    vlSelfRef.__VdlySet__register___v3 = 0U;
    vlSelfRef.__VdlySet__register___v4 = 0U;
    vlSelfRef.__VdlySet__register___v5 = 0U;
    vlSelfRef.__VdlySet__register___v6 = 0U;
    vlSelfRef.__VdlySet__register___v7 = 0U;
    vlSelfRef.__VdlySet__register___v8 = 0U;
    vlSelfRef.__VdlySet__register___v9 = 0U;
    vlSelfRef.__VdlySet__register___v10 = 0U;
    vlSelfRef.__VdlySet__register___v11 = 0U;
    vlSelfRef.__VdlySet__register___v12 = 0U;
    vlSelfRef.__VdlySet__register___v13 = 0U;
    vlSelfRef.__VdlySet__register___v14 = 0U;
    vlSelfRef.__VdlySet__register___v15 = 0U;
    vlSelfRef.__VdlySet__register___v16 = 0U;
    vlSelfRef.__VdlySet__register___v17 = 0U;
    vlSelfRef.__VdlySet__register___v18 = 0U;
    vlSelfRef.__VdlySet__register___v19 = 0U;
    vlSelfRef.__VdlySet__register___v20 = 0U;
    vlSelfRef.__VdlySet__register___v21 = 0U;
    vlSelfRef.__VdlySet__register___v22 = 0U;
    vlSelfRef.__VdlySet__register___v23 = 0U;
    vlSelfRef.__VdlySet__register___v24 = 0U;
    vlSelfRef.__VdlySet__register___v25 = 0U;
    vlSelfRef.__VdlySet__register___v26 = 0U;
    vlSelfRef.__VdlySet__register___v27 = 0U;
    vlSelfRef.__VdlySet__register___v28 = 0U;
    vlSelfRef.__VdlySet__register___v29 = 0U;
    vlSelfRef.__VdlySet__register___v30 = 0U;
    vlSelfRef.__VdlySet__register___v31 = 0U;
    if (vlSelfRef.rst) {
        if (((IData)(vlSelfRef.reg_write) & (0U != (IData)(vlSelfRef.rd)))) {
            vlSelfRef.__Vlvbound_hf3ed909f__0 = vlSelfRef.rd_data;
            if (VL_LIKELY(((0x1eU >= (0x1fU & ((IData)(vlSelfRef.rd) 
                                               - (IData)(1U))))))) {
                vlSelfRef.__VdlyVal__register___v0 
                    = vlSelfRef.__Vlvbound_hf3ed909f__0;
                vlSelfRef.__VdlyDim0__register___v0 
                    = (0x1fU & ((IData)(vlSelfRef.rd) 
                                - (IData)(1U)));
                vlSelfRef.__VdlySet__register___v0 = 1U;
            }
        }
    } else {
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v1 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v1 = 1U;
        vlSelfRef.i = 2U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v2 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v2 = 1U;
        vlSelfRef.i = 3U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v3 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v3 = 1U;
        vlSelfRef.i = 4U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v4 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v4 = 1U;
        vlSelfRef.i = 5U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v5 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v5 = 1U;
        vlSelfRef.i = 6U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v6 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v6 = 1U;
        vlSelfRef.i = 7U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v7 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v7 = 1U;
        vlSelfRef.i = 8U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v8 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v8 = 1U;
        vlSelfRef.i = 9U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v9 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v9 = 1U;
        vlSelfRef.i = 0xaU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v10 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v10 = 1U;
        vlSelfRef.i = 0xbU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v11 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v11 = 1U;
        vlSelfRef.i = 0xcU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v12 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v12 = 1U;
        vlSelfRef.i = 0xdU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v13 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v13 = 1U;
        vlSelfRef.i = 0xeU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v14 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v14 = 1U;
        vlSelfRef.i = 0xfU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v15 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v15 = 1U;
        vlSelfRef.i = 0x10U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v16 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v16 = 1U;
        vlSelfRef.i = 0x11U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v17 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v17 = 1U;
        vlSelfRef.i = 0x12U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v18 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v18 = 1U;
        vlSelfRef.i = 0x13U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v19 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v19 = 1U;
        vlSelfRef.i = 0x14U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v20 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v20 = 1U;
        vlSelfRef.i = 0x15U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v21 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v21 = 1U;
        vlSelfRef.i = 0x16U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v22 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v22 = 1U;
        vlSelfRef.i = 0x17U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v23 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v23 = 1U;
        vlSelfRef.i = 0x18U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v24 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v24 = 1U;
        vlSelfRef.i = 0x19U;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v25 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v25 = 1U;
        vlSelfRef.i = 0x1aU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v26 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v26 = 1U;
        vlSelfRef.i = 0x1bU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v27 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v27 = 1U;
        vlSelfRef.i = 0x1cU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v28 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v28 = 1U;
        vlSelfRef.i = 0x1dU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v29 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v29 = 1U;
        vlSelfRef.i = 0x1eU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v30 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v30 = 1U;
        vlSelfRef.i = 0x1fU;
        vlSelfRef.__Vlvbound_haf5f2db3__0 = 0U;
        vlSelfRef.__VdlyVal__register___v31 = vlSelfRef.__Vlvbound_haf5f2db3__0;
        vlSelfRef.__VdlySet__register___v31 = 1U;
        vlSelfRef.i = 0x20U;
    }
    if (vlSelfRef.__VdlySet__register___v0) {
        vlSelfRef.register_[vlSelfRef.__VdlyDim0__register___v0] 
            = vlSelfRef.__VdlyVal__register___v0;
    }
    if (vlSelfRef.__VdlySet__register___v1) {
        vlSelfRef.register_[0U] = vlSelfRef.__VdlyVal__register___v1;
    }
    if (vlSelfRef.__VdlySet__register___v2) {
        vlSelfRef.register_[1U] = vlSelfRef.__VdlyVal__register___v2;
    }
    if (vlSelfRef.__VdlySet__register___v3) {
        vlSelfRef.register_[2U] = vlSelfRef.__VdlyVal__register___v3;
    }
    if (vlSelfRef.__VdlySet__register___v4) {
        vlSelfRef.register_[3U] = vlSelfRef.__VdlyVal__register___v4;
    }
    if (vlSelfRef.__VdlySet__register___v5) {
        vlSelfRef.register_[4U] = vlSelfRef.__VdlyVal__register___v5;
    }
    if (vlSelfRef.__VdlySet__register___v6) {
        vlSelfRef.register_[5U] = vlSelfRef.__VdlyVal__register___v6;
    }
    if (vlSelfRef.__VdlySet__register___v7) {
        vlSelfRef.register_[6U] = vlSelfRef.__VdlyVal__register___v7;
    }
    if (vlSelfRef.__VdlySet__register___v8) {
        vlSelfRef.register_[7U] = vlSelfRef.__VdlyVal__register___v8;
    }
    if (vlSelfRef.__VdlySet__register___v9) {
        vlSelfRef.register_[8U] = vlSelfRef.__VdlyVal__register___v9;
    }
    if (vlSelfRef.__VdlySet__register___v10) {
        vlSelfRef.register_[9U] = vlSelfRef.__VdlyVal__register___v10;
    }
    if (vlSelfRef.__VdlySet__register___v11) {
        vlSelfRef.register_[0xaU] = vlSelfRef.__VdlyVal__register___v11;
    }
    if (vlSelfRef.__VdlySet__register___v12) {
        vlSelfRef.register_[0xbU] = vlSelfRef.__VdlyVal__register___v12;
    }
    if (vlSelfRef.__VdlySet__register___v13) {
        vlSelfRef.register_[0xcU] = vlSelfRef.__VdlyVal__register___v13;
    }
    if (vlSelfRef.__VdlySet__register___v14) {
        vlSelfRef.register_[0xdU] = vlSelfRef.__VdlyVal__register___v14;
    }
    if (vlSelfRef.__VdlySet__register___v15) {
        vlSelfRef.register_[0xeU] = vlSelfRef.__VdlyVal__register___v15;
    }
    if (vlSelfRef.__VdlySet__register___v16) {
        vlSelfRef.register_[0xfU] = vlSelfRef.__VdlyVal__register___v16;
    }
    if (vlSelfRef.__VdlySet__register___v17) {
        vlSelfRef.register_[0x10U] = vlSelfRef.__VdlyVal__register___v17;
    }
    if (vlSelfRef.__VdlySet__register___v18) {
        vlSelfRef.register_[0x11U] = vlSelfRef.__VdlyVal__register___v18;
    }
    if (vlSelfRef.__VdlySet__register___v19) {
        vlSelfRef.register_[0x12U] = vlSelfRef.__VdlyVal__register___v19;
    }
    if (vlSelfRef.__VdlySet__register___v20) {
        vlSelfRef.register_[0x13U] = vlSelfRef.__VdlyVal__register___v20;
    }
    if (vlSelfRef.__VdlySet__register___v21) {
        vlSelfRef.register_[0x14U] = vlSelfRef.__VdlyVal__register___v21;
    }
    if (vlSelfRef.__VdlySet__register___v22) {
        vlSelfRef.register_[0x15U] = vlSelfRef.__VdlyVal__register___v22;
    }
    if (vlSelfRef.__VdlySet__register___v23) {
        vlSelfRef.register_[0x16U] = vlSelfRef.__VdlyVal__register___v23;
    }
    if (vlSelfRef.__VdlySet__register___v24) {
        vlSelfRef.register_[0x17U] = vlSelfRef.__VdlyVal__register___v24;
    }
    if (vlSelfRef.__VdlySet__register___v25) {
        vlSelfRef.register_[0x18U] = vlSelfRef.__VdlyVal__register___v25;
    }
    if (vlSelfRef.__VdlySet__register___v26) {
        vlSelfRef.register_[0x19U] = vlSelfRef.__VdlyVal__register___v26;
    }
    if (vlSelfRef.__VdlySet__register___v27) {
        vlSelfRef.register_[0x1aU] = vlSelfRef.__VdlyVal__register___v27;
    }
    if (vlSelfRef.__VdlySet__register___v28) {
        vlSelfRef.register_[0x1bU] = vlSelfRef.__VdlyVal__register___v28;
    }
    if (vlSelfRef.__VdlySet__register___v29) {
        vlSelfRef.register_[0x1cU] = vlSelfRef.__VdlyVal__register___v29;
    }
    if (vlSelfRef.__VdlySet__register___v30) {
        vlSelfRef.register_[0x1dU] = vlSelfRef.__VdlyVal__register___v30;
    }
    if (vlSelfRef.__VdlySet__register___v31) {
        vlSelfRef.register_[0x1eU] = vlSelfRef.__VdlyVal__register___v31;
    }
    vlSelfRef.out_data_rs1 = ((0U == (IData)(vlSelfRef.rs1))
                               ? 0U : ((0x1eU >= (0x1fU 
                                                  & ((IData)(vlSelfRef.rs1) 
                                                     - (IData)(1U))))
                                        ? vlSelfRef.register_
                                       [(0x1fU & ((IData)(vlSelfRef.rs1) 
                                                  - (IData)(1U)))]
                                        : 0U));
    vlSelfRef.out_data_rs2 = ((0U == (IData)(vlSelfRef.rs2))
                               ? 0U : ((0x1eU >= (0x1fU 
                                                  & ((IData)(vlSelfRef.rs2) 
                                                     - (IData)(1U))))
                                        ? vlSelfRef.register_
                                       [(0x1fU & ((IData)(vlSelfRef.rs2) 
                                                  - (IData)(1U)))]
                                        : 0U));
}
