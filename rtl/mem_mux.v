// Description: Memory multiplexer for RISC-V load instructions
// Assumes aligned memory access (RV32I)

module mem_mux (
    input wire [31:0] mem_data,
    input wire [1:0] addr_lsb,
    input wire [2:0] funct3,
    output reg [31:0] mem_out
);

always @(*) begin 
        case (funct3) 
            3'b000: begin // lb
                case (addr_lsb)
                    2'b00: mem_out = {{24{mem_data[7]}}, mem_data[7:0]}; // 0th byte
                    2'b01: mem_out = {{24{mem_data[15]}}, mem_data[15:8]}; // 1st byte
                    2'b10: mem_out = {{24{mem_data[23]}}, mem_data[23:16]}; // 2nd byte
                    2'b11: mem_out = {{24{mem_data[31]}}, mem_data[31:24]}; // 3rd byte
                    default: mem_out = 32'b0;
                endcase
            end

            3'b001: begin // lh
                case (addr_lsb)
                    2'b00: mem_out = {{16{mem_data[15]}}, mem_data[15:0]}; // 0th and 1st bytes
                    2'b10: mem_out = {{16{mem_data[31]}}, mem_data[31:16]}; // 2nd and 3rd bytes
                    default: mem_out = 32'b0;
                endcase
            end

            3'b010: begin // lw
                mem_out = mem_data; 
            end

            3'b100: begin // lbu
                case (addr_lsb)
                    2'b00: mem_out = {24'b0, mem_data[7:0]}; // 0th byte
                    2'b01: mem_out = {24'b0, mem_data[15:8]}; // 1st byte
                    2'b10: mem_out = {24'b0, mem_data[23:16]}; // 2nd byte
                    2'b11: mem_out = {24'b0, mem_data[31:24]}; // 3rd byte
                    default: mem_out = 32'b0;
                endcase
            end

            3'b101: begin // lhu
                case (addr_lsb)
                    2'b00: mem_out = {16'b0, mem_data[15:0]}; // 0th and 1st bytes
                    2'b10: mem_out = {16'b0, mem_data[31:16]}; // 2nd and 3rd bytes
                    default: mem_out = 32'b0;
                endcase
            end

            default: mem_out = 32'b0; //invalid funct3
        
        endcase
end

endmodule
