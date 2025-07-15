// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "Vdata_mem__pch.h"
#include "Vdata_mem___024root.h"

void Vdata_mem___024root___ico_sequent__TOP__0(Vdata_mem___024root* vlSelf);

void Vdata_mem___024root___eval_ico(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_ico\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdata_mem___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vdata_mem__ConstPool__TABLE_hfaa174bc_0;

VL_INLINE_OPT void Vdata_mem___024root___ico_sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ico_sequent__TOP__0\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.alu_result_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.mem_stage_pip__DOT__alu_result_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.mem_data_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.mem_stage_pip__DOT__mem_data_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.rd_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.mem_stage_pip__DOT__rd_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.reg_write_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.mem_stage_pip__DOT__reg_write_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.mem_to_reg_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.mem_stage_pip__DOT__mem_to_reg_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.mem_stage_pip__DOT__rst = vlSelfRef.rst;
    vlSelfRef.mem_stage_pip__DOT__rs2_data_in = vlSelfRef.rs2_data_in;
    vlSelfRef.mem_stage_pip__DOT__rd_in = vlSelfRef.rd_in;
    vlSelfRef.mem_stage_pip__DOT__mem_read_in = vlSelfRef.mem_read_in;
    vlSelfRef.mem_stage_pip__DOT__mem_write_in = vlSelfRef.mem_write_in;
    vlSelfRef.mem_stage_pip__DOT__reg_write_in = vlSelfRef.reg_write_in;
    vlSelfRef.mem_stage_pip__DOT__mem_to_reg_in = vlSelfRef.mem_to_reg_in;
    vlSelfRef.mem_stage_pip__DOT__clk = vlSelfRef.clk;
    vlSelfRef.mem_stage_pip__DOT__alu_result_in = vlSelfRef.alu_result_in;
    vlSelfRef.mem_stage_pip__DOT__funct3_in = vlSelfRef.funct3_in;
    vlSelfRef.mem_stage_pip__DOT__read_data = vlSelfRef.mem_stage_pip__DOT__memory__DOT__read_data;
    vlSelfRef.mem_stage_pip__DOT__addr_lsb = (3U & vlSelfRef.alu_result_in);
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rst 
        = vlSelfRef.mem_stage_pip__DOT__rst;
    vlSelfRef.mem_stage_pip__DOT__memory__DOT__write_data 
        = vlSelfRef.mem_stage_pip__DOT__rs2_data_in;
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_in 
        = vlSelfRef.mem_stage_pip__DOT__rd_in;
    vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem_read 
        = vlSelfRef.mem_stage_pip__DOT__mem_read_in;
    vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem_write 
        = vlSelfRef.mem_stage_pip__DOT__mem_write_in;
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_in 
        = vlSelfRef.mem_stage_pip__DOT__reg_write_in;
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_in 
        = vlSelfRef.mem_stage_pip__DOT__mem_to_reg_in;
    vlSelfRef.mem_stage_pip__DOT__memory__DOT__clk 
        = vlSelfRef.mem_stage_pip__DOT__clk;
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__clk 
        = vlSelfRef.mem_stage_pip__DOT__clk;
    vlSelfRef.mem_stage_pip__DOT__memory__DOT__addr 
        = vlSelfRef.mem_stage_pip__DOT__alu_result_in;
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_in 
        = vlSelfRef.mem_stage_pip__DOT__alu_result_in;
    vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__funct3 
        = vlSelfRef.mem_stage_pip__DOT__funct3_in;
    vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__funct3 
        = vlSelfRef.mem_stage_pip__DOT__funct3_in;
    vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_data 
        = vlSelfRef.mem_stage_pip__DOT__read_data;
    vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__addr_lsb 
        = vlSelfRef.mem_stage_pip__DOT__addr_lsb;
    vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__addr_lsb 
        = vlSelfRef.mem_stage_pip__DOT__addr_lsb;
    vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_out 
        = ((4U & (IData)(vlSelfRef.funct3_in)) ? ((2U 
                                                   & (IData)(vlSelfRef.funct3_in))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.funct3_in))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                     ? 
                                                    (0xffffU 
                                                     & vlSelfRef.mem_stage_pip__DOT__read_data)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                      ? 
                                                     (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                      >> 0x10U)
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                      ? 
                                                     (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                      >> 0x18U)
                                                      : 
                                                     (0xffU 
                                                      & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                         >> 0x10U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                         >> 8U))
                                                      : 
                                                     (0xffU 
                                                      & vlSelfRef.mem_stage_pip__DOT__read_data)))))
            : ((2U & (IData)(vlSelfRef.funct3_in)) ? 
               ((1U & (IData)(vlSelfRef.funct3_in))
                 ? 0U : vlSelfRef.mem_stage_pip__DOT__read_data)
                : ((1U & (IData)(vlSelfRef.funct3_in))
                    ? ((0U == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                        ? (((- (IData)((1U & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.mem_stage_pip__DOT__read_data))
                        : ((2U == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                            ? (((- (IData)((vlSelfRef.mem_stage_pip__DOT__read_data 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelfRef.mem_stage_pip__DOT__read_data 
                                             >> 0x10U))
                            : 0U)) : ((2U & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                       ? ((1U & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                           >> 0x1fU))) 
                                               << 8U) 
                                              | (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                 >> 0x18U))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                              >> 0x17U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                    >> 0x10U))))
                                       : ((1U & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                              >> 0xfU)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                    >> 8U)))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.mem_stage_pip__DOT__read_data)))))));
    __Vtableidx1 = (((IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb) 
                     << 3U) | (IData)(vlSelfRef.funct3_in));
    vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__byte_enable 
        = Vdata_mem__ConstPool__TABLE_hfaa174bc_0[__Vtableidx1];
    vlSelfRef.mem_stage_pip__DOT__mem_data = vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_out;
    vlSelfRef.mem_stage_pip__DOT__byte_enable = vlSelfRef.mem_stage_pip__DOT__byte_mask__DOT__byte_enable;
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_in 
        = vlSelfRef.mem_stage_pip__DOT__mem_data;
    vlSelfRef.mem_stage_pip__DOT__memory__DOT__byte_enable 
        = vlSelfRef.mem_stage_pip__DOT__byte_enable;
}

