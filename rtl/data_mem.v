// Description: Synchronous data memory 
// Supports byte-wise write enbables

module data_mem (
    input wire clk,
    input wire [31:0] addr,
    input wire [31:0] write_data,
    input [3:0] byte_enable,
    input wire mem_write,
    input wire mem_read,
    output reg [31:0] read_data

);

    reg [31:0] mem [0:1023];  // 1024 x 4 = 4 KB memory

always @(posedge clk) begin
    if (mem_write) begin                                                   // word-alligned address
        if (byte_enable[0]) mem[addr[11:2]][7:0] <= write_data[7:0];       // byte masking to write data
        if (byte_enable[1]) mem[addr[11:2]][15:8] <= write_data[15:8];
        if (byte_enable[2]) mem[addr[11:2]][23:16] <= write_data[23:16];
        if (byte_enable[3]) mem[addr[11:2]][31:24] <= write_data[31:24];
    end
end

always @(posedge clk) begin
    if (mem_read) begin
        read_data <= mem[addr[11:2]];
    end else begin
        read_data <= 32'b0; 
    end
end

endmodule
