// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip_instr_decoder.h"

VL_ATTR_COLD void Vid_stage_pip_instr_decoder___stl_sequent__TOP__id_stage_pip__decoder__0(Vid_stage_pip_instr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_instr_decoder___stl_sequent__TOP__id_stage_pip__decoder__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.opcode = (0x7fU & VL_SEL_IIII(32, vlSelfRef.instr, 0U, 7U));
    vlSelfRef.rd = (0x1fU & VL_SEL_IIII(32, vlSelfRef.instr, 7U, 5U));
    vlSelfRef.funct3 = (7U & VL_SEL_IIII(32, vlSelfRef.instr, 0xcU, 3U));
    vlSelfRef.rs1 = (0x1fU & VL_SEL_IIII(32, vlSelfRef.instr, 0xfU, 5U));
    vlSelfRef.rs2 = (0x1fU & VL_SEL_IIII(32, vlSelfRef.instr, 0x14U, 5U));
    vlSelfRef.funct7 = (0x7fU & VL_SEL_IIII(32, vlSelfRef.instr, 0x19U, 7U));
    vlSelfRef.imm = (((((((((0x33U == (IData)(vlSelfRef.opcode)) 
                            | (3U == (IData)(vlSelfRef.opcode))) 
                           | (0x13U == (IData)(vlSelfRef.opcode))) 
                          | (0x67U == (IData)(vlSelfRef.opcode))) 
                         | (0x23U == (IData)(vlSelfRef.opcode))) 
                        | (0x63U == (IData)(vlSelfRef.opcode))) 
                       | (0x6fU == (IData)(vlSelfRef.opcode))) 
                      | (0x37U == (IData)(vlSelfRef.opcode)))
                      ? ((0x33U == (IData)(vlSelfRef.opcode))
                          ? 0U : ((3U == (IData)(vlSelfRef.opcode))
                                   ? VL_CONCAT_III(32,20,12, 
                                                   (0xfffffU 
                                                    & VL_REPLICATE_IOI(1,
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU)), 0x14U)), 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, vlSelfRef.instr, 0x14U, 0xcU)))
                                   : ((0x13U == (IData)(vlSelfRef.opcode))
                                       ? VL_CONCAT_III(32,20,12, 
                                                       (0xfffffU 
                                                        & VL_REPLICATE_IOI(1,
                                                                           (1U 
                                                                            & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU)), 0x14U)), 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, vlSelfRef.instr, 0x14U, 0xcU)))
                                       : ((0x67U == (IData)(vlSelfRef.opcode))
                                           ? VL_CONCAT_III(32,20,12, 
                                                           (0xfffffU 
                                                            & VL_REPLICATE_IOI(1,
                                                                               (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU)), 0x14U)), 
                                                           (0xfffU 
                                                            & VL_SEL_IIII(32, vlSelfRef.instr, 0x14U, 0xcU)))
                                           : ((0x23U 
                                               == (IData)(vlSelfRef.opcode))
                                               ? VL_CONCAT_III(32,20,12, 
                                                               (0xfffffU 
                                                                & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU)), 0x14U)), 
                                                               VL_CONCAT_III(12,7,5, 
                                                                             (0x7fU 
                                                                              & VL_SEL_IIII(32, vlSelfRef.instr, 0x19U, 7U)), 
                                                                             (0x1fU 
                                                                              & VL_SEL_IIII(32, vlSelfRef.instr, 7U, 5U))))
                                               : ((0x63U 
                                                   == (IData)(vlSelfRef.opcode))
                                                   ? 
                                                  VL_CONCAT_III(32,19,13, 
                                                                (0x7ffffU 
                                                                 & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU)), 0x13U)), 
                                                                VL_CONCAT_III(13,2,11, 
                                                                              VL_CONCAT_III(2,1,1, 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 7U))), 
                                                                              VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.instr, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.instr, 8U, 4U)), 0U))))
                                                   : 
                                                  ((0x6fU 
                                                    == (IData)(vlSelfRef.opcode))
                                                    ? 
                                                   VL_CONCAT_III(32,12,20, 
                                                                 VL_CONCAT_III(12,11,1, 
                                                                               (0x7ffU 
                                                                                & VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU)), 0xbU)), 
                                                                               (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x1fU))), 
                                                                 VL_CONCAT_III(20,9,11, 
                                                                               VL_CONCAT_III(9,8,1, 
                                                                                (0xffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.instr, 0xcU, 8U)), 
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelfRef.instr, 0x14U))), 
                                                                               VL_CONCAT_III(11,10,1, 
                                                                                (0x3ffU 
                                                                                & VL_SEL_IIII(32, vlSelfRef.instr, 0x15U, 0xaU)), 0U)))
                                                    : 
                                                   VL_CONCAT_III(32,20,12, 
                                                                 (0xfffffU 
                                                                  & VL_SEL_IIII(32, vlSelfRef.instr, 0xcU, 0x14U)), 0U))))))))
                      : ((0x17U == (IData)(vlSelfRef.opcode))
                          ? VL_CONCAT_III(32,20,12, 
                                          (0xfffffU 
                                           & VL_SEL_IIII(32, vlSelfRef.instr, 0xcU, 0x14U)), 0U)
                          : 0U));
}

VL_ATTR_COLD void Vid_stage_pip_instr_decoder___ctor_var_reset(Vid_stage_pip_instr_decoder* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_instr_decoder___ctor_var_reset\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->imm = VL_RAND_RESET_I(32);
}
