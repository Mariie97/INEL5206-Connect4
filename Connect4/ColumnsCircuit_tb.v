`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:19:16 04/07/2021
// Design Name:   ColumnsCircuit
// Module Name:   C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/ColumnsCircuit_tb.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ColumnsCircuit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ColumnsCircuit_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [6:0] in_column;
	reg [1:0] state;

	// Outputs
	wire [2:0] column_decode;
	wire [41:0] out_gameboard;
	wire [41:0] out_players_cells;
	wire invalid_column;
	wire player_turn;

	// Instantiate the Unit Under Test (UUT)
	ColumnsCircuit uut (
		.clk(clk), 
		.reset(reset), 
		.in_column(in_column), 
		.state(state), 
		.column_decode(column_decode), 
		.out_gameboard(out_gameboard), 
		.out_players_cells(out_players_cells), 
		.invalid_column(invalid_column), 
		.player_turn(player_turn)
	);
	always #10 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in_column = 7'b0000001;
		state = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		//		#10 state = 2'b01; //P1		
//		 in_column = 7'b0000000;
//		
//		#25 state = 2'b10; //P2
//		in_column = 7'b0000100;
//		
//		#25 state = 2'b01; //P1
//		in_column = 7'b0000001;
//
//		#25 state = 2'b10; //P2
//		in_column = 7'b0000100;
//		
//		#25 state = 2'b01; //P1
//		in_column = 7'b1000000;
//		
//		#25 state = 2'b10; //P2
//		in_column = 7'b0000001;
//	
//		#25 state = 2'b01; //P1
//		in_column = 7'b0000001;
		 
		in_column = 7'b0000001;
		#10 state = 2'b01; //P1		

		in_column = 7'b0000001;		
		#25 state = 2'b10; //P2
		
		in_column = 7'b0000001;		
		#25 state = 2'b01; //P1

		in_column = 7'b0000001;		
		#25 state = 2'b10; //P2
		
		in_column = 7'b0000001;
		#25 state = 2'b01; //P1
		
		in_column = 7'b0000001;
		#25 state = 2'b10; //P2
		
		in_column = 7'b0000001;
		#25 state = 2'b01; //P1
		
		in_column = 7'b0000001;
		#25 state = 2'b10; //P2
		
		
		#25 reset = 1;
		
		#5 $finish;

end
initial $monitor("column=%d", in_column);            
endmodule

