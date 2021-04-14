`timescale 1ns / 1ps

module DetectWinner(
	 input clk, 
	 input [15:0] game_board,
	 input [15:0] player_cells,
	 output reg[1:0] game_status    
    );


parameter still_playing=2'b00, p1_wins=2'b01, p2_wins=2'b10, tie=2'b11; //STATES



always@(posedge clk)
begin
//Set the state of the game to be still playing. If another condition is met it will be changed along the way.
game_status = still_playing; 


	//Verify first if each possible combination is met. If it is, figure out which player is responsible and then assign game_status
	if (game_board[12] == 1 && game_board[13] == 1 && game_board[14] == 1 && game_board[15] == 1) //Horizontal Fourth Row
		begin
				if (player_cells[12] == 1 && player_cells[13] == 1 && player_cells[14] == 1 && player_cells[15] == 1) 
						game_status = p2_wins;
				else if (player_cells[12] == 0 && player_cells[13] == 0 && player_cells[14] == 0 && player_cells[15] == 0)
						game_status = p1_wins;
		end
	else if (game_board[8] == 1 && game_board[9] == 1 && game_board[10] == 1 && game_board[11] == 1) //Horizontal Third Row
		begin
				if (player_cells[8] == 1 && player_cells[9] == 1 && player_cells[10] == 1 && player_cells[11] == 1)
						game_status = p2_wins;
				else if (player_cells[8] == 0 && player_cells[9] == 0 && player_cells[10] == 0 && player_cells[11] == 0)
						game_status = p1_wins;
		end
	else if (game_board[4] == 1 && game_board[5] == 1 && game_board[6] == 1 && game_board[7] == 1) //Horizontal Second Row
		begin 
				if (player_cells[4] == 1 && player_cells[5] == 1 && player_cells[6] == 1 && player_cells[7] == 1)
						game_status = p2_wins;
				else if (player_cells[4] == 0 && player_cells[5] == 0 && player_cells[6] == 0 && player_cells[7] == 0)
						game_status = p1_wins;
		end
	else if (game_board[0] == 1 && game_board[1] == 1 && game_board[2] == 1 && game_board[3] == 1) // Horizontal First Row
		begin
				if (player_cells[0] == 1 && player_cells[1] == 1 && player_cells[2] == 1 && player_cells[3] == 1) 
						game_status = p2_wins;
				else if (player_cells[0] == 0 && player_cells[1] == 0 && player_cells[2] == 0 && player_cells[3] == 0) 
						game_status = p1_wins;
		end
	else if (game_board[12] == 1 && game_board[8] == 1 && game_board[4] == 1 && game_board[0] == 1) // Vertical First Column
		begin
				if (player_cells[12] == 1 && player_cells[8] == 1 && player_cells[4] == 1 && player_cells[0] == 1) 
						game_status = p2_wins;
				else if (player_cells[12] == 0 && player_cells[8] == 0 && player_cells[4] == 0 && player_cells[0] == 0) 
						game_status = p1_wins;
		end
	else if (game_board[13] == 1 && game_board[9] == 1 && game_board[5] == 1 && game_board[1] == 1) // Vertical Second Column
		begin
				if (player_cells[13] == 1 && player_cells[9] == 1 && player_cells[5] == 1 && player_cells[1] == 1) 
						game_status = p2_wins;
				else if (player_cells[13] == 0 && player_cells[9] == 0 && player_cells[5] == 0 && player_cells[1] == 0) 
						game_status = p1_wins;
		end
	else if (game_board[14] == 1 && game_board[10] == 1 && game_board[6] == 1 && game_board[2] == 1) // Vertical Third Column
		begin
				if (player_cells[14] == 1 && player_cells[10] == 1 && player_cells[6] == 1 && player_cells[2] == 1) 
						game_status = p2_wins;
				else if (player_cells[14] == 0 && player_cells[10] == 0 && player_cells[6] == 0 && player_cells[2] == 0)
						game_status = p1_wins;	
		end
	else if (game_board[15] == 1 && game_board[11] == 1 && game_board[7] == 1 && game_board[3] == 1) // Vertical Fourth Column
		begin
				if (player_cells[15] == 1 && player_cells[11] == 1 && player_cells[7] == 1 && player_cells[3] == 1) 
						game_status = p2_wins;
				else if (player_cells[15] == 0 && player_cells[11] == 0 && player_cells[7] == 0 && player_cells[3] == 0)
						game_status = p1_wins;
		end
	else if (game_board[12] == 1 && game_board[9] == 1 && game_board[6] == 1 && game_board[3] == 1) // Diagonal Starting from Fourth Row, First Column going Down and Right
		begin
				if (player_cells[12] == 1 && player_cells[9] == 1 && player_cells[6] == 1 && player_cells[3] == 1) 
						game_status = p2_wins;
				else if (player_cells[12] == 0 && player_cells[9] == 0 && player_cells[6] == 0 && player_cells[3] == 0) 
						game_status = p1_wins;
		end
	else if (game_board[15] == 1 && game_board[10] == 1 && game_board[5] == 1 && game_board[0] == 1) // Diagonal Starting from Fourth Row, Fourth Column going Down and Left
		begin
				if (player_cells[15] == 1 && player_cells[10] == 1 && player_cells[5] == 1 && player_cells[0] == 1) 
						game_status = p2_wins;
				else if (player_cells[15] == 0 && player_cells[10] == 0 && player_cells[5] == 0 && player_cells[0] == 0)
						game_status = p1_wins;
		end
						
	
	//Verify if no player has won yet and the board is filled completely. This results in a tie.
	if (game_status == still_playing)
		begin
			if(game_board[0] == 1 && game_board[1] == 1 && game_board[2] == 1 & game_board[3] == 1 && game_board[4] == 1 &&
			game_board[5] == 1 && game_board[6] == 1 && game_board[7] == 1 && game_board[8] == 1 && game_board[9] == 1 &&
			game_board[10] == 1 && game_board[11] == 1 && game_board[12] == 1 && game_board[13] == 1 && game_board[14] == 1 &&
			game_board[15] == 1)
			game_status = tie;
		end
end

endmodule

















/*input [0:3] P1,
    input [0:3} P2,
    input START,
    output [0:15] Red,
	 reg [0:15] Red,
    output [0:15] Yellow,
	 reg [0:15] Yellow,
    output P1Win,
    output P2Win,
	 reg P1Win, P2Win,*/




/*begin 
		if (Red[0] == 1 && Red[1] == 1 && Red[2] == 1 && Red[3] == 1) //Horizontal First Row
			begin P1Win <= 1; end
		else if (Red[0] == 1 && Red[5] == 1 && Red[10] == 1 && Red[15] == 1) // Diagonal down and right starting first position
			begin P1Win <= 1; end
		else if (Red[0] == 1 && Red[4] == 1 && Red[8] == 1 && Red[12] == 1) //Vertical First Column
			begin P1Win <= 1; end
		else if (Red[1] == 1 & Red[5] == 1 && Red[9] == 1 && Red[13] == 1) //Vertical Second Column
			begin P1Win <= 1; end
		else if (Red[2] == 1 && Red[6] == 1 && Red[10] == 1 && Red[14] == 1) // Vertical Third Column
			begin P1Win <= 1; end
		else if (Red[3] == 1 && Red[7] == 1 && Red[11] == 1 && Red[15] == 1) // Vertical Fourth Column
			begin P1Win <= 1; end
		else if (Red[4] == 1 && Red[5] == 1 && Red[6] == 1 && Red[7] == 1) // Horizontal Second Row
			begin P1Win <= 1; end
		else if (Red[8] == 1 && Red[9] == 1 && Red[10] == 1 && Red[11] == 1) // Horizontal Third Row
			begin P1Win <= 1; end
		else if (Red[12] = 1 && Red[13] == 1 && Red[14] == 1 && Red[15] == 1) // Horizontal Fourth Row
			begin P1Win <= 1; end
		else if (Red[3] == 1 && Red[6] == 1 && Red[9] == 1 && Red[12] == 1) //Diagonal down and left starting last position of first row
			begin P1Win <= 1; end
		else
			P1Win <= 0;
	end*/

	// Checks P2Win
	/*begin 
		if (Yellow[0] == 1 && Yellow[1] == 1 && Yellow[2] == 1 && Yellow[3] == 1) //Horizontal First Row
			begin P2Win <= 1; end
		else if (Yellow[0] == 1 && Yellow[5] == 1 && Yellow[10] == 1 && Yellow[15] == 1) // Diagonal down and right starting first position
			begin P2Win <= 1; end
		else if (Yellow[0] == 1 && Yellow[4] == 1 && Yellow[8] == 1 && Yellow[12] == 1) //Vertical First Column
			begin P2Win <= 1; end
		else if (Yellow[1] == 1 & Yellow[5] == 1 && Yellow[9] == 1 && Yellow[13] == 1) //Vertical Second Column
			begin P2Win <= 1; end
		else if (Yellow[2] == 1 && Yellow[6] == 1 && Yellow[10] == 1 && Yellow[14] == 1) // Vertical Third Column
			begin P2Win <= 1; end
		else if (Yellow[3] == 1 && Yellow[7] == 1 && Yellow[11] == 1 && Yellow[15] == 1) // Vertical Fourth Column
			begin P2Win <= 1; end
		else if (Yellow[4] == 1 && Yellow[5] == 1 && Yellow[6] == 1 && Yellow[7] == 1) // Horizontal Second Row
			begin P2Win <= 1; end
		else if (Yellow[8] == 1 && Yellow[9] == 1 && Yellow[10] == 1 && Yellow[11] == 1) // Horizontal Third Row
			begin P2Win <= 1; end
		else if (Yellow[12] = 1 && Yellow13] == 1 && Yellow[14] == 1 && Yellow[15] == 1) // Horizontal Fourth Row
			begin P2Win <= 1; end
		else if (Yellow[3] == 1 && Yellow[6] == 1 && Yellow[9] == 1 && Yellow[12] == 1) //Diagonal down and left starting last position of first row
			begin P2Win <= 1; end
		else
			P1Win <= 0;
	end*/