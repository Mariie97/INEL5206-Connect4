`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:03:17 04/05/2021
// Design Name:   connect4_top
// Module Name:   C:/Users/vince/Desktop/Xilinx Projects/INEL5206-Connect4/Connect4/Connect4.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: connect4_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Connect4;

	// Inputs
	reg clk;
	reg BTN_EAST;
	reg Switch_0;
	reg Switch_1;
	reg Switch_2;
	reg Switch_3;
	//reg [1:0]state;

	// Outputs
	wire pin_0;
	wire pin_1;
	wire pin_2;
	wire pin_3;
	wire pin_4;
	wire pin_5;
	wire pin_6;
	wire pin_7;
	
	
	wire [15:0]gameboard_out;
	
	
	// Instantiate the Unit Under Test (UUT)
	connect4_top uut (
		 .clk(clk),
		.BTN_EAST(BTN_EAST),
		.Switch_0(Switch_0),
		.Switch_1(Switch_1),
		.Switch_2(Switch_2),
		.Switch_3(Switch_3),
		.pin_0(pin_0), 
		.pin_1(pin_1), 
		.pin_2(pin_2), 
		.pin_3(pin_3), 
		.pin_4(pin_4), 
		.pin_5(pin_5), 
		.pin_6(pin_6), 
		.pin_7(pin_7),
		//.state(state),
		.gameboard_out(gameboard_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		Switch_0 = 0;
		Switch_1 = 0;
		Switch_2 = 0;
		Switch_3 = 0;
		BTN_EAST = 0;
		
		
		// Wait 100 ns for global reset to finish
		#100;
		//Switch_0 = 1;
		BTN_EAST = 0;
		//BTN_EAST = 0;
		
//		Switch_0 = 0;
//		Switch_1 = 1;
//		BTN_EAST = 1;
		
		// Add stimulus here
	end
	
	always begin
		#10 clk = !clk;
	end
      
endmodule