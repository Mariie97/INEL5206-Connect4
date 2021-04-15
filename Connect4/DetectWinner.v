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
	if (game_board[12] == 1 && game_board[13] == 1 && game_board[14] == 1 && game_board[15] == 1) //Horizontal First Row
		begin
				if (player_cells[12] == 1 && player_cells[13] == 1 && player_cells[14] == 1 && player_cells[15] == 1) 
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[8] == 1 && game_board[9] == 1 && game_board[10] == 1 && game_board[11] == 1) //Horizontal Second Row
		begin
				if (player_cells[8] == 1 && player_cells[9] == 1 && player_cells[10] == 1 && player_cells[11] == 1)
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[4] == 1 && game_board[5] == 1 && game_board[6] == 1 && game_board[7] == 1) //Horizontal Third Row
		begin 
				if (player_cells[4] == 1 && player_cells[5] == 1 && player_cells[6] == 1 && player_cells[7] == 1)
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[0] == 1 && game_board[1] == 1 && game_board[2] == 1 && game_board[3] == 1) // Horizontal Fourth Row
		begin
				if (player_cells[0] == 1 && player_cells[1] == 1 && player_cells[2] == 1 && player_cells[3] == 1) 
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[12] == 1 && game_board[8] == 1 && game_board[4] == 1 && game_board[0] == 1) // Vertical First Column
		begin
				if (player_cells[12] == 1 && player_cells[8] == 1 && player_cells[4] == 1 && player_cells[0] == 1) 
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[13] == 1 && game_board[9] == 1 && game_board[5] == 1 && game_board[1] == 1) // Vertical Second Column
		begin
				if (player_cells[13] == 1 && player_cells[9] == 1 && player_cells[5] == 1 && player_cells[1] == 1) 
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[14] == 1 && game_board[10] == 1 && game_board[6] == 1 && game_board[2] == 1) // Vertical Third Column
		begin
				if (player_cells[14] == 1 && player_cells[10] == 1 && player_cells[6] == 1 && player_cells[2] == 1) 
						game_status = p2_wins;
				else
						game_status = p1_wins;	
		end
	else if (game_board[15] == 1 && game_board[11] == 1 && game_board[7] == 1 && game_board[3] == 1) // Vertical Fourth Column
		begin
				if (player_cells[15] == 1 && player_cells[11] == 1 && player_cells[7] == 1 && player_cells[3] == 1) 
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[12] == 1 && game_board[9] == 1 && game_board[6] == 1 && game_board[3] == 1) // Diagonal Starting from First Row, First Column going Down and Right
		begin
				if (player_cells[12] == 1 && player_cells[9] == 1 && player_cells[6] == 1 && player_cells[3] == 1) 
						game_status = p2_wins;
				else
						game_status = p1_wins;
		end
	else if (game_board[15] == 1 && game_board[10] == 1 && game_board[5] == 1 && game_board[0] == 1) // Diagonal Starting from First Row, Fourth Column going Down and Left
		begin
				if (player_cells[15] == 1 && player_cells[10] == 1 && player_cells[5] == 1 && player_cells[0] == 1) 
						game_status = p2_wins;
				else
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