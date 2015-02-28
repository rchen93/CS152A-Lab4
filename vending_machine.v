`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:42 02/25/2015 
// Design Name: 
// Module Name:    vending_machine 
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
module vending_machine(
	 //input clk,
    input [1:0] item,
    input nickel,
    input dime,
    input quarter,
    input rst,
    input admin,
    input info,
    input buy,
	 output [2:0] output_state,
	 output [6:0] output_money,
	 output [2:0] output_coin
    );
	 
	 
	// Constants
	parameter PRICE_STATE =    0;
	parameter QUANTITY_STATE = 1;
	parameter REVENUE_STATE =  2;
	parameter UPDATE_STATE =   3;
	parameter BUY_STATE =      4;
	parameter DONT_CARE = 7'b1111111;
	parameter PRICE_ITEM_A = 25;
	
	// States
	reg [2:0] current_state;
	reg [2:0] next_state;
	reg [2:0] output_state_temp;
	
	// Buttons
	reg [2:0] reset_d;
	reg [2:0] buy_d;
	reg [2:0] nickel_d;
	reg [2:0] dime_d;
	reg [2:0] quarter_d;
	
	// Display
	reg [3:0] anode_register;
	reg [6:0] segment_register;
	reg [1:0] display_counter;
	
	// Money
	reg [6:0] current_money;
	reg [2:0] coin;
	
	initial begin
		current_state = PRICE_STATE;
		next_state = PRICE_STATE;
		output_state_temp = PRICE_STATE;
		reset_d = 0;
		buy_d = 0;
		nickel_d = 0;
		dime_d = 0;
		quarter_d = 0;
		display_counter = 0;
		current_money = 0;
		coin = 0;
	end
	
	always @(admin or info) begin
		if (current_state == PRICE_STATE) begin
			if (admin == 0) begin
				if (info == 1) begin
					next_state = QUANTITY_STATE;
				end
			end
			else if (admin == 1) begin
				if (info == 0) begin
					next_state = REVENUE_STATE;
				end
				else if (info == 1) begin
					next_state = UPDATE_STATE;
				end
			end
			current_state = next_state;
		end
		else if (current_state == QUANTITY_STATE) begin
			if (admin == 0) begin
				if (info == 0) begin
					next_state = PRICE_STATE;
				end
			end
			else if (admin == 1) begin
				if (info == 0) begin
					next_state = REVENUE_STATE;
				end
				else if (info == 1) begin
					next_state = UPDATE_STATE;
				end
			end
			current_state = next_state;
		end
		else if (current_state == REVENUE_STATE) begin
			if (admin == 0) begin
				if (info == 0) begin
					next_state = PRICE_STATE;
				end
				else if (info == 1) begin
					next_state = QUANTITY_STATE;
				end		
			end
			else if (admin == 1) begin
				if (info == 1) begin
					next_state = UPDATE_STATE; 
				end 
			end
			current_state = next_state;
		end
		else if (current_state == UPDATE_STATE) begin
			if (admin == 0) begin
				if (info == 0) begin
					next_state = PRICE_STATE;
				end
				else if (info == 1) begin
					next_state = QUANTITY_STATE;
				end		
			end
			else if (admin == 1) begin
				if (info == 0) begin
					next_state = REVENUE_STATE; 
				end 
			end
			current_state = next_state;
		end
		output_state_temp = next_state;
	end
	
	always @(posedge nickel or posedge dime or posedge quarter) begin
		if (current_state == PRICE_STATE) begin
			next_state = BUY_STATE;
		end
		else if (current_state == BUY_STATE) begin
			coin = {nickel, dime, quarter};
			case (coin)
				3'b100: current_money = current_money + 5;
				3'b010: current_money = current_money + 10;
				3'b001: current_money = current_money + 25;
				default: current_money = current_money;
			endcase
		end
		else begin
			next_state = current_state;
		end
		current_state = next_state;
		output_state_temp = next_state;
	end
	
	assign output_state = output_state_temp;
	assign output_money = current_money;
	assign output_coin = coin;

endmodule