void Vdata_mem___024root___eval_triggers__ico(Vdata_mem___024root* vlSelf);

bool Vdata_mem___024root___eval_phase__ico(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__ico\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdata_mem___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdata_mem___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdata_mem___024root___eval_act(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_act\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdata_mem___024root___nba_sequent__TOP__0(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___nba_sequent__TOP__1(Vdata_mem___024root* vlSelf);
void Vdata_mem___024root___nba_sequent__TOP__2(Vdata_mem___024root* vlSelf);

void Vdata_mem___024root___eval_nba(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_nba\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdata_mem___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vdata_mem___024root___nba_sequent__TOP__0(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___nba_sequent__TOP__0\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v0;
    __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v0;
    __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v0;
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v1;
    __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v1;
    __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v1;
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v2;
    __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v2;
    __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v2;
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v3;
    __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v3 = 0;
    SData/*9:0*/ __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v3;
    __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v3;
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v3 = 0;
    // Body
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v0 = 0U;
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v1 = 0U;
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v2 = 0U;
    __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v3 = 0U;
    if (vlSelfRef.mem_write_in) {
        if ((1U & (IData)(vlSelfRef.mem_stage_pip__DOT__byte_enable))) {
            __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v0 
                = (0xffU & vlSelfRef.rs2_data_in);
            __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v0 
                = (0x3ffU & (vlSelfRef.alu_result_in 
                             >> 2U));
            __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.mem_stage_pip__DOT__byte_enable))) {
            __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v1 
                = (0xffU & (vlSelfRef.rs2_data_in >> 8U));
            __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v1 
                = (0x3ffU & (vlSelfRef.alu_result_in 
                             >> 2U));
            __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.mem_stage_pip__DOT__byte_enable))) {
            __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v2 
                = (0xffU & (vlSelfRef.rs2_data_in >> 0x10U));
            __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v2 
                = (0x3ffU & (vlSelfRef.alu_result_in 
                             >> 2U));
            __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.mem_stage_pip__DOT__byte_enable))) {
            __VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v3 
                = (vlSelfRef.rs2_data_in >> 0x18U);
            __VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v3 
                = (0x3ffU & (vlSelfRef.alu_result_in 
                             >> 2U));
            __VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v3 = 1U;
        }
    }
    vlSelfRef.mem_stage_pip__DOT__memory__DOT__read_data 
        = ((IData)(vlSelfRef.mem_read_in) ? vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem
           [(0x3ffU & (vlSelfRef.alu_result_in >> 2U))]
            : 0U);
    if (__VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v0) {
        vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem[__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem
                [__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v0]) 
               | (IData)(__VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v0));
    }
    if (__VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v1) {
        vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem[__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem
                [__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v2) {
        vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem[__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem
                [__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__mem_stage_pip__DOT__memory__DOT__mem__v3) {
        vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem[__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.mem_stage_pip__DOT__memory__DOT__mem
                [__VdlyDim0__mem_stage_pip__DOT__memory__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__mem_stage_pip__DOT__memory__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.mem_stage_pip__DOT__read_data = vlSelfRef.mem_stage_pip__DOT__memory__DOT__read_data;
    vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_data 
        = vlSelfRef.mem_stage_pip__DOT__read_data;
    vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_out 
        = ((4U & (IData)(vlSelfRef.funct3_in)) ? ((2U 
                                                   & (IData)(vlSelfRef.funct3_in))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.funct3_in))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                     ? 
                                                    (0xffffU 
                                                     & vlSelfRef.mem_stage_pip__DOT__read_data)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                      ? 
                                                     (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                      >> 0x10U)
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                      ? 
                                                     (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                      >> 0x18U)
                                                      : 
                                                     (0xffU 
                                                      & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                         >> 0x10U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                         >> 8U))
                                                      : 
                                                     (0xffU 
                                                      & vlSelfRef.mem_stage_pip__DOT__read_data)))))
            : ((2U & (IData)(vlSelfRef.funct3_in)) ? 
               ((1U & (IData)(vlSelfRef.funct3_in))
                 ? 0U : vlSelfRef.mem_stage_pip__DOT__read_data)
                : ((1U & (IData)(vlSelfRef.funct3_in))
                    ? ((0U == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                        ? (((- (IData)((1U & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.mem_stage_pip__DOT__read_data))
                        : ((2U == (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                            ? (((- (IData)((vlSelfRef.mem_stage_pip__DOT__read_data 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSelfRef.mem_stage_pip__DOT__read_data 
                                             >> 0x10U))
                            : 0U)) : ((2U & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                       ? ((1U & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                           >> 0x1fU))) 
                                               << 8U) 
                                              | (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                 >> 0x18U))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                              >> 0x17U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                    >> 0x10U))))
                                       : ((1U & (IData)(vlSelfRef.mem_stage_pip__DOT__addr_lsb))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                              >> 0xfU)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                    >> 8U)))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.mem_stage_pip__DOT__read_data 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.mem_stage_pip__DOT__read_data)))))));
}

