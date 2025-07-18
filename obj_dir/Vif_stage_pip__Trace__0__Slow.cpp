// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vif_stage_pip__Syms.h"


VL_ATTR_COLD void Vif_stage_pip___024root__trace_init_sub__TOP__0(Vif_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_init_sub__TOP__0\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"pc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"if_id_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"if_id_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"jump_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("if_stage_pip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"pc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"if_id_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"if_id_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"jump_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ifid_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"if_id_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"if_id_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"instr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"instr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_logic_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"jump_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("prog_counter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+43,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"pc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vif_stage_pip___024root__trace_init_top(Vif_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_init_top\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vif_stage_pip___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vif_stage_pip___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vif_stage_pip___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vif_stage_pip___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vif_stage_pip___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vif_stage_pip___024root__trace_register(Vif_stage_pip___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_register\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vif_stage_pip___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vif_stage_pip___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vif_stage_pip___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vif_stage_pip___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vif_stage_pip___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_const_0\n"); );
    // Init
    Vif_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vif_stage_pip___024root*>(voidSelf);
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vif_stage_pip___024root__trace_full_0_sub_0(Vif_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vif_stage_pip___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_full_0\n"); );
    // Init
    Vif_stage_pip___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vif_stage_pip___024root*>(voidSelf);
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vif_stage_pip___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vif_stage_pip___024root__trace_full_0_sub_0(Vif_stage_pip___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vif_stage_pip___024root__trace_full_0_sub_0\n"); );
    Vif_stage_pip__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst));
    bufp->fullBit(oldp+3,(vlSelfRef.pc_write));
    bufp->fullBit(oldp+4,(vlSelfRef.if_id_write));
    bufp->fullBit(oldp+5,(vlSelfRef.if_id_flush));
    bufp->fullBit(oldp+6,(vlSelfRef.jump));
    bufp->fullBit(oldp+7,(vlSelfRef.branch_taken));
    bufp->fullIData(oldp+8,(vlSelfRef.branch_target),32);
    bufp->fullIData(oldp+9,(vlSelfRef.jump_target),32);
    bufp->fullIData(oldp+10,(vlSelfRef.instr_out),32);
    bufp->fullIData(oldp+11,(vlSelfRef.pc_out),32);
    bufp->fullBit(oldp+12,(vlSelfRef.if_stage_pip__DOT__clk));
    bufp->fullBit(oldp+13,(vlSelfRef.if_stage_pip__DOT__rst));
    bufp->fullBit(oldp+14,(vlSelfRef.if_stage_pip__DOT__pc_write));
    bufp->fullBit(oldp+15,(vlSelfRef.if_stage_pip__DOT__if_id_write));
    bufp->fullBit(oldp+16,(vlSelfRef.if_stage_pip__DOT__if_id_flush));
    bufp->fullBit(oldp+17,(vlSelfRef.if_stage_pip__DOT__jump));
    bufp->fullBit(oldp+18,(vlSelfRef.if_stage_pip__DOT__branch_taken));
    bufp->fullIData(oldp+19,(vlSelfRef.if_stage_pip__DOT__branch_target),32);
    bufp->fullIData(oldp+20,(vlSelfRef.if_stage_pip__DOT__jump_target),32);
    bufp->fullIData(oldp+21,(vlSelfRef.if_stage_pip__DOT__instr_out),32);
    bufp->fullIData(oldp+22,(vlSelfRef.if_stage_pip__DOT__pc_out),32);
    bufp->fullIData(oldp+23,(vlSelfRef.if_stage_pip__DOT__current_pc),32);
    bufp->fullIData(oldp+24,(vlSelfRef.if_stage_pip__DOT__next_pc),32);
    bufp->fullIData(oldp+25,(vlSelfRef.if_stage_pip__DOT__instr),32);
    bufp->fullBit(oldp+26,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__clk));
    bufp->fullBit(oldp+27,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__rst));
    bufp->fullBit(oldp+28,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__if_id_write));
    bufp->fullBit(oldp+29,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__if_id_flush));
    bufp->fullIData(oldp+30,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_in),32);
    bufp->fullIData(oldp+31,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_in),32);
    bufp->fullIData(oldp+32,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__instr_out),32);
    bufp->fullIData(oldp+33,(vlSelfRef.if_stage_pip__DOT__ifid_register__DOT__pc_out),32);
    bufp->fullIData(oldp+34,(vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__addr),32);
    bufp->fullIData(oldp+35,(vlSelfRef.if_stage_pip__DOT__instruction_memory__DOT__instr),32);
    bufp->fullIData(oldp+36,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__current_pc),32);
    bufp->fullIData(oldp+37,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__branch_target),32);
    bufp->fullIData(oldp+38,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__jump_target),32);
    bufp->fullBit(oldp+39,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__jump));
    bufp->fullBit(oldp+40,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__branch_taken));
    bufp->fullIData(oldp+41,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__next_pc),32);
    bufp->fullIData(oldp+42,(vlSelfRef.if_stage_pip__DOT__pc_logic_unit__DOT__pc_4),32);
    bufp->fullBit(oldp+43,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__clk));
    bufp->fullBit(oldp+44,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__rst));
    bufp->fullBit(oldp+45,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__pc_write));
    bufp->fullIData(oldp+46,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__next_pc),32);
    bufp->fullIData(oldp+47,(vlSelfRef.if_stage_pip__DOT__prog_counter__DOT__current_pc),32);
}
