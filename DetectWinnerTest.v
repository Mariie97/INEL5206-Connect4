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


	
	always #10 clk=~clk;
	
	
	initial begin
		// Initialize Inputs
		clk = 0;
		game_board = 0;
		player_cells = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
///////////// First Game (P1 Wins) ////////////////
/*		#20 game_board[0] = 1;
		player_cells[0] = 0; //P1
		
		#20 game_board[4] = 1;
		player_cells[4] = 1; //P2
		
		#20 game_board[1] = 1;
		player_cells[1] = 0; //P1
		
		#20 game_board[8] = 1;
		player_cells[8] = 1; //P2
		
		#20 game_board[5] = 1;
		player_cells[5] = 0; //P1
		
		#20 game_board[2] = 1;
		player_cells[2] = 1; //P2
		
		#20 game_board[9] = 1;
		player_cells[9] = 0; //P1
		
		#20 game_board[13] = 1;
		player_cells[13] = 1; //P2
		
		#20 game_board[3] = 1;
		player_cells[3] = 0; //P1
		
		#20 game_board[6] = 1;
		player_cells[6] = 1; //P2
		
		#20 game_board[10] = 1;
		player_cells[10] = 0; //P1
		
		#20 game_board[7] = 1;
		player_cells[7] = 1; //P2
		
		#20 game_board[14] = 1;
		player_cells[14] = 0; //P1
		
		#20 game_board[11] = 1;
		player_cells[11] = 1; //P2
		
		#20 game_board[15] = 1;
		player_cells[15] = 0; //P1
		
		#20 game_board[12] = 1;
		player_cells[12] = 1; //P2*/
//////////////// (P2 no sabe jugar xD)///////////////////		
		
		
/////////// Second Game (P2 redemption) ///////////////

	/*	#20 game_board[0] = 1;
		player_cells[0] = 0; //P1
		
		#20 game_board[1] = 1;
		player_cells[1] = 1; //P2
		
		#20 game_board[2] = 1;
		player_cells[2] = 0; //P1
		
		#20 game_board[5] = 1;
		player_cells[5] = 1; //P2
		
		#20 game_board[6] = 1;
		player_cells[6] = 0; //P1
		
		#20 game_board[9] = 1;
		player_cells[9] = 1; //P2
		
		#20 game_board[10] = 1;
		player_cells[10] = 0; //P1
		
		#20 game_board[13] = 1;
		player_cells[13] = 1; //P2*/
		
////////// se colgo P1 ////////////////////


//////// Third Game (El empate) ///////////////////


		#20 game_board[0] = 1;
		player_cells[0] = 0; //P1
		
		#20 game_board[1] = 1;
		player_cells[1] = 1; //P2
		
		#20 game_board[5] = 1;
		player_cells[5] = 0; //P1
		
		#20 game_board[2] = 1;
		player_cells[2] = 1; //P2
		
		#20 game_board[9] = 1;
		player_cells[9] = 0; //P1
		
		#20 game_board[3] = 1;
		player_cells[3] = 1; //P2
		
		#20 game_board[13] = 1;
		player_cells[13] = 0; //P1
		
		#20 game_board[4] = 1;
		player_cells[4] = 1; //P2
		
		#20 game_board[7] = 1;
		player_cells[7] = 0; //P1
		
		#20 game_board[8] = 1;
		player_cells[8] = 1; //P2
		
		#20 game_board[6] = 1;
		player_cells[6] = 0; //P1
		
		#20 game_board[10] = 1;
		player_cells[10] = 1; //P2
		
		#20 game_board[12] = 1;
		player_cells[12] = 0; //P1
		
		#20 game_board[14] = 1;
		player_cells[14] = 1; //P2
		
		#20 game_board[11] = 1;
		player_cells[11] = 0; //P1
		
		#20 game_board[15] = 1;
		player_cells[15] = 1; //P2
		
/////////// aprendieron a jugar los dos ///////


///// Verify still playing /////

/*		#20 game_board[0] = 1;
		player_cells[0] = 0; //P1
		
		#20 game_board[4] = 1;
		player_cells[4] = 1; //P2*/
		
//////////////////////////////////////




		
		#50 $finish;
	end
	
	
	 
	
	initial 
	begin
			//$monitor("GameBoard: [%b]", game_board);
			$monitor("Output: %b", game_status);
	end
      
endmodule

