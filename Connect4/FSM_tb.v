`timescale 1ns / 1ps


module FSM_tb;

	// Inputs
	reg clk;
	reg reset;
	reg player_turn;
	reg [1:0] in_game_status;

	// Outputs
	wire [1:0] out_game_status;
	wire [1:0] current_state;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.clk(clk), 
		.reset(reset), 
		.in_game_status(in_game_status), 
		.out_game_status(out_game_status),
		.current_state(current_state),
		.player_turn(player_turn)
	);

	always #10 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		in_game_status = 0;
		player_turn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		#10 player_turn = 0;
		#10 player_turn = 1;
		#10 player_turn = 0;
		#10 player_turn = 1;
		#10 player_turn = 0;
		#10 player_turn = 1;
		
		#10 reset = 1;
		#5 reset = 0;
		
		#10 player_turn = 0;
		in_game_status = 2'b01;	
		
		#50 $finish;
	end
      
endmodule

