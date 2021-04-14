`timescale 1ns / 1ps


module ColumnSelector(input clk, // clock
					input reset, // reset
					input [2:0] in_column, // selected column (0-6)
					input [1:0] state,
					output reg [41:0] out_gameboard, // keep track of selected and empty cells. 0-Empty, 1-Selected
					output reg [41:0] out_players_cells // keep track of player cells. 0-Player1, 1-Player2 
					//output out_invalidColumn // 0-column is valid, 1-column is invalid, is full 
					
    );
	 

integer i, column_index;

reg flag_token_placed = 0; 

always@(state)
begin	
//	if(reset==1'b1)
//	begin
//		out_gameboard = 42'bX;
//		out_players_cells = 42'bX;
//	end

	case(state)
		2'b00: out_gameboard = 42'b0; // Game init
		2'b01: begin  //P1 turn 
					if(out_gameboard[in_column]==1'b0)
						begin
							out_gameboard[in_column] = 1;
							out_players_cells[in_column] = 0;
						end
					else
						begin
							for(i=in_column+7; i<=41; i=i+7)
								begin
									if(out_gameboard[i]==1'b0 && flag_token_placed==1'b0)
										begin
											out_gameboard[i]=1;
											out_players_cells[i] = 0;
											flag_token_placed = 1;
										end
								end
						assign flag_token_placed = 0;

						end
					end
			2'b10: //P2 turn 
			begin  
					if(out_gameboard[in_column]==1'b0)
						begin
							out_gameboard[in_column] = 1;
							out_players_cells[in_column] = 1;
						end
					else
						begin
							for(i=in_column+7; i<=41; i=i+7)
								begin
									if(out_gameboard[i]==1'b0 && flag_token_placed==1'b0)
										begin
											out_gameboard[i]=1;
											out_players_cells[i] = 1;
											assign flag_token_placed = 1;
										end
								end
							assign flag_token_placed = 0;
						end
					end
			//2'b11: //End Game
	
	endcase

end
endmodule





