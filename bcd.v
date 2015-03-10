`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:36 03/09/2015 
// Design Name: 
// Module Name:    8bit_bcd 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module sixteen_bit_bcd(
    input [15:0] binary,
	 output [3:0] D4,
    output [3:0] hundreds,
    output [3:0] tens,
    output [3:0] ones
    );

	integer i;
	
	reg [3:0] hundreds_temp;
	reg [3:0] tens_temp;
	reg [3:0] ones_temp;
	reg [3:0] D4_temp;
	
	always @(binary) begin
		D4_temp = 4'd0;
		hundreds_temp = 4'd0;
		tens_temp = 4'd0;
		ones_temp = 4'd0;
		
		for (i=15; i >= 0; i=i-1) begin
			// add 3 to columns >= 5
			if (D4_temp >= 5)
				D4_temp = D4_temp + 3;
			if (hundreds_temp >= 5)
				hundreds_temp = hundreds_temp + 3;
			if (tens_temp >= 5)
				tens_temp = tens_temp + 3;
			if (ones_temp >= 5)
				ones_temp = ones_temp + 3;
				
			// shift all numbers left 1
			D4_temp = D4_temp << 1;
			D4_temp[0] = hundreds_temp[3];
			hundreds_temp = hundreds_temp << 1;
			hundreds_temp[0] = tens_temp[3];
			tens_temp = tens_temp << 1;
			tens_temp[0] = ones_temp[3];
			ones_temp = ones_temp << 1;
			ones_temp[0] = binary[i];
		end
	end
	
	assign D4 = D4_temp;
	assign hundreds = hundreds_temp;
	assign tens = tens_temp;
	assign ones = ones_temp;

endmodule
