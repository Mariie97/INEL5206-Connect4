`timescale 1ns / 1ps
module DetectWinnerTest;

	// Inputs
	reg clk;
	reg [15:0] game_board;
	reg [15:0] player_cells;

	// Outputs
	wire [1:0] game_status;

	// Instantiate the Unit Under Test (UUT)
	DetectWinner uut (
		.clk(clk), 
		.game_board(game_board), 
		.player_cells(player_cells), 
		.game_status(game_status)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		game_board = 0;
		player_cells = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#20 game_board[1] = 1;
		player_cells[1] = 0; //P1
		
		#20 game_board[5] = 1;
		player_cells[5] = 1; //P2
		
		#20 game_board[2] = 1;
		player_cells[2] = 0; //P1
		
		#20 game_board[6] = 1;
		player_cells[6] = 1; //P2
		
		#20 game_board[0] = 1;
		player_cells[0] = 0; //P1
		
		#20 game_board[4] = 1;
		player_cells[4] = 1; //P2
		
		#20 game_board[3] = 1;
		player_cells[3] = 0; //P1
		
		

	end
	
	initial 
	begin
					$monitor("GameBoard: [%b]", game_board);
					$monitor("Output: %b", game_status);

	end
      
endmodule