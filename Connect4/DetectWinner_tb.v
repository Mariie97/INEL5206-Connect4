`timescale 1ns / 1ps


`include "DetectWinner.v"


////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:29:57 04/17/2021
// Design Name:   DetectWinner
// Module Name:   C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/DetectWinner_tb.v
// Project Name:  Connect4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DetectWinner
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DetectWinner_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [15:0] game_board;
	reg [15:0] player_cells;

	// Outputs
	wire [1:0] game_status;

	// Instantiate the Unit Under Test (UUT)
	DetectWinner uut (
		.clk(clk), 
		.reset(reset), 
		.game_board(game_board), 
		.player_cells(player_cells), 
		.game_status(game_status)
	);

	always #10 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		game_board = 0;
		player_cells = 0;

		// Wait 100 ns for global reset to finish
		
//All posibles combination to win
//		#10 game_board = 16'b0000000000001111; //1st row
//		#10 game_board = 16'b0000000011110000; //2nd row
//		#10 game_board = 16'b0000111100000000; //3rd row
//		#10 game_board = 16'b1111000000000000; //4th row
//		#10 game_board = 16'b0001000100010001; //1st column
//		#10 game_board = 16'b0010001000100010; //2nd column
//		#10 game_board = 16'b0100010001000100; //3rd column
//		#10 game_board = 16'b1000100010001000; //4th column
//		#10 game_board = 16'b0001001001001000; //Top diagonal
//		#10 game_board = 16'b1000010000100001; //Bottom diagonal
		
		#100;
		#10 game_board = 16'b0000000000001101; //1st row
		#10 game_board = 16'b0000000000001111; //1st row
		player_cells =   16'b0000000000000000; //p1 wins
	
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0000000000001101; //1st row
		#10 game_board = 16'b0000000000001111; //1st row
		player_cells =   16'b0000000000001111; //p1 wins

		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		
		#10 game_board = 16'b1111111111111111; //Tie Game
		player_cells = 16'b0101101001011010;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0100010001000100;
		player_cells = 16'b0100010001000100;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010001000100010;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#10 game_board = 16'b0010001000100010;
		player_cells = 16'b0010000000100000;
		
		#5 reset = 1'b1;
		game_board = 0;
		player_cells = 0;
		#5 reset = 1'b0;
		
		#50 $finish;
        
		// Add stimulus here


		



	end
      
endmodule

