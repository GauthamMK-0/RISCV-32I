module if_stage_pip (
    input wire clk,
    input wire rst,
    input wire pc_write,
    input wire if_id_write,
    input wire if_id_flush,
    input wire jump,
    input wire branch_taken,
    input wire [31:0] branch_target,
    input wire [31:0] jump_target,
    output wire [31:0] instr_out,
    output wire [31:0] pc_out
);

wire [31:0] current_pc;
wire [31:0] next_pc;
wire [31:0] instr;

instr_mem instruction_memory (
    .addr(current_pc),
    .instr(instr)
);

pc prog_counter (
    .clk(clk),
    .rst(rst),
    .pc_write(pc_write),
    .next_pc(next_pc),
    .current_pc(current_pc)
);

pc_logic pc_logic_unit (
    .current_pc(current_pc),
    .branch_target(branch_target),
    .jump_target(jump_target),
    .jump(jump),
    .branch_taken(branch_taken),
    .next_pc(next_pc)
);

if_id_reg ifid_register (
    .clk(clk),
    .rst(rst),
    .if_id_write(if_id_write),
    .if_id_flush(if_id_flush),
    .instr_in(instr),
    .pc_in(current_pc),
    .instr_out(instr_out),
    .pc_out(pc_out)

);
    
endmodule