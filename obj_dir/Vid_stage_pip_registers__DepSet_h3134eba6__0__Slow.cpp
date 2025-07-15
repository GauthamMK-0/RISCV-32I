// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip_registers.h"

VL_ATTR_COLD void Vid_stage_pip_registers___stl_sequent__TOP__id_stage_pip__reg_file__0(Vid_stage_pip_registers* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_registers___stl_sequent__TOP__id_stage_pip__reg_file__0\n"); );
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

VL_ATTR_COLD void Vid_stage_pip_registers___ctor_var_reset(Vid_stage_pip_registers* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_registers___ctor_var_reset\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->reg_write = VL_RAND_RESET_I(1);
    vlSelf->rd_data = VL_RAND_RESET_I(32);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->out_data_rs1 = VL_RAND_RESET_I(32);
    vlSelf->out_data_rs2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->register_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->i = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_hf3ed909f__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_haf5f2db3__0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__register___v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__register___v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__register___v0 = 0;
    vlSelf->__VdlyVal__register___v1 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v1 = 0;
    vlSelf->__VdlyVal__register___v2 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v2 = 0;
    vlSelf->__VdlyVal__register___v3 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v3 = 0;
    vlSelf->__VdlyVal__register___v4 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v4 = 0;
    vlSelf->__VdlyVal__register___v5 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v5 = 0;
    vlSelf->__VdlyVal__register___v6 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v6 = 0;
    vlSelf->__VdlyVal__register___v7 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v7 = 0;
    vlSelf->__VdlyVal__register___v8 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v8 = 0;
    vlSelf->__VdlyVal__register___v9 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v9 = 0;
    vlSelf->__VdlyVal__register___v10 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v10 = 0;
    vlSelf->__VdlyVal__register___v11 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v11 = 0;
    vlSelf->__VdlyVal__register___v12 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v12 = 0;
    vlSelf->__VdlyVal__register___v13 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v13 = 0;
    vlSelf->__VdlyVal__register___v14 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v14 = 0;
    vlSelf->__VdlyVal__register___v15 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v15 = 0;
    vlSelf->__VdlyVal__register___v16 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v16 = 0;
    vlSelf->__VdlyVal__register___v17 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v17 = 0;
    vlSelf->__VdlyVal__register___v18 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v18 = 0;
    vlSelf->__VdlyVal__register___v19 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v19 = 0;
    vlSelf->__VdlyVal__register___v20 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v20 = 0;
    vlSelf->__VdlyVal__register___v21 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v21 = 0;
    vlSelf->__VdlyVal__register___v22 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v22 = 0;
    vlSelf->__VdlyVal__register___v23 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v23 = 0;
    vlSelf->__VdlyVal__register___v24 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v24 = 0;
    vlSelf->__VdlyVal__register___v25 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v25 = 0;
    vlSelf->__VdlyVal__register___v26 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v26 = 0;
    vlSelf->__VdlyVal__register___v27 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v27 = 0;
    vlSelf->__VdlyVal__register___v28 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v28 = 0;
    vlSelf->__VdlyVal__register___v29 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v29 = 0;
    vlSelf->__VdlyVal__register___v30 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v30 = 0;
    vlSelf->__VdlyVal__register___v31 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__register___v31 = 0;
}
