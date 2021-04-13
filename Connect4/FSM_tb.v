`timescale 1ns / 1ps


module FSM_tb;

	// Inputs
	reg clk;
	reg reset;
	reg invalid_column;
	reg player_turn;
	reg [1:0] in_game_status;

	// Outputs
	wire [1:0] out_game_status;
	wire [1:0] current_state;
	wire throw_again;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.reset(reset), 
		.invalid_column(invalid_column), 
		.in_game_status(in_game_status), 
		.out_game_status(out_game_status),
		.current_state(current_state),
		.throw_again(throw_again),
		.player_turn(player_turn)
	);

	always #10 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		invalid_column = 0;
		in_game_status = 0;
		player_turn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		#20 invalid_column = 1; // Column is full, player 1 should keep playing
		#20 invalid_column = 0;
		player_turn = 1;
	
		#15 player_turn = 0;
		#15 player_turn = 1;
		#15 player_turn = 0;
	
		#20 in_game_status = 2'b10; // Tie Game, Board is full
		
		#20 reset=1;
		in_game_status = 2'b00;		
		#20 reset=0;
		

		#20 invalid_column = 1; // Column is full, player 1 should keep playing
		#20 invalid_column = 0; 
		#15 player_turn = 1;
		#15 player_turn = 0;

		#20 in_game_status = 2'b01; //P1 Wins
		
		#20 reset=1;
		player_turn = 0;
		in_game_status = 2'b00;	
		#15 player_turn = 1;
		#20 in_game_status = 2'b01; // P2 wins
		
		#50 $finish;
	end
      
endmodule

