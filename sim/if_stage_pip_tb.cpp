#include "Vif_stage_pip.h"   
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

const vluint64_t clk_period = 10;  // time units per cycle
vluint64_t main_time = 0;

// Time getter for Verilator
double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vif_stage_pip* top = new Vif_stage_pip;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("if_stage.vcd");

    // Clock toggle function with VCD dump
    auto toggle_clk = [&]() {
        top->clk = 0;
        top->eval();
        tfp->dump(main_time);
        main_time += clk_period / 2;

        top->clk = 1;
        top->eval();
        tfp->dump(main_time);
        main_time += clk_period / 2;
    };

    // === Initialize ===
    top->rst = 1;
    top->pc_write = 0;
    top->if_id_write = 0;
    top->if_id_flush = 0;
    top->jump = 0;
    top->branch_taken = 0;
    top->branch_target = 0;
    top->jump_target = 0;

    std::cout << "Starting pipeline IF stage simulation...\n";

    // === Apply Reset ===
    toggle_clk();  // Cycle 0
    toggle_clk();  // Cycle 1
    top->rst = 0;

    // === Start Fetching Instructions Sequentially ===
    top->pc_write = 1;
    top->if_id_write = 1;

    for (int cycle = 2; cycle <= 15; ++cycle) {
        toggle_clk();
        std::cout << "Cycle " << std::dec << cycle
                  << " | PC = 0x" << std::setw(8) << std::setfill('0') << std::hex << top->pc_out
                  << " | Instr = 0x" << std::setw(8) << top->instr_out << "\n";
    }

    // === Test Branch Taken ===
    top->branch_taken = 1;
    top->branch_target = 0x10 << 2; // Jump to memory[16]
    toggle_clk();
    std::cout << "[Branch] PC = 0x" << std::hex << top->pc_out
              << " | Instr = 0x" << top->instr_out << "\n";
    top->branch_taken = 0;

    // === Test Jump ===
    top->jump = 1;
    top->jump_target = 0x14 << 2; // Jump to memory[20]
    toggle_clk();
    std::cout << "[Jump] PC = 0x" << std::hex << top->pc_out
              << " | Instr = 0x" << top->instr_out << "\n";
    top->jump = 0;

    // === Test Stall (PC Write Disable) ===
    top->pc_write = 0;
    toggle_clk();
    std::cout << "[Stall] PC = 0x" << std::hex << top->pc_out
              << " | Instr = 0x" << top->instr_out << " (Should remain same)\n";
    top->pc_write = 1;

    // === Test Flush ===
    top->if_id_flush = 1;
    toggle_clk();
    std::cout << "[Flush] PC = 0x" << std::hex << top->pc_out
              << " | Instr = 0x" << top->instr_out << " (Flushed instruction)\n";
    top->if_id_flush = 0;

    // === Continue for a few more cycles ===
    for (int i = 0; i < 4; ++i) {
        toggle_clk();
        std::cout << "Cycle " << (20 + i)
                  << " | PC = 0x" << std::setw(8) << top->pc_out
                  << " | Instr = 0x" << std::setw(8) << top->instr_out << "\n";
    }

    std::cout << "Simulation completed.\n";

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
