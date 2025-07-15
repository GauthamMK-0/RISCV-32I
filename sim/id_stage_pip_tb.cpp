#include "Vid_stage_pip.h"  // Replace with your verilated top module header
#include "verilated.h"
#include <iostream>
#include <iomanip>

// Helper function to simulate a clock cycle
void eval_and_step(Vid_stage_pip* top, vluint64_t& time) {
    top->clk = 0;
    top->eval();
    time++;
    top->clk = 1;
    top->eval();
    time++;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vid_stage_pip* top = new Vid_stage_pip;

    vluint64_t time = 0;

    // Initial reset
    top->rst = 1;
    top->id_ex_flush = 0;
    top->id_ex_write = 0;
    top->instr_in = 0;
    top->pc_in = 0;
    top->reg_write_wb = 0;
    top->rd_wb = 0;
    top->rd_data_wb = 0;

    eval_and_step(top, time);
    eval_and_step(top, time);

    // Release reset
    top->rst = 0;
    eval_and_step(top, time);

    std::cout << "=== After Reset ===\n";
    std::cout << "rs1_out        = " << int(top->rs1_out) << "\n";
    std::cout << "rs2_out        = " << int(top->rs2_out) << "\n";
    std::cout << "rd_out         = " << int(top->rd_out) << "\n";
    std::cout << "rs1_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs1_data_out << std::dec << "\n";
    std::cout << "rs2_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs2_data_out << std::dec << "\n";
    std::cout << "imm_out        = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->imm_out << std::dec << "\n";
    std::cout << "alu_ctrl_out   = 0x" << std::hex << int(top->alu_ctrl_out) << std::dec << "\n";
    std::cout << "branch_ctrl_out= " << int(top->branch_ctrl_out) << "\n";
    std::cout << "reg_write_out  = " << int(top->reg_write_out) << "\n";
    std::cout << "mem_read_out   = " << int(top->mem_read_out) << "\n";
    std::cout << "mem_write_out  = " << int(top->mem_write_out) << "\n";
    std::cout << "mem_to_reg_out = " << int(top->mem_to_reg_out) << "\n";
    std::cout << "jal_out        = " << int(top->jal_out) << "\n";
    std::cout << "jalr_out       = " << int(top->jalr_out) << "\n";
    std::cout << "branch_out     = " << int(top->branch_out) << "\n";
    std::cout << "alu_src_out    = " << int(top->alu_src_out) << "\n\n";

    // Preload register file: Write 0xAAAA5555 to x5 via write-back interface
    top->reg_write_wb = 1;
    top->rd_wb = 5;
    top->rd_data_wb = 0xAAAA5555;
    eval_and_step(top, time);

    // Disable write-back after preload to avoid overwriting
    top->reg_write_wb = 0;
    eval_and_step(top, time);

    // Provide a valid addi instruction: addi x5, x10, 42 (0x02A28293)
    top->instr_in = 0x02A28293;
    top->id_ex_write = 1;
    top->id_ex_flush = 0;
    top->pc_in = 0x1000;

    eval_and_step(top, time);

    std::cout << "=== After Instruction Write ===\n";
    std::cout << "rs1_out        = " << int(top->rs1_out) << "\n";
    std::cout << "rs2_out        = " << int(top->rs2_out) << "\n";
    std::cout << "rd_out         = " << int(top->rd_out) << "\n";
    std::cout << "rs1_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs1_data_out << std::dec << "\n";
    std::cout << "rs2_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs2_data_out << std::dec << "\n";
    std::cout << "imm_out        = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->imm_out << std::dec << "\n";
    std::cout << "alu_ctrl_out   = 0x" << std::hex << int(top->alu_ctrl_out) << std::dec << "\n";
    std::cout << "branch_ctrl_out= " << int(top->branch_ctrl_out) << "\n";
    std::cout << "reg_write_out  = " << int(top->reg_write_out) << "\n";
    std::cout << "mem_read_out   = " << int(top->mem_read_out) << "\n";
    std::cout << "mem_write_out  = " << int(top->mem_write_out) << "\n";
    std::cout << "mem_to_reg_out = " << int(top->mem_to_reg_out) << "\n";
    std::cout << "jal_out        = " << int(top->jal_out) << "\n";
    std::cout << "jalr_out       = " << int(top->jalr_out) << "\n";
    std::cout << "branch_out     = " << int(top->branch_out) << "\n";
    std::cout << "alu_src_out    = " << int(top->alu_src_out) << "\n\n";

    // Flush the pipeline stage
    top->id_ex_flush = 1;
    eval_and_step(top, time);

    std::cout << "=== After Flush ===\n";
    std::cout << "rs1_out        = " << int(top->rs1_out) << "\n";
    std::cout << "rs2_out        = " << int(top->rs2_out) << "\n";
    std::cout << "rd_out         = " << int(top->rd_out) << "\n";
    std::cout << "rs1_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs1_data_out << std::dec << "\n";
    std::cout << "rs2_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs2_data_out << std::dec << "\n";
    std::cout << "imm_out        = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->imm_out << std::dec << "\n";
    std::cout << "alu_ctrl_out   = 0x" << std::hex << int(top->alu_ctrl_out) << std::dec << "\n";
    std::cout << "branch_ctrl_out= " << int(top->branch_ctrl_out) << "\n";
    std::cout << "reg_write_out  = " << int(top->reg_write_out) << "\n";
    std::cout << "mem_read_out   = " << int(top->mem_read_out) << "\n";
    std::cout << "mem_write_out  = " << int(top->mem_write_out) << "\n";
    std::cout << "mem_to_reg_out = " << int(top->mem_to_reg_out) << "\n";
    std::cout << "jal_out        = " << int(top->jal_out) << "\n";
    std::cout << "jalr_out       = " << int(top->jalr_out) << "\n";
    std::cout << "branch_out     = " << int(top->branch_out) << "\n";
    std::cout << "alu_src_out    = " << int(top->alu_src_out) << "\n\n";

    // Disable writing (simulate pipeline stall or similar)
    top->id_ex_write = 0;
    top->id_ex_flush = 0;
    eval_and_step(top, time);

    std::cout << "=== After Write Disabled ===\n";
    std::cout << "rs1_out        = " << int(top->rs1_out) << "\n";
    std::cout << "rs2_out        = " << int(top->rs2_out) << "\n";
    std::cout << "rd_out         = " << int(top->rd_out) << "\n";
    std::cout << "rs1_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs1_data_out << std::dec << "\n";
    std::cout << "rs2_data_out   = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->rs2_data_out << std::dec << "\n";
    std::cout << "imm_out        = 0x" << std::hex << std::setw(8) << std::setfill('0') << top->imm_out << std::dec << "\n";
    std::cout << "alu_ctrl_out   = 0x" << std::hex << int(top->alu_ctrl_out) << std::dec << "\n";
    std::cout << "branch_ctrl_out= " << int(top->branch_ctrl_out) << "\n";
    std::cout << "reg_write_out  = " << int(top->reg_write_out) << "\n";
    std::cout << "mem_read_out   = " << int(top->mem_read_out) << "\n";
    std::cout << "mem_write_out  = " << int(top->mem_write_out) << "\n";
    std::cout << "mem_to_reg_out = " << int(top->mem_to_reg_out) << "\n";
    std::cout << "jal_out        = " << int(top->jal_out) << "\n";
    std::cout << "jalr_out       = " << int(top->jalr_out) << "\n";
    std::cout << "branch_out     = " << int(top->branch_out) << "\n";
    std::cout << "alu_src_out    = " << int(top->alu_src_out) << "\n";

    delete top;
    return 0;
}
