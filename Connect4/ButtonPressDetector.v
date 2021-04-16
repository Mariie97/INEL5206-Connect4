`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:22:04 04/13/2021 
// Design Name: 
// Module Name:    ButtonPressDetector 
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
module ButtonPressDetector(
	input clk,
	input button_signal,
	output enable
    );
	
	reg [25:0] count = 0;
	reg clk_out;
	
	always@(posedge clk)begin
		if(button_signal == 0)begin
			count <= count + 1'b1;
			if(count == 50_000_000)begin
				count <= 1'b0;
				clk_out = ~clk_out;
			end
		end else begin 
			clk_out = 0;
			count <= 1'b0;
		end
	end
	
	assign enable = clk_out;

endmodule
