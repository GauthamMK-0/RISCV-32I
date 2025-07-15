#include "Vid_stage_pip.h"    // Verilated model header
#include "verilated.h"
#include <iostream>
#include <cassert>

// Clock tick function: toggles clock and evaluates the model
void tick(Vid_stage_pip* top, int cycle) {
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();

    // Debug print: show key internal signals every cycle
    std::cout << "Cycle " << cycle << ": "
              << "rs1_out=" << (int)top->rs1_out << ", "
              << "rs2_out=" << (int)top->rs2_out << ", "
              << "rd_out=" << (int)top->rd_out << ", "
              << "rs1_data_out=" << top->rs1_data_out << ", "
              << "rs2_data_out=" << top->rs2_data_out << ", "
              << "imm_out=" << top->imm_out << ", "
              << "alu_ctrl_out=0x" << std::hex << top->alu_ctrl_out << std::dec << ", "
              << "reg_write_out=" << top->reg_write_out << ", "
              << "mem_read_out=" << top->mem_read_out << ", "
              << "mem_write_out=" << top->mem_write_out << ", "
              << "mem_to_reg_out=" << top->mem_to_reg_out << ", "
              << "jal_out=" << top->jal_out << ", "
              << "jalr_out=" << top->jalr_out << ", "
              << "branch_out=" << top->branch_out << ", "
              << "alu_src_out=" << top->alu_src_out
              << std::endl;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vid_stage_pip* top = new Vid_stage_pip;

    // Initialize inputs
    top->clk = 0;
    top->rst = 1;
    top->id_ex_flush = 0;
    top->id_ex_write = 1;

    top->instr_in = 0;
    top->pc_in = 0;

    // Initialize writeback inputs (simulate registers initially empty)
    top->reg_write_wb = 0;
    top->rd_wb = 0;
    top->rd_data_wb = 0;

    // Apply reset for 4 cycles
    for (int i = 0; i < 4; i++) {
        top->rst = 1;
        tick(top, i);
    }
    top->rst = 0;

    // Pre-load some registers (simulate register file writes through writeback stage)
    // Write 10 into register 1
    top->reg_write_wb = 1;
    top->rd_wb = 1;
    top->rd_data_wb = 10;
    tick(top, 4);

    // Write 20 into register 2
    top->rd_wb = 2;
    top->rd_data_wb = 20;
    tick(top, 5);

    // Write 30 into register 3
    top->rd_wb = 3;
    top->rd_data_wb = 30;
    tick(top, 6);

    // Disable writeback writes
    top->reg_write_wb = 0;
    top->rd_wb = 0;
    top->rd_data_wb = 0;

    // Test 1: ADD instruction (R-type)
    // Construct instr: funct7=0, rs2=2, rs1=1, funct3=0, rd=3, opcode=0x33 (R-type)
    top->instr_in = 0b00000000001000001000000110110011; // ADD x3, x1, x2
    top->pc_in = 0x00000004;
    tick(top, 7);

    // Test 2: Load Word (LW) instruction (I-type)
    // opcode=0x03, funct3=2, rs1=4, rd=5, imm=16
    top->instr_in = (16 << 20) | (4 << 15) | (2 << 12) | (5 << 7) | 0x03;
    top->pc_in = 0x00000008;
    tick(top, 8);

    // Test 3: Branch (BEQ)
    // opcode=0x63, funct3=0, rs1=5, rs2=6, imm=8 (simplified immediate placement)
    uint32_t imm_branch = (8 & 0x1E) << 7;
    top->instr_in = (imm_branch) | (6 << 20) | (5 << 15) | (0 << 12) | (0 << 7) | 0x63;
    top->pc_in = 0x0000000C;
    tick(top, 9);

    // Run 5 more cycles for stability
    for (int i = 10; i < 15; i++) {
        tick(top, i);
    }

    delete top;
    return 0;
}
