#include "Vex_stage_pip.h"
#include "verilated.h"
#include <iostream>

void toggle_clock(Vex_stage_pip* top) {
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();
}

int main() {
    Verilated::traceEverOn(true);
    Vex_stage_pip* top = new Vex_stage_pip;

    top->rst = 0;
    top->pc_in = 100;
    top->imm_in = 8;
    top->alu_ctrl_in = 0b0000;  // ADD
    top->branch_ctrl_in = 0b000; // BEQ
    top->reg_write_in = 1;
    top->mem_read_in = 0;
    top->mem_write_in = 0;
    top->mem_to_reg_in = 0;
    top->alu_src_in = 0;
    top->branch_in = 0;
    top->jal_in = 0;
    top->jalr_in = 0;
    top->rd_in = 5;
    top->rs1_in = 1;
    top->rs2_in = 2;

    // ----------------------------
    // Test 1: Simple ADD rs1 + rs2 = 20
    // ----------------------------
    top->rs1_data_in = 10;
    top->rs2_data_in = 10;
    top->forward_rs1 = 0;
    top->forward_rs2 = 0;
    toggle_clock(top);
    std::cout << "[Test 1] ADD rs1 + rs2 = " << top->alu_result_out << std::endl;

    // ----------------------------
    // Test 2: Forward rs1 from MEM (20 + 5 = 25)
    // ----------------------------
    top->rs1_data_in = 0;
    top->rs2_data_in = 5;
    top->forward_rs1 = 0b10;
    top->forward_data_mem = 20;
    toggle_clock(top);
    std::cout << "[Test 2] Forward rs1 from MEM: ALU result = " << top->alu_result_out << std::endl;

    // ----------------------------
    // Test 3: Forward rs2 from WB (10 + 12 = 22)
    // ----------------------------
    top->rs1_data_in = 10;
    top->rs2_data_in = 0;
    top->forward_rs1 = 0b00;
    top->forward_rs2 = 0b01;
    top->forward_data_wb = 12;
    toggle_clock(top);
    std::cout << "[Test 3] Forward rs2 from WB: ALU result = " << top->alu_result_out << std::endl;

    // ----------------------------
    // Test 4: Branch taken (BEQ: rs1 == rs2)
    // ----------------------------
    top->rs1_data_in = 42;
    top->rs2_data_in = 42;
    top->forward_rs1 = 0b00;
    top->forward_rs2 = 0b00;
    top->branch_in = 1;                    
    top->branch_ctrl_in = 0b000;         
    top->alu_ctrl_in = 0b001;         
    top->imm_in = 4; 
    toggle_clock(top);
    std::cout << "[Test 4] Branch taken: " << (top->branch_taken_out ? "YES" : "NO") << std::endl;
    std::cout << "branch = " << top->branch_in << ", "
          << "branch_ctrl = " << top->branch_ctrl_in << ", "
          << "alu_ctrl = " << top->alu_ctrl_in << ", "
          << "rs1 = " << top->rs1_data_in << ", rs2 = " << top->rs2_data_in << ", "
          << "branch_taken = " << top->branch_taken_out << std::endl;


    // ----------------------------
    // Test 5: Branch not taken (BEQ: rs1 != rs2)
    // ----------------------------
    top->rs1_data_in = 10;
    top->rs2_data_in = 20;
    toggle_clock(top);
    std::cout << "[Test 5] Branch taken: " << (top->branch_taken_out ? "YES" : "NO") << std::endl;

    // ----------------------------
    // Test 6: JAL test
    // ----------------------------
    top->rst = 1;
    top->eval();
    toggle_clock(top);  // First reset clock
    top->rst = 0;
    top->pc_in = 8;
    top->imm_in = 100;
    top->jal_in = 1;
    top->jalr_in = 0;
    toggle_clock(top);
    toggle_clock(top);
    top->eval();
    std::cout << "[Test 6] JAL -> jump_target_out = " << top->jump_target_out
          << ", jump_out = " << static_cast<int>(top->jump_out) << std::endl;


    top->jal_in = 0;
    top->jalr_in = 0;
    toggle_clock(top); 

    // ----------------------------
    // Test 7: Forwarding rs1 from MEM, rs2 from WB (20 + 5)
    // ----------------------------
    top->rs1_data_in = 0;
    top->rs2_data_in = 0;
    top->forward_rs1 = 0b10;
    top->forward_rs2 = 0b01;
    top->forward_data_mem = 20;
    top->forward_data_wb = 5;
    toggle_clock(top);
    std::cout << "[Test 7] Forward rs1:MEM + rs2:WB => ALU result = " << top->alu_result_out << std::endl;

    // ----------------------------
    // Test 8: I-type ADDI (rs1 + imm)
    // ----------------------------
    top->alu_src_in = 1;
    top->rs1_data_in = 17;
    top->imm_in = 8;
    top->forward_rs1 = 0b00;
    top->forward_rs2 = 0b00;
    toggle_clock(top);
    std::cout << "[Test 8] I-type ADDI rs1 + imm => ALU result = " << top->alu_result_out << std::endl;

    // ----------------------------
    // Test 9: Forwarded rs2_data_out
    // ----------------------------
    top->alu_src_in = 0;
    top->rs1_data_in = 1;
    top->forward_rs2 = 0b10;
    top->forward_data_mem = 77;
    toggle_clock(top);
    toggle_clock(top);
    std::cout << "[Test 9] Forwarded rs2 = " << top->rs2_data_out << std::endl;

    // ----------------------------
    // Test 10: JALR test
    // ----------------------------

    top->rst = 1;
    top->eval();
    toggle_clock(top);  // First reset clock
    top->rst = 0;
    top->pc_in = 12;
    top->rs1_data_in = 100;
    top->imm_in = 8;
    top->jal_in = 0;
    top->jalr_in = 1;
    toggle_clock(top);
    toggle_clock(top);
    std::cout << "[Test 10] JALR -> jump_target_out = " << top->jump_target_out << ", jump_out = " << static_cast<int>(top->jump_out) << std::endl;

    top->jal_in = 0;
    top->jalr_in = 0;

    delete top;
    return 0;
}