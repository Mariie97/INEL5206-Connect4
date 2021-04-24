`timescale 1ns / 1ps

module DetectWinner(
	 input clk, 
	 input reset, 
	 input [15:0] game_board,
	 input [15:0] player_cells,
	 output reg[1:0] game_status    
    );


parameter still_playing=2'b00, p1_wins=2'b01, p2_wins=2'b10, tie=2'b11;

initial begin 
	game_status = still_playing;
end

always@(posedge clk or posedge reset)
begin
if(reset==1'b1) game_status = still_playing;
else begin
	if(game_board[12] == 1 && game_board[13] == 1 && game_board[14] == 1 && game_board[15] == 1 && 
		player_cells[12] == 1 && player_cells[13] == 1 && player_cells[14] == 1 && player_cells[15] == 1)
		begin
			game_status = p2_wins;
		end
	else begin
		if(game_board[12] == 1 && game_board[13] == 1 && game_board[14] == 1 && game_board[15] == 1 && 
			player_cells[12] == 0 && player_cells[13] == 0 && player_cells[14] == 0 && player_cells[15] == 0)
			begin
				game_status = p1_wins;
			end
		else begin
			if(game_board[8] == 1 && game_board[9] == 1 && game_board[10] == 1 && game_board[11] == 1 &&
				player_cells[8] == 1 && player_cells[9] == 1 && player_cells[10] == 1 && player_cells[11] == 1)
				begin
					game_status = p2_wins;
				end
			else begin
				if(game_board[8] == 1 && game_board[9] == 1 && game_board[10] == 1 && game_board[11] == 1 &&
					player_cells[8] == 0 && player_cells[9] == 0 && player_cells[10] == 0 && player_cells[11] == 0)
					begin
						game_status = p1_wins;
					end
				else begin
					if(game_board[4] == 1 && game_board[5] == 1 && game_board[6] == 1 && game_board[7] == 1 &&
						player_cells[4] == 1 && player_cells[5] == 1 && player_cells[6] == 1 && player_cells[7] == 1)
						begin
							game_status = p2_wins;
						end
					else begin
						if(game_board[4] == 1 && game_board[5] == 1 && game_board[6] == 1 && game_board[7] == 1 &&
							player_cells[4] == 0 && player_cells[5] == 0 && player_cells[6] == 0 && player_cells[7] == 0)
							begin
								game_status = p1_wins;
							end
						else begin
							if(game_board[0] == 1 && game_board[1] == 1 && game_board[2] == 1 && game_board[3] == 1 &&
								player_cells[0] == 1 && player_cells[1] == 1 && player_cells[2] == 1 && player_cells[3] == 1)
								begin
									game_status = p2_wins;
								end
							else begin
								if(game_board[0] == 1 && game_board[1] == 1 && game_board[2] == 1 && game_board[3] == 1 &&
									player_cells[0] == 0 && player_cells[1] == 0 && player_cells[2] == 0 && player_cells[3] == 0)
									begin
										game_status = p1_wins;
									end
								else begin
									if(game_board[12] == 1 && game_board[8] == 1 && game_board[4] == 1 && game_board[0] == 1 &&
										player_cells[12] == 1 && player_cells[8] == 1 && player_cells[4] == 1 && player_cells[0] == 1)
										begin
											game_status = p2_wins;
										end
									else begin
										if(game_board[12] == 1 && game_board[8] == 1 && game_board[4] == 1 && game_board[0] == 1 &&
											player_cells[12] == 0 && player_cells[8] == 0 && player_cells[4] == 0 && player_cells[0] == 0)
											begin
												game_status = p1_wins;
											end
										else begin
											if(game_board[13] == 1 && game_board[9] == 1 && game_board[5] == 1 && game_board[1] == 1 &&
												player_cells[13] == 1 && player_cells[9] == 1 && player_cells[5] == 1 && player_cells[1] == 1)
												begin
													game_status = p2_wins;
												end
											else begin
											if(game_board[13] == 1 && game_board[9] == 1 && game_board[5] == 1 && game_board[1] == 1 &&
												player_cells[13] == 0 && player_cells[9] == 0 && player_cells[5] == 0 && player_cells[1] == 0)
												begin
													game_status = p1_wins;
												end
											
											else begin
												if(game_board[14] == 1 && game_board[10] == 1 && game_board[6] == 1 && game_board[2] == 1 &&
													player_cells[14] == 1 && player_cells[10] == 1 && player_cells[6] == 1 && player_cells[2] == 1) 
													begin
														game_status = p2_wins;
													end
												else begin
													if(game_board[14] == 1 && game_board[10] == 1 && game_board[6] == 1 && game_board[2] == 1 &&
														player_cells[14] == 0 && player_cells[10] == 0 && player_cells[6] == 0 && player_cells[2] == 0) 
														begin
															game_status = p1_wins;
														end
													else begin 
														if(game_board[15] == 1 && game_board[11] == 1 && game_board[7] == 1 && game_board[3] == 1 &&
															player_cells[15] == 1 && player_cells[11] == 1 && player_cells[7] == 1 && player_cells[3] == 1)
															begin
																game_status = p2_wins;
															end
														else begin
															if(game_board[15] == 1 && game_board[11] == 1 && game_board[7] == 1 && game_board[3] == 1 &&
																player_cells[15] == 0 && player_cells[11] == 0 && player_cells[7] == 0 && player_cells[3] == 0)
															begin
																game_status = p1_wins;
															end
															else begin
																if(game_board[12] == 1 && game_board[9] == 1 && game_board[6] == 1 && game_board[3] == 1 &&
																	player_cells[12] == 1 && player_cells[9] == 1 && player_cells[6] == 1 && player_cells[3] == 1) 
																	begin
																		game_status = p2_wins;
																	end
																else begin
																	if(game_board[12] == 1 && game_board[9] == 1 && game_board[6] == 1 && game_board[3] == 1 &&
																		player_cells[12] == 0 && player_cells[9] == 0 && player_cells[6] == 0 && player_cells[3] == 0) 
																		begin
																			game_status = p1_wins;
																		end
																	else begin
																		if(game_board[15] == 1 && game_board[10] == 1 && game_board[5] == 1 && game_board[0] == 1 &&
																			player_cells[15] == 1 && player_cells[10] == 1 && player_cells[5] == 1 && player_cells[0] == 1) 
																			begin
																				game_status = p2_wins;
																			end
																		else begin
																			if(game_board[15] == 1 && game_board[10] == 1 && game_board[5] == 1 && game_board[0] == 1 &&
																				player_cells[15] == 0 && player_cells[10] == 0 && player_cells[5] == 0 && player_cells[0] == 0) 
																				begin
																					game_status = p1_wins;
																				end
																			if(game_board == 16'b1111111111111111)
																				begin
																					game_status = tie;
																				end
																			else begin
																				game_status = still_playing;
																			end
																		end
																	end
																end
															end
														end
													end
												end
											end
										end
									end
								end
							end
						end
					end
				end
			end
		end
	end
end
end
end

endmodule








