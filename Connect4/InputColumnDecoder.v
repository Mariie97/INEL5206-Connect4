`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:04:47 04/07/2021 
// Design Name: 
// Module Name:    InputColumnDecoder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module InputColumnDecoder(
	input [6:0] in_column,
	output reg [2:0] column_decode
    );
	 
always @ (in_column)
case(in_column)
	7'b0000001: column_decode <= 2'b000;
	7'b0000010: column_decode <= 2'b001;
	7'b0000100: column_decode <= 2'b010;
	7'b0001000: column_decode <= 2'b011;
	7'b0010000: column_decode <= 2'b100;
	7'b0100000: column_decode <= 2'b101;
	7'b1000000: column_decode <= 2'b110;
endcase

endmodule
