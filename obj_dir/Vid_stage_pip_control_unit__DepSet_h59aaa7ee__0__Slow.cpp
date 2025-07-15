// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vid_stage_pip.h for the primary calling header

#include "Vid_stage_pip__pch.h"
#include "Vid_stage_pip_control_unit.h"

VL_ATTR_COLD void Vid_stage_pip_control_unit___stl_sequent__TOP__id_stage_pip__control__0(Vid_stage_pip_control_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_control_unit___stl_sequent__TOP__id_stage_pip__control__0\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_ctrl = 0U;
    vlSelfRef.branch_ctrl = 0U;
    vlSelfRef.reg_write = 0U;
    vlSelfRef.mem_read = 0U;
    vlSelfRef.mem_write = 0U;
    vlSelfRef.mem_to_reg = 0U;
    vlSelfRef.jal = 0U;
    vlSelfRef.jalr = 0U;
    vlSelfRef.branch = 0U;
    vlSelfRef.alu_src = 0U;
    if (((((((((0x33U == (IData)(vlSelfRef.opcode)) 
               | (3U == (IData)(vlSelfRef.opcode))) 
              | (0x13U == (IData)(vlSelfRef.opcode))) 
             | (0x67U == (IData)(vlSelfRef.opcode))) 
            | (0x23U == (IData)(vlSelfRef.opcode))) 
           | (0x63U == (IData)(vlSelfRef.opcode))) 
          | (0x6fU == (IData)(vlSelfRef.opcode))) | 
         (0x17U == (IData)(vlSelfRef.opcode)))) {
        if ((0x33U == (IData)(vlSelfRef.opcode))) {
            vlSelfRef.reg_write = 1U;
            vlSelfRef.alu_src = 0U;
            vlSelfRef.alu_ctrl = (((((((((0U == (IData)(vlSelfRef.funct3)) 
                                         | (1U == (IData)(vlSelfRef.funct3))) 
                                        | (2U == (IData)(vlSelfRef.funct3))) 
                                       | (3U == (IData)(vlSelfRef.funct3))) 
                                      | (4U == (IData)(vlSelfRef.funct3))) 
                                     | (5U == (IData)(vlSelfRef.funct3))) 
                                    | (6U == (IData)(vlSelfRef.funct3))) 
                                   | (7U == (IData)(vlSelfRef.funct3)))
                                   ? ((0U == (IData)(vlSelfRef.funct3))
                                       ? ((0U == (IData)(vlSelfRef.funct7))
                                           ? 0U : 1U)
                                       : ((1U == (IData)(vlSelfRef.funct3))
                                           ? 5U : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.funct3))
                                                    ? 8U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.funct3))
                                                     ? 9U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.funct3))
                                                      ? 4U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.funct3))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.funct7))
                                                        ? 6U
                                                        : 7U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.funct3))
                                                        ? 3U
                                                        : 2U)))))))
                                   : 0U);
        } else if ((3U == (IData)(vlSelfRef.opcode))) {
            vlSelfRef.reg_write = 1U;
            vlSelfRef.mem_read = 1U;
            vlSelfRef.alu_src = 1U;
            vlSelfRef.mem_to_reg = 1U;
            vlSelfRef.alu_ctrl = 0U;
        } else if ((0x13U == (IData)(vlSelfRef.opcode))) {
            vlSelfRef.reg_write = 1U;
            vlSelfRef.alu_src = 1U;
            vlSelfRef.alu_ctrl = (((((((((0U == (IData)(vlSelfRef.funct3)) 
                                         | (1U == (IData)(vlSelfRef.funct3))) 
                                        | (2U == (IData)(vlSelfRef.funct3))) 
                                       | (3U == (IData)(vlSelfRef.funct3))) 
                                      | (4U == (IData)(vlSelfRef.funct3))) 
                                     | (5U == (IData)(vlSelfRef.funct3))) 
                                    | (6U == (IData)(vlSelfRef.funct3))) 
                                   | (7U == (IData)(vlSelfRef.funct3)))
                                   ? ((0U == (IData)(vlSelfRef.funct3))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelfRef.funct3))
                                                ? 5U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.funct3))
                                                    ? 8U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.funct3))
                                                     ? 9U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.funct3))
                                                      ? 4U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelfRef.funct3))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.funct7))
                                                        ? 6U
                                                        : 7U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelfRef.funct3))
                                                        ? 3U
                                                        : 2U)))))))
                                   : 0U);
        } else if ((0x67U == (IData)(vlSelfRef.opcode))) {
            vlSelfRef.reg_write = 1U;
            vlSelfRef.alu_src = 1U;
            vlSelfRef.jalr = 1U;
            vlSelfRef.alu_ctrl = 0U;
        } else if ((0x23U == (IData)(vlSelfRef.opcode))) {
            vlSelfRef.mem_write = 1U;
            vlSelfRef.alu_src = 1U;
            vlSelfRef.alu_ctrl = 0U;
        } else if ((0x63U == (IData)(vlSelfRef.opcode))) {
            vlSelfRef.branch = 1U;
            vlSelfRef.branch_ctrl = ((0U == (IData)(vlSelfRef.funct3))
                                      ? 0U : ((1U == (IData)(vlSelfRef.funct3))
                                               ? 1U
                                               : ((4U 
                                                   == (IData)(vlSelfRef.funct3))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.funct3))
                                                    ? 3U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.funct3))
                                                     ? 4U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.funct3))
                                                      ? 5U
                                                      : 0U))))));
        } else if ((0x6fU == (IData)(vlSelfRef.opcode))) {
            vlSelfRef.reg_write = 1U;
            vlSelfRef.jal = 1U;
        } else {
            vlSelfRef.reg_write = 1U;
            vlSelfRef.alu_src = 1U;
            vlSelfRef.alu_ctrl = 0U;
        }
    } else if ((0x37U == (IData)(vlSelfRef.opcode))) {
        vlSelfRef.reg_write = 1U;
        vlSelfRef.alu_src = 1U;
    }
}

VL_ATTR_COLD void Vid_stage_pip_control_unit___ctor_var_reset(Vid_stage_pip_control_unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vid_stage_pip_control_unit___ctor_var_reset\n"); );
    Vid_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->alu_ctrl = VL_RAND_RESET_I(4);
    vlSelf->branch_ctrl = VL_RAND_RESET_I(3);
    vlSelf->reg_write = VL_RAND_RESET_I(1);
    vlSelf->mem_read = VL_RAND_RESET_I(1);
    vlSelf->mem_write = VL_RAND_RESET_I(1);
    vlSelf->mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->jal = VL_RAND_RESET_I(1);
    vlSelf->jalr = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->alu_src = VL_RAND_RESET_I(1);
}
