`timescale 1ns / 1ps

module seven_seg_display(
    input [1:0] state, 
	 input [1:0] game_status,
	 input clock, 
	 input reset,
    output reg a, b, c, d, e, f, g, h = 1, e1, e2, e3
    );

parameter GAME_INIT=2'b00, P1_TURN=2'b01, P2_TURN=2'b10, END_GAME=2'b11; //STATES 
parameter STILL_PLAYING=2'b00, P1_WINS=2'b01, P2_WINS=2'b10, TIE=2'b11; //game status 

always @(game_status, state) 
begin 
	case(game_status) 
		P1_WINS: begin 
		         assign e1 = 0; 
					assign e2 = 0; 
					assign e3 = 0; 
					{a,b,c,d,e,f,g} <= 7'b1001111;
		         end 
		P2_WINS: begin 
		         assign e1 = 0; 
					assign e2 = 0; 
					assign e3 = 0; 
					{a,b,c,d,e,f,g} <= 7'b0010010; 
               end	
		TIE: begin 
		     assign e1 = 0; 
			  assign e2 = 0; 
			  assign e3 = 0; 
			  {a,b,c,d,e,f,g} <= 7'b0000001; 
           end	 
		STILL_PLAYING: begin 
								case(state) 
									P1_TURN: 
									begin
										assign e1 = 0; 
										assign e2 = 1; 
										assign e3 = 1; 
										{a,b,c,d,e,f,g} <= 7'b1001111;
									end 
									P2_TURN: 
									begin 
										assign e1 = 1; 
										assign e2 = 1; 
										assign e3 = 0; 
										{a,b,c,d,e,f,g} <= 7'b0010010;
									end 
									default: 
									begin 
										assign e1 = 0; 
										assign e2 = 1; 
										assign e3 = 1; 
										{a,b,c,d,e,f,g} <= 7'b1001111;
									end
						   endcase
							end
	endcase
	end
endmodule
