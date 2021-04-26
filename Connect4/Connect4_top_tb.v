`timescale 1ns / 1ps


module Connect4_top_tb;

	// Inputs
	reg clk;
	reg reset;
	reg Switch_0;
	reg Switch_1;
	reg Switch_2;
	reg Switch_3;
	reg BTN_EAST;

	// Outputs
	wire clock_pos;
	wire [7:0] P9_leds;
	wire [7:0] P8_leds;
	wire [7:0] P7_leds;
	wire [7:0] P6_leds;
	wire [15:0] gameboard;
	wire [15:0] player_moves;
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;
	wire h;
	wire e1;
	wire e2;
	wire e3;

	// Instantiate the Unit Under Test (UUT)
	connect4_top uut (
		.clk(clk), 
		.reset(reset), 
		.clock_pos(clock_pos), 
		.P9_leds(P9_leds), 
		.P8_leds(P8_leds), 
		.P7_leds(P7_leds), 
		.P6_leds(P6_leds), 
		.Switch_0(Switch_0), 
		.Switch_1(Switch_1), 
		.Switch_2(Switch_2), 
		.Switch_3(Switch_3), 
		.BTN_EAST(BTN_EAST), 
		.gameboard(gameboard), 
		.player_moves(player_moves), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.h(h), 
		.e1(e1), 
		.e2(e2), 
		.e3(e3)
	);

	always #10 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		Switch_0 = 0;
		Switch_1 = 0;
		Switch_2 = 0;
		Switch_3 = 0;
		BTN_EAST = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		#10 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110;
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1101; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
	
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
//		 P1 WINS
		
		
		
		#80 reset = 0;
		#20 reset = 1;
		
//		//Start new game
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1101; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1101; //P25
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;		
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
//		 P2 WINS


		#80 reset = 0;
		#20 reset = 1;
		

		
		//Start new game
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;


		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1101; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;


		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;		
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;


		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;	

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1101; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;


		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;	
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;


		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1101; //P2 
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;	

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;	

		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;


		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1110; //P1
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;	
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1011; //P2
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;


		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b1101; //P1 
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;
		
		#55 {Switch_3, Switch_2, Switch_1, Switch_0} = 4'b0111; //P1 
		BTN_EAST = 1'b0;
		#5 BTN_EAST = 1'b1;	

//		Tie Game
	end
      
endmodule