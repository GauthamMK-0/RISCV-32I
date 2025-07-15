module id_stage_pip (
    input wire clk,
    input wire rst,
    input wire id_ex_flush,
    input wire id_ex_write,
    input wire [31:0] instr_in,
    input wire [31:0] pc_in,
    input wire reg_write_wb,
    input wire [4:0] rd_wb,
    input wire [31:0] rd_data_wb,
    input wire [31:0] ex_alu_result,
    input wire [31:0] mem_alu_result,
    input wire [4:0] ex_rd,
    input wire [4:0] mem_rd,
    input wire ex_reg_write,
    input wire mem_reg_write,

    input wire [1:0] forward_rs1,
    input wire [1:0] forward_rs2,

    output wire [4:0] rs1_hzd,
    output wire [4:0] rs2_hzd,
    output wire [4:0] rd_hzd,

    output wire [4:0] rs1_out,
    output wire [4:0] rs2_out,
    output wire [4:0] rd_out,
    output wire [31:0] pc_out,
    output wire [31:0] rs1_data_out,
    output wire [31:0] rs2_data_out,
    output wire [31:0] imm_out,
    output wire [2:0] funct3_out,
    output wire [3:0] alu_ctrl_out,
    output wire [2:0] branch_ctrl_out,
    output wire [1:0] wb_sel_out,
    output wire reg_write_out,
    output wire mem_read_out,
    output wire mem_write_out,
    output wire mem_to_reg_out,
    output wire jal_out,
    output wire jalr_out,
    output wire branch_out,
    output wire alu_src_out

);

wire [6:0] opcode;
wire [2:0] funct3;
wire [6:0] funct7;
wire [4:0] rs1, rs2, rd;
wire [31:0] imm;

wire [31:0] rs1_data, rs2_data;
wire [3:0] alu_ctrl;
wire [2:0] branch_ctrl;
wire [1:0] wb_sel;
wire reg_write, mem_read, mem_write, mem_to_reg;
wire jal, jalr, branch, alu_src;

assign rs1_hzd = rs1;
assign rs2_hzd = rs2;
assign rd_hzd = rd;

wire [31:0] rs1_data_forwarded;
assign rs1_data_forwarded = (forward_rs1 == 2'b11) ? ex_alu_result :    // Forward from EX
                           (forward_rs1 == 2'b10) ? mem_alu_result :   // Forward from MEM 
                           (forward_rs1 == 2'b01) ? rd_data_wb :       // Forward from WB
                           rs1_data;                                   // Default: register file

wire [31:0] rs2_data_forwarded; 
assign rs2_data_forwarded = (forward_rs2 == 2'b11) ? ex_alu_result :   // Forward from EX
                           (forward_rs2 == 2'b10) ? mem_alu_result :   // Forward from MEM
                           (forward_rs2 == 2'b01) ? rd_data_wb :       // Forward from WB
                           rs2_data;                                   // Default: register file


instr_decoder decoder (
    .instr(instr_in),
    .opcode(opcode),
    .rd(rd),
    .rs1(rs1),
    .rs2(rs2),
    .funct3(funct3),
    .funct7(funct7),
    .imm(imm)
);

control_unit control (
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .alu_ctrl(alu_ctrl),
    .branch_ctrl(branch_ctrl),
    .wb_sel(wb_sel),
    .reg_write(reg_write),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_to_reg(mem_to_reg),
    .jal(jal),
    .jalr(jalr),
    .branch(branch),
    .alu_src(alu_src)
);

registers reg_file (
    .clk(clk),
    .rst(rst),
    .reg_write(reg_write_wb),
    .rd_data(rd_data_wb),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd_wb),
    .out_data_rs1(rs1_data),
    .out_data_rs2(rs2_data)
);

id_ex_reg idex_register (
    .clk(clk),
    .rst(rst),
    .pc_in(pc_in),
    .id_ex_write(id_ex_write),
    .id_ex_flush(id_ex_flush),
    .rs1_data_in(rs1_data_forwarded),
    .rs2_data_in(rs2_data_forwarded),
    .imm_in(imm),
    .funct3_in(funct3),
    .rs1_in(rs1),
    .rs2_in(rs2),
    .rd_in(rd), 
    .alu_ctrl_in(alu_ctrl),
    .branch_ctrl_in(branch_ctrl),
    .wb_sel_in(wb_sel),
    .reg_write_in(reg_write),
    .mem_read_in(mem_read),
    .mem_write_in(mem_write),
    .mem_to_reg_in(mem_to_reg),
    .jal_in(jal),  
    .jalr_in(jalr),
    .branch_in(branch),
    .alu_src_in(alu_src),
    .pc_out(pc_out),
    .rs1_data_out(rs1_data_out),  
    .rs2_data_out(rs2_data_out),
    .imm_out(imm_out),
    .funct3_out(funct3_out),
    .rs1_out(rs1_out),
    .rs2_out(rs2_out),
    .rd_out(rd_out),
    .alu_ctrl_out(alu_ctrl_out),
    .branch_ctrl_out(branch_ctrl_out),
    .wb_sel_out(wb_sel_out),
    .reg_write_out(reg_write_out),
    .mem_read_out(mem_read_out),
    .mem_write_out(mem_write_out),
    .mem_to_reg_out(mem_to_reg_out),
    .jal_out(jal_out),
    .jalr_out(jalr_out),
    .branch_out(branch_out),
    .alu_src_out(alu_src_out)
);

endmodule