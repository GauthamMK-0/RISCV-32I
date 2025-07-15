module registers(
    input wire clk,
    input wire rst,
    input wire reg_write,
    input wire [31:0] rd_data,
    input wire [4:0] rs1,
    input wire [4:0] rs2,
    input wire [4:0] rd,
    output [31:0] out_data_rs1,
    output [31:0] out_data_rs2

);
reg [31:0] register_ [0:31];

assign out_data_rs1 = (rs1 == 0) ? 32'b0 : ((reg_write && (rs1 == rd))) ? rd_data : register_[rs1];
assign out_data_rs2 = (rs2 == 0) ? 32'b0 : ((reg_write && (rs2 == rd))) ? rd_data : register_[rs2];

integer i;
always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < 32; i = i + 1)
                register_[i] <= 32'b0;

        end else if (reg_write && rd != 0) begin
            register_[rd] <= rd_data;
        end
    end


  
endmodule