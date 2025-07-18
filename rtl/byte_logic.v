// Description: Byte masking for store instructions
// Supports store-byte, store-half-word and store-word

module byte_logic (
      input wire [2:0] funct3, 
      input wire [1:0] addr_lsb,    // 2-bit lsb of address
      output reg [3:0] byte_enable 

);

always @(*) begin 
      case (funct3)
            3'b000: begin // sb
               case (addr_lsb)
                  2'b00: byte_enable = 4'b0001; // 0th byte
                  2'b01: byte_enable = 4'b0010; // 1st byte
                  2'b10: byte_enable = 4'b0100; // 2nd byte
                  2'b11: byte_enable = 4'b1000; // 3rd byte
                  default: byte_enable = 4'b0000;
               endcase
            end
            3'b001: begin // sh
               case (addr_lsb)
                  2'b00: byte_enable = 4'b0011; // 0th and 1st bytes
                  2'b10: byte_enable = 4'b1100; // 2nd and 3rd bytes
                  default: byte_enable = 4'b0000;
               endcase
            end
            3'b010: begin // sw
               byte_enable = 4'b1111; // all bytes
            end

            default: byte_enable = 4'b0000; // invalid funct3
      endcase
end

endmodule

