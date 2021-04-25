`timescale 1ns / 1ps
 
module ClockDelay(
    input clk_in,
    output reg clk_out
    );
		
	 reg [27:0]count = 0;
	 always @(posedge clk_in)
		 begin
			count <= count+1;
			if(count == 65000000)
			begin
				count <= 0;
				clk_out = ~clk_out;
			end
	 end
endmodule