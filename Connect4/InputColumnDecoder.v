`timescale 1ns / 1ps

module InputColumnDecoder(
	input [3:0] in_column,
	output reg [1:0] column_decode
    );
	 
always @ (in_column)
case(in_column)
	4'b0001: column_decode <= 2'b00;
	4'b0010: column_decode <= 2'b01;
	4'b0100: column_decode <= 2'b10;
	4'b1000: column_decode <= 2'b11;
	default: column_decode <= 2'b00;
endcase

endmodule