VL_INLINE_OPT void Vdata_mem___024root___nba_sequent__TOP__1(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___nba_sequent__TOP__1\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.reg_write_in));
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.mem_to_reg_in));
    if (vlSelfRef.rst) {
        vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out = 0U;
        vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out = 0U;
        vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out = 0U;
    } else {
        vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out 
            = vlSelfRef.rd_in;
        vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out 
            = vlSelfRef.alu_result_in;
        vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out 
            = vlSelfRef.mem_stage_pip__DOT__mem_data;
    }
    vlSelfRef.reg_write_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.mem_stage_pip__DOT__reg_write_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__reg_write_out;
    vlSelfRef.mem_to_reg_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.mem_stage_pip__DOT__mem_to_reg_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_to_reg_out;
    vlSelfRef.rd_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.mem_stage_pip__DOT__rd_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__rd_out;
    vlSelfRef.alu_result_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.mem_stage_pip__DOT__alu_result_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__alu_result_out;
    vlSelfRef.mem_data_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out;
    vlSelfRef.mem_stage_pip__DOT__mem_data_out = vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_out;
}

VL_INLINE_OPT void Vdata_mem___024root___nba_sequent__TOP__2(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___nba_sequent__TOP__2\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_stage_pip__DOT__mem_data = vlSelfRef.mem_stage_pip__DOT__mem_access__DOT__mem_out;
    vlSelfRef.mem_stage_pip__DOT__memwb_register__DOT__mem_data_in 
        = vlSelfRef.mem_stage_pip__DOT__mem_data;
}

void Vdata_mem___024root___eval_triggers__act(Vdata_mem___024root* vlSelf);

bool Vdata_mem___024root___eval_phase__act(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__act\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdata_mem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdata_mem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdata_mem___024root___eval_phase__nba(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_phase__nba\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdata_mem___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__ico(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__nba(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_mem___024root___dump_triggers__act(Vdata_mem___024root* vlSelf);
#endif  // VL_DEBUG

void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdata_mem___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/mem_stage_pip.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdata_mem___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdata_mem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/mem_stage_pip.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdata_mem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/mem_stage_pip.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdata_mem___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdata_mem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_debug_assertions\n"); );
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.funct3_in & 0xf8U)))) {
        Verilated::overWidthError("funct3_in");}
    if (VL_UNLIKELY(((vlSelfRef.rd_in & 0xe0U)))) {
        Verilated::overWidthError("rd_in");}
    if (VL_UNLIKELY(((vlSelfRef.mem_read_in & 0xfeU)))) {
        Verilated::overWidthError("mem_read_in");}
    if (VL_UNLIKELY(((vlSelfRef.mem_write_in & 0xfeU)))) {
        Verilated::overWidthError("mem_write_in");}
    if (VL_UNLIKELY(((vlSelfRef.reg_write_in & 0xfeU)))) {
        Verilated::overWidthError("reg_write_in");}
    if (VL_UNLIKELY(((vlSelfRef.mem_to_reg_in & 0xfeU)))) {
        Verilated::overWidthError("mem_to_reg_in");}
}
#endif  // VL_DEBUG
