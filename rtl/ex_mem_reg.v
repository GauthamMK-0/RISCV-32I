module ex_mem_reg (
    input wire clk,
    input wire rst,
    input wire [31:0] pc_in,
    input wire [31:0] alu_result_in,
    input wire [2:0] funct3_in,
    input wire [31:0] rs2_data_in,
    input wire [31:0] branch_target_in,
    input wire [31:0] jump_target_in,
    input wire [4:0] rd_in,
    input wire [4:0] rs1_in,
    input wire [4:0] rs2_in,
    input wire [1:0] wb_sel_in,
    input wire mem_read_in,
    input wire mem_write_in,
    input wire reg_write_in,
    input wire mem_to_reg_in,
    input wire branch_taken_in,
    input wire jump_in,

    output reg [31:0] pc_out,
    output reg [31:0] alu_result_out,
    output reg [2:0] funct3_out,
    output reg [31:0] rs2_data_out,
    output reg [4:0] rs1_out,
    output reg [4:0] rs2_out,
    output reg [4:0] rd_out,
    output reg [31:0] branch_target_out,
    output reg [31:0] jump_target_out,
    output reg [1:0] wb_sel_out,
    output reg mem_read_out,
    output reg mem_write_out,
    output reg reg_write_out,
    output reg mem_to_reg_out,
    output reg branch_taken_out,
    output reg jump_out

);

always @(posedge clk or posedge rst) begin
    if (rst) begin
        pc_out <= 32'b0;
        alu_result_out <= 32'b0;
        funct3_out <= 3'b0;
        rs2_data_out <= 32'b0;
        rd_out <= 5'b0;
        rs1_out <= 5'b0;
        rs2_out <= 5'b0;
        branch_target_out <= 32'b0;
        jump_target_out <= 32'b0;
        wb_sel_out <= 2'b0;
        mem_read_out <= 1'b0;
        mem_write_out <= 1'b0;
        reg_write_out <= 1'b0;
        mem_to_reg_out <= 1'b0;
        branch_taken_out <= 1'b0;
        jump_out <= 1'b0;
    end else begin
        pc_out <= pc_in;
        alu_result_out <= alu_result_in;
        funct3_out <= funct3_in;
        rs2_data_out <= rs2_data_in;
        rd_out <= rd_in;
        rs1_out <= rs1_in;
        rs2_out <= rs2_in;
        branch_target_out <= branch_target_in;
        jump_target_out <= jump_target_in;
        wb_sel_out <= wb_sel_in;
        mem_read_out <= mem_read_in;
        mem_write_out <= mem_write_in;
        reg_write_out <= reg_write_in;
        mem_to_reg_out <= mem_to_reg_in;
        branch_taken_out <= branch_taken_in;
        jump_out <= jump_in;
    end
end

endmodule