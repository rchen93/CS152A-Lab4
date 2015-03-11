`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:34:00 03/10/2015 
// Design Name: 
// Module Name:    change_machine 
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
module change_machine(
    input [6:0] change,
    output [3:0] nickel,
    output [3:0] dime,
    output [3:0] quarter
    );
	 
	 integer i;
	 
	 reg [6:0] change_temp;
	 reg [3:0] num_nickel;
	 reg [3:0] num_dime;
	 reg [3:0] num_quarter;
	 reg [3:0] remainder [1:0];
	 
	 
	 always @(change) begin
	 	num_nickel = 0;
		num_dime = 0;
		num_quarter = 0;
		change_temp = change;
		remainder[0] = 0;		// dime
		remainder[1] = 0;		// quarter
		
		for (i=0; i < 100; i=i+1) begin
			if (change_temp > 0) begin
				remainder[1] = (change_temp % 25);
				remainder[0] = (change_temp % 10);
				
				if (change_temp < 10) begin
					num_nickel = 1;
					change_temp = 0;
				end
				else if (remainder[1] == 0) begin
					num_quarter = change_temp / 25;
					change_temp = 0;
				end
				else if (remainder[0] == 0) begin
					num_dime = change_temp / 10;
					change_temp = 0;
				end
				else if (remainder[1] > remainder[0]) begin
					num_dime = num_dime + (change_temp / 10);
					change_temp = remainder[0];
				end
				else begin
					num_quarter = num_quarter + (change_temp / 25);
					change_temp = remainder[1];
				end
			end
		end
	 end
	 
	 assign nickel = num_nickel;
	 assign dime = num_dime;
	 assign quarter = num_quarter;

endmodule
