// Description: EX-stage pipeline initialization

module ex_stage_pip (
    input wire clk,
    input wire rst,
    input wire [31:0] pc_in,
    input wire [31:0] rs1_data_in,
    input wire [31:0] rs2_data_in,
    input wire [2:0] funct3_in,
    input wire [31:0] imm_in,
    input wire [4:0] rs1_in,
    input wire [4:0] rs2_in,
    input wire [4:0] rd_in,
    input wire [3:0] alu_ctrl_in,
    input wire [2:0] branch_ctrl_in,
    input wire [1:0] wb_sel_in,
    input wire reg_write_in,
    input wire mem_read_in,
    input wire mem_write_in,
    input wire mem_to_reg_in,
    input wire alu_src_in,
    input wire branch_in,
    input wire jal_in,
    input wire jalr_in,

    // input from forwarding unit
    input wire [1:0] forward_rs1,
    input wire [1:0] forward_rs2,
    input wire [31:0] forward_data_mem,
    input wire [31:0] forward_data_wb,

    output wire [31:0] pc_out,
    output wire [2:0] funct3_out,
    output wire [31:0] alu_result_out,
    output wire [31:0] rs2_data_out,
    output wire [4:0] rd_out,
    output wire [4:0] rs1_out,
    output wire [4:0] rs2_out,
    output wire [31:0] branch_target_out,
    output wire [31:0] jump_target_out,
    output wire [1:0] wb_sel_out,
    output wire mem_read_out,
    output wire mem_write_out,
    output wire reg_write_out,
    output wire mem_to_reg_out,
    output wire branch_taken_out,
    output wire jump_out,

    //debug signals
    output wire [31:0] alu_a_debug, 
    output wire [31:0] alu_b_debug,
    output wire [3:0] alu_ctrl_debug
    
    
);

wire [31:0] rs1_data, rs2_data;
wire [31:0] alu_A, alu_B;
wire [31:0] alu_result;
wire zero_flag;

// mux logic for rs1 and rs2 data selection based on forwarding
 assign rs1_data = (forward_rs1 == 2'b00) ? rs1_data_in:
                   (forward_rs1 == 2'b10) ? forward_data_mem:
                   (forward_rs1 == 2'b01) ? forward_data_wb : rs1_data_in;

assign rs2_data = (forward_rs2 == 2'b00) ? rs2_data_in:
                   (forward_rs2 == 2'b10) ? forward_data_mem:
                   (forward_rs2 == 2'b01) ? forward_data_wb : rs1_data_in;

assign alu_A = (alu_ctrl_in == 4'b1011) ? pc_in : rs1_data;
assign alu_B = alu_src_in ? imm_in : rs2_data; // select between immediate or rs2 data

// assignments for debugging
assign alu_a_debug = alu_A;
assign alu_b_debug = alu_B;
assign alu_ctrl_debug = alu_ctrl_in;


alu alu_unit (
    .op_A(alu_A),
    .op_B(alu_B),
    .alu_ctrl(alu_ctrl_in),
    .alu_result(alu_result),
    .zero_flag(zero_flag)
);

wire branch_taken;
wire [31:0] branch_target;

branch_unit brch_unit(
    .op_A(rs1_data),
    .op_B(rs2_data),
    .branch_ctrl(branch_ctrl_in),
    .imm(imm_in),
    .pc(pc_in),
    .branch(branch_in),
    .zero_flag(zero_flag),
    .branch_taken(branch_taken),
    .branch_target(branch_target)
);

wire jump;
wire [31:0] jump_target;

jump_unit jmp_unit(
    .pc(pc_in),
    .rs1_data(rs1_data),
    .imm(imm_in),
    .jal(jal_in),
    .jalr(jalr_in),
    .jump(jump),
    .jump_target(jump_target)
);

ex_mem_reg exmem_register (
    .clk(clk),
    .rst(rst),
    .pc_in(pc_in),
    .alu_result_in(alu_result),
    .funct3_in(funct3_in),
    .rs2_data_in(rs2_data),
    .branch_target_in(branch_target),  
    .jump_target_in(jump_target),
    .rd_in(rd_in),
    .rs1_in(rs1_in),
    .rs2_in(rs2_in),
    .wb_sel_in(wb_sel_in),
    .mem_read_in(mem_read_in),
    .mem_write_in(mem_write_in),
    .reg_write_in(reg_write_in),
    .mem_to_reg_in(mem_to_reg_in),
    .branch_taken_in(branch_taken),
    .jump_in(jump),
    .pc_out(pc_out),
    .alu_result_out(alu_result_out),
    .rs2_data_out(rs2_data_out),
    .funct3_out(funct3_out),
    .rd_out(rd_out),
    .rs1_out(rs1_out),
    .rs2_out(rs2_out),
    .branch_target_out(branch_target_out),
    .jump_target_out(jump_target_out),
    .wb_sel_out(wb_sel_out),
    .mem_read_out(mem_read_out),
    .mem_write_out(mem_write_out),
    .reg_write_out(reg_write_out),
    .mem_to_reg_out(mem_to_reg_out),
    .branch_taken_out(branch_taken_out),
    .jump_out(jump_out)

);


endmodule
