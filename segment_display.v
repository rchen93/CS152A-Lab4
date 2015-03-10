`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:31 03/04/2015 
// Design Name: 
// Module Name:    segment_display 
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
module segment_display(
	 input [3:0] count,
    output [6:0] display
    );

	reg [6:0] seg_display_temp;
	
	always @(count) begin
		case(count)
			0: seg_display_temp = 7'b1000000;
			1: seg_display_temp = 7'b1111001;
			2: seg_display_temp = 7'b0100100;
			3: seg_display_temp = 7'b0110000;
			4: seg_display_temp = 7'b0011001;
			5: seg_display_temp = 7'b0010010;
			6: seg_display_temp = 7'b0000010;
			7: seg_display_temp = 7'b1111000;
			8: seg_display_temp = 7'b0000000;
			9: seg_display_temp = 7'b0010000;
			default: seg_display_temp = 7'b1111111;
		endcase
	end

	assign display = seg_display_temp;
	
endmodule
