module pipeline (
    input wire clk,
    input wire rst,

    // Debug outputs
    output wire [31:0] dbg_if_pc,
    output wire [31:0] dbg_if_instr,
    output wire [4:0]  dbg_id_rs1,
    output wire [4:0]  dbg_id_rs2,
    output wire [4:0]  dbg_id_rd,
    output wire [31:0] dbg_id_rs1_data,
    output wire [31:0] dbg_id_rs2_data,
    output wire [3:0]  dbg_ex_alu_ctrl,
    output wire [31:0] dbg_ex_alu_op_a,
    output wire [31:0] dbg_ex_alu_op_b,
    output wire [31:0] dbg_ex_alu_result,
    output wire [31:0] dbg_ex_branch_target,
    output wire        dbg_ex_branch_taken,
    output wire [31:0] dbg_mem_alu_result,
    output wire [31:0] dbg_mem_data,
    output wire        dbg_mem_write_en,
    output wire        dbg_mem_read_en,
    output wire [31:0] dbg_wb_data,
    output wire [4:0]  dbg_wb_rd,
    output wire        dbg_wb_reg_write
);

    // Pipeline control signals
    wire pc_write;
    wire if_id_write;
    wire if_id_flush;
    wire branch_taken;
    wire [31:0] branch_target;
    wire jump;
    wire [31:0] jump_target;
    wire id_ex_flush;
    wire id_ex_write;

    // IF stage wires
    wire [31:0] if_instr;
    wire [31:0] if_pc;

    // ID stage wires
    wire [4:0] id_rs1, id_rs2, id_rd;
    wire [31:0] id_pc;
    wire [31:0] id_rs1_data, id_rs2_data;
    wire [31:0] id_imm;
    wire [2:0] id_funct3;
    wire [3:0] id_alu_ctrl;
    wire [2:0] id_branch_ctrl;
    wire [1:0] id_wb_sel;
    wire id_reg_write, id_mem_read, id_mem_write, id_mem_to_reg;
    wire id_jal, id_jalr, id_branch, id_alu_src;

    // EX stage wires
    wire [31:0] ex_pc;
    wire [31:0] ex_alu_result;
    wire [31:0] ex_rs2_data;
    wire [2:0] ex_funct3;
    wire [4:0] ex_rd, ex_rs1, ex_rs2;
    wire [1:0] ex_wb_sel;
    wire ex_mem_read, ex_mem_write, ex_reg_write, ex_mem_to_reg;
    wire [3:0] ex_alu_ctrl;  // Added for debug

    // MEM stage wires
    wire [31:0] mem_pc;
    wire [31:0] mem_alu_result;
    wire [31:0] mem_data;
    wire [4:0] mem_rd;
    wire [1:0] mem_wb_sel;
    wire mem_reg_write, mem_mem_to_reg;

    // WB stage wires
    wire [31:0] wb_reg_data;
    wire [4:0] wb_rd;
    wire wb_reg_write;

    // Hazard detection wires
    wire [4:0] rs1_hzd, rs2_hzd, rd_hzd;

    // Forwarding wires
    wire [1:0] forward_rs1_ex, forward_rs2_ex;
    wire [1:0] forward_rs1_id, forward_rs2_id;

    // IF Stage
    if_stage_pip if_stage (
        .clk(clk),
        .rst(rst),
        .pc_write(pc_write),
        .if_id_write(if_id_write),
        .if_id_flush(if_id_flush),
        .jump(jump),
        .branch_taken(branch_taken),
        .branch_target(branch_target),
        .jump_target(jump_target),
        .instr_out(if_instr),
        .pc_out(if_pc)
    );

    // ID Stage
    id_stage_pip id_stage (
        .clk(clk),
        .rst(rst),
        .id_ex_flush(id_ex_flush),
        .id_ex_write(id_ex_write),
        .instr_in(if_instr),
        .pc_in(if_pc),
        .reg_write_wb(wb_reg_write),
        .rd_wb(wb_rd),
        .rd_data_wb(wb_reg_data),
        .ex_alu_result(ex_alu_result),
        .mem_alu_result(mem_alu_result),
        .ex_rd(ex_rd),
        .mem_rd(mem_rd),
        .ex_reg_write(ex_reg_write),
        .mem_reg_write(mem_reg_write),
        .forward_rs1(forward_rs1_id),
        .forward_rs2(forward_rs2_id),
        .rs1_hzd(rs1_hzd),
        .rs2_hzd(rs2_hzd),
        .rd_hzd(rd_hzd),
        .rs1_out(id_rs1),
        .rs2_out(id_rs2),
        .rd_out(id_rd),
        .pc_out(id_pc),
        .rs1_data_out(id_rs1_data),
        .rs2_data_out(id_rs2_data),
        .imm_out(id_imm),
        .funct3_out(id_funct3),
        .alu_ctrl_out(id_alu_ctrl),
        .branch_ctrl_out(id_branch_ctrl),
        .wb_sel_out(id_wb_sel),
        .reg_write_out(id_reg_write),
        .mem_read_out(id_mem_read),
        .mem_write_out(id_mem_write),
        .mem_to_reg_out(id_mem_to_reg),
        .jal_out(id_jal),
        .jalr_out(id_jalr),
        .branch_out(id_branch),
        .alu_src_out(id_alu_src)
    );

    // EX Stage
    ex_stage_pip ex_stage (
        .clk(clk),
        .rst(rst),
        .pc_in(id_pc),
        .rs1_data_in(id_rs1_data),
        .rs2_data_in(id_rs2_data),
        .funct3_in(id_funct3),
        .imm_in(id_imm),
        .rs1_in(id_rs1),
        .rs2_in(id_rs2),
        .rd_in(id_rd),
        .alu_ctrl_in(id_alu_ctrl),
        .branch_ctrl_in(id_branch_ctrl),
        .wb_sel_in(id_wb_sel),
        .reg_write_in(id_reg_write),
        .mem_read_in(id_mem_read),
        .mem_write_in(id_mem_write),
        .mem_to_reg_in(id_mem_to_reg),
        .alu_src_in(id_alu_src),
        .branch_in(id_branch),
        .jal_in(id_jal),
        .jalr_in(id_jalr),
        .forward_rs1(forward_rs1_ex),
        .forward_rs2(forward_rs2_ex),
        .forward_data_mem(mem_alu_result),
        .forward_data_wb(wb_reg_data),
        .pc_out(ex_pc),
        .funct3_out(ex_funct3),
        .alu_result_out(ex_alu_result),
        .rs2_data_out(ex_rs2_data),
        .rd_out(ex_rd),
        .rs1_out(ex_rs1),
        .rs2_out(ex_rs2),
        .branch_target_out(branch_target),
        .jump_target_out(jump_target),
        .wb_sel_out(ex_wb_sel),
        .mem_read_out(ex_mem_read),
        .mem_write_out(ex_mem_write),
        .reg_write_out(ex_reg_write),
        .mem_to_reg_out(ex_mem_to_reg),
        .branch_taken_out(branch_taken),
        .jump_out(jump),
        .alu_a_debug(dbg_ex_alu_op_a),
        .alu_b_debug(dbg_ex_alu_op_b),
        .alu_ctrl_debug(ex_alu_ctrl)  // Added for debug
    );

    // MEM Stage
    mem_stage_pip mem_stage (
        .clk(clk),
        .rst(rst),
        .pc_in(ex_pc),
        .alu_result_in(ex_alu_result),
        .rs2_data_in(ex_rs2_data),
        .funct3_in(ex_funct3),
        .rd_in(ex_rd),
        .wb_sel_in(ex_wb_sel),
        .mem_read_in(ex_mem_read),
        .mem_write_in(ex_mem_write),
        .reg_write_in(ex_reg_write),
        .mem_to_reg_in(ex_mem_to_reg),
        .pc_out(mem_pc),
        .alu_result_out(mem_alu_result),
        .mem_data_out(mem_data),
        .rd_out(mem_rd),
        .wb_sel_out(mem_wb_sel),
        .reg_write_out(mem_reg_write),
        .mem_to_reg_out(mem_mem_to_reg)
    );

    // WB Stage
    wb_stage_pip wb_stage (
        .clk(clk),
        .rst(rst),
        .pc_in(mem_pc),
        .alu_result_in(mem_alu_result),
        .mem_data_in(mem_data),
        .rd_in(mem_rd),
        .wb_sel(mem_wb_sel),
        .reg_write_in(mem_reg_write),
        .mem_to_reg_in(mem_mem_to_reg),
        .reg_data_out(wb_reg_data),
        .rd_out(wb_rd),
        .reg_write_out(wb_reg_write)
    );

    // Hazard Unit
    hazard_unit hzd (
        .id_rs1(rs1_hzd),
        .id_rs2(rs2_hzd),
        .ex_rd(ex_rd),
        .ex_mem_read(ex_mem_read),
        .branch_taken(branch_taken),
        .jump(jump),
        .pc_write(pc_write),
        .if_id_write(if_id_write),
        .id_ex_write(id_ex_write),
        .if_id_flush(if_id_flush),
        .id_ex_flush(id_ex_flush)
    );

    // Forwarding Unit
    forward_unit fwd (
        .ex_rs1(ex_rs1),
        .ex_rs2(ex_rs2),
        .id_rs1(id_rs1),
        .id_rs2(id_rs2),
        .ex_rd(ex_rd),          // Added missing connection
        .mem_rd(mem_rd),
        .wb_rd(wb_rd),
        .ex_reg_write(ex_reg_write),  // Added missing connection
        .mem_reg_write(mem_reg_write),
        .wb_reg_write(wb_reg_write),
        .forward_rs1_ex(forward_rs1_ex),
        .forward_rs2_ex(forward_rs2_ex),
        .forward_rs1_id(forward_rs1_id),
        .forward_rs2_id(forward_rs2_id)
    );

    // Debug assignments
    assign dbg_if_pc = if_pc;
    assign dbg_if_instr = if_instr;
    assign dbg_id_rs1 = id_rs1;
    assign dbg_id_rs2 = id_rs2;
    assign dbg_id_rd = id_rd;
    assign dbg_id_rs1_data = id_rs1_data;
    assign dbg_id_rs2_data = id_rs2_data;
    assign dbg_ex_alu_ctrl = ex_alu_ctrl;  // Now shows actual EX stage control
    assign dbg_ex_alu_result = ex_alu_result;
    assign dbg_ex_branch_target = branch_target;
    assign dbg_ex_branch_taken = branch_taken;
    assign dbg_mem_alu_result = mem_alu_result;
    assign dbg_mem_data = mem_data;
    assign dbg_mem_write_en = ex_mem_write;
    assign dbg_mem_read_en = ex_mem_read;
    assign dbg_wb_data = wb_reg_data;
    assign dbg_wb_rd = wb_rd;
    assign dbg_wb_reg_write = wb_reg_write;

endmodule