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
//s
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vending_machine(
	 input clk,
    input [1:0] item,
    input nickel,							// Update Stock Mode: +5
    input dime,
    input quarter,
    input rst,
    input admin,
    input info,
    input buy,
	 output hsync,
	 output vsync,
	 output reg [2:0] RED,
	 output reg [2:0] GREEN,
	 output reg [1:0] BLUE,
	 output [2:0] output_state,
	 output [6:0] output_money,
	 output [6:0] output_change,
	 output [15:0] output_quantity,
	 output [15:0] output_revenue
    );
	 
	 
	// Constants
	parameter PRICE_STATE =    0;
	parameter QUANTITY_STATE = 1;
	parameter REVENUE_STATE =  2;
	parameter UPDATE_STATE =   3;
	parameter BUY_STATE =      4;
	parameter DONT_CARE = 7'b1111111;
	parameter PRICE_ITEM_A = 25;
	parameter ITEM_A_PRICE = 35;
	
	// States
	reg [2:0] current_state;
	reg [2:0] next_state;
	reg [2:0] output_state_temp;
	
	// Buttons
	reg [2:0] rst_d;
	reg [2:0] buy_d;
	reg [2:0] nickel_d;
	reg [2:0] dime_d;
	reg [2:0] quarter_d;
	
	// Display
	reg [3:0] anode_register;
	reg [6:0] segment_register;
	reg [1:0] display_counter;
	wire hsync_out;
	wire vsync_out;
	wire vidon;
	wire [10:0] PixelX;
	wire [10:0] PixelY;
	
	// Quantity
	reg [15:0] item_a_quantity;
	
	// Money
	reg [6:0] current_money;
	reg [6:0] next_money;
	reg [6:0] change;
	reg [15:0] revenue;
	
	// Clocks
	wire clkdisplay, clkvga, clkdebounce, clkblink;
	
	assign hsync = ~hsync_out;
	assign vsync = ~vsync_out;
	
	clock_divider clocks(.master_clk(clk), .clk_display(clkdisplay), .clk_vga(clkvga), .clk_debounce(clkdebounce), .clk_blink(clkblink));
	
	initial begin
		current_state = PRICE_STATE;
		next_state = PRICE_STATE;
		output_state_temp = PRICE_STATE;
		rst_d = 0;
		buy_d = 0;
		nickel_d = 0;
		dime_d = 0;
		quarter_d = 0;
		display_counter = 0;
		current_money = 0;
		next_money = 0;
		change = 0;
		revenue = 0;
		item_a_quantity = 10;
	end
	
	always @(negedge clk) begin
		nickel_d <= {nickel, nickel_d[2:1]};
		dime_d <= {dime, dime_d[2:1]};
		quarter_d <= {quarter, quarter_d[2:1]};
		buy_d <= {buy, buy_d[2:1]};
		rst_d <= {rst, rst_d[2:1]};
		// FSM
		if (current_state == PRICE_STATE) begin
			if (~nickel_d[0] & nickel_d[1]) begin
//					$display("i see nickel\n");
					next_money = current_money + 5;
					next_state = BUY_STATE;
			end
			else if (~dime_d[0] & dime_d[1]) begin
//					$display("i see dime\n");
					next_money = current_money + 10;
					next_state = BUY_STATE;
			end	
			else if (~quarter_d[0] & quarter_d[1]) begin
//					$display("i see quarter\n");
					next_money = current_money + 25;
					next_state = BUY_STATE;
			end
			else if (admin == 0) begin
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
			//current_state = next_state;
		end
		else if (current_state == REVENUE_STATE) begin
			if (~rst_d[0] & rst_d[1]) begin
				revenue = 0;
				next_state = REVENUE_STATE;
			end
			else if (admin == 0) begin
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
			//current_state = next_state;
		end
		else if (current_state == UPDATE_STATE) begin
			if (~rst_d[0] & rst_d[1]) begin
				item_a_quantity = 0;
				next_state = UPDATE_STATE;
			end
			else if (~nickel_d[0] & nickel_d[1]) begin
				item_a_quantity = item_a_quantity + 5;
				next_state = UPDATE_STATE;
			end
			else if (~dime_d[0] & dime_d[1]) begin
				item_a_quantity = item_a_quantity + 10;
				next_state = UPDATE_STATE;
			end
			else if (~quarter_d[0] & quarter_d[1]) begin
				item_a_quantity = item_a_quantity + 25;
				next_state = UPDATE_STATE;
			end
			else if (admin == 0) begin
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
			//current_state = next_state;
		end
		else if (current_state == BUY_STATE) begin
			if (~rst_d[0] & rst_d[1]) begin
				next_money = 0;
				change = current_money;
				next_state = PRICE_STATE;
			end
			else if (~buy_d[0] & buy_d[1]) begin
				if (current_money == ITEM_A_PRICE) begin
					next_money = 0;
					next_state = PRICE_STATE;
					item_a_quantity = item_a_quantity - 1;
					revenue = revenue + ITEM_A_PRICE;
				end
				else if (current_money > ITEM_A_PRICE) begin
					next_money = 0;
					next_state = PRICE_STATE;
					change = current_money - ITEM_A_PRICE;
					item_a_quantity = item_a_quantity - 1;
					revenue = revenue + ITEM_A_PRICE;
				end
				else begin
					next_state = PRICE_STATE;
				end
			end
			else if (~nickel_d[0] & nickel_d[1]) begin
				next_money = current_money + 5;
				next_state = BUY_STATE;
			end
			else if (~dime_d[0] & dime_d[1]) begin
				next_money = current_money + 10;
				next_state = BUY_STATE;
			end
			else if (~quarter_d[0] & quarter_d[1]) begin
				next_money = current_money + 25;
				next_state = BUY_STATE;
			end
			//current_state = next_state;
		end
		output_state_temp = next_state;
		current_state = next_state;
		current_money = next_money;
	end
	
	assign output_state = output_state_temp;
	assign output_money = current_money;
	assign output_change = change;
	assign output_quantity = item_a_quantity;
	assign output_revenue = revenue;

endmodule
