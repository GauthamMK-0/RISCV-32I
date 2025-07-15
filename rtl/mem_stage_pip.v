module mem_stage_pip(
    input wire clk,
    input wire rst,
    input wire [31:0] pc_in,
    input wire [31:0] alu_result_in,
    input wire [31:0] rs2_data_in,
    input wire [2:0] funct3_in,
    input wire [4:0] rd_in,
    input wire [1:0] wb_sel_in,
    input wire mem_read_in,
    input wire mem_write_in,
    input wire reg_write_in,
    input wire mem_to_reg_in,

    output wire [31:0] pc_out,
    output wire [31:0] alu_result_out,
    output wire [31:0] mem_data_out,
    output wire [4:0] rd_out,
    output wire [1:0] wb_sel_out,
    output wire reg_write_out,
    output wire mem_to_reg_out

);
wire [1:0] addr_lsb;
wire [3:0] byte_enable; 
wire [31:0] mem_data;
wire [31:0] read_data;

assign addr_lsb = alu_result_in[1:0]; 

data_mem memory (
    .clk(clk),
    .addr(alu_result_in),
    .write_data(rs2_data_in),
    .byte_enable(byte_enable),
    .mem_write(mem_write_in),
    .mem_read(mem_read_in),
    .read_data(read_data)

);

byte_logic byte_mask (
    .funct3(funct3_in),
    .addr_lsb(addr_lsb),
    .byte_enable(byte_enable)

);

mem_mux mem_access (
    .mem_data(read_data),
    .addr_lsb(addr_lsb),
    .funct3(funct3_in),
    .mem_out(mem_data)
);

mem_wb_reg memwb_register (
    .clk(clk),
    .rst(rst),
    .reg_write_in(reg_write_in),
    .mem_to_reg_in(mem_to_reg_in),
    .alu_result_in(alu_result_in),
    .pc_in(pc_in),
    .mem_data_in(mem_data),
    .rd_in(rd_in),
    .wb_sel_in(wb_sel_in),
    .reg_write_out(reg_write_out),
    .mem_to_reg_out(mem_to_reg_out),
    .wb_sel_out(wb_sel_out),
    .pc_out(pc_out),   
    .alu_result_out(alu_result_out),
    .mem_data_out(mem_data_out),
    .rd_out(rd_out)
);





endmodule