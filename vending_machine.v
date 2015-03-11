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
	 
	 // Testing output
	 output [2:0] output_state,
	 output [6:0] output_money,
	 output [6:0] output_change,
	 output [15:0] output_quantity,
	 output [15:0] output_revenue,
	 
	 // Output for seven segment
	 output [3:0] ones, // rightmost
	 output [3:0] tens, 
	 output [3:0] hundreds, 
	 output [3:0] D4, // leftmost
	 output [3:0] anode, 
	 output [6:0] seg_display 
    );
	 
	 
	// Constants
	parameter PRICE_STATE =    0;
	parameter QUANTITY_STATE = 1;
	parameter REVENUE_STATE =  2;
	parameter UPDATE_STATE =   3;
	parameter BUY_STATE =      4;
	parameter DC_STATE =       5;
	parameter DONT_CARE = 7'b1111111;
	parameter ITEM_A_PRICE = 16'b0000000000100011;	// 35
	parameter ITEM_B_PRICE = 16'b0000000000011001;	// 25		
	parameter ITEM_C_PRICE = 16'b0000000000001010;  // 10
	parameter ITEM_D_PRICE = 16'b0000000000001111;	// 15
	parameter DISPLAY_D = 7'b1000000;
	parameter DISPLAY_C = 7'b1000110;
	parameter DISPLAY_N = 7'b1001000;
	parameter DISPLAY_O = 7'b1000000;
	parameter DISPLAY_E = 7'b0000110;
	parameter DISPLAY_H = 7'b0001001;
	parameter DISPLAY_R = 7'b1001100;
	
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
			
	// Display for seven segment display
	reg [3:0] ones_temp;
	reg [3:0] tens_temp;
	reg [3:0] hundreds_temp;
	reg [3:0] D4_temp; 
	
	wire [6:0] display_ones;
	wire [6:0] display_tens;
	wire [6:0] display_hundreds;
	wire [6:0] display_D4; 
	
	reg [3:0] ss_anode_register;
	reg [6:0] ss_segment_register;
	reg [1:0] ss_display_counter;
	
	wire [3:0] D4_bcd;
	wire [3:0] hundreds_bcd;
	wire [3:0] tens_bcd;
	wire [3:0] ones_bcd;
	reg [15:0] bcd_value;
	
	reg [2:0] D4_flag;	// Flag to indicate 'D' or 'C' 	D:01  C: 10
	reg [1:0] OOS_flag;	// Flag to indicate 'OOS' should be shown
	
	wire [3:0] num_nickel;
	wire [3:0] num_dime;
	wire [3:0] num_quarter;
	wire [6:0] display_nickel;
	wire [6:0] display_dime;
	wire [6:0] display_quarter;
		
	// Quantity
	reg [15:0] item_a_quantity;
	reg [15:0] item_b_quantity;		
	reg [15:0] item_c_quantity;
	reg [15:0] item_d_quantity;
	
	// Money
	reg [6:0] current_money;
	reg [6:0] next_money;
	reg [6:0] change;
	reg [15:0] revenue;
	
	// Current Item
	reg [15:0] item_price;
	reg [15:0] item_quantity;
	
	// Clocks
	wire clkdisplay, clkvga, clkdebounce, clkblink;
	
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
		current_money = 0;
		next_money = 0;
		change = 0;
		revenue = 0;
		item_a_quantity = 10;
		item_b_quantity = 5;		
		item_c_quantity = 8;
		item_d_quantity = 12;
		ss_display_counter = 0;
		bcd_value = ITEM_A_PRICE;
		item_price = ITEM_A_PRICE;
		item_quantity = item_a_quantity;
		D4_flag = 0;
		OOS_flag = 0;
	end
	
	assign ones = ones_temp;
	assign tens = tens_temp;
	assign hundreds = hundreds_temp;
	assign D4 = D4_temp;
	
	// FSM
	always @(posedge clkdebounce) begin
		nickel_d <= {nickel, nickel_d[2:1]};
		dime_d <= {dime, dime_d[2:1]};
		quarter_d <= {quarter, quarter_d[2:1]};
		buy_d <= {buy, buy_d[2:1]};
		rst_d <= {rst, rst_d[2:1]};

		// Item A selected
		if (item == 2'b00) begin
			item_price = ITEM_A_PRICE;
			item_quantity = item_a_quantity;
		end
		// Item B selected
		else if (item == 2'b01) begin
			item_price = ITEM_B_PRICE;
			item_quantity = item_b_quantity;
		end
		// Item C selected
		else if (item == 2'b10) begin
			item_price = ITEM_C_PRICE;
			item_quantity = item_c_quantity;
		end
		// Item D selected
		else if (item == 2'b11) begin
			item_price = ITEM_D_PRICE;
			item_quantity = item_d_quantity;
		end
		
		// FSM
		// State for displaying 'HERE', 'C', 'OOS'
		if (current_state == DC_STATE) begin
			if (buy) begin
				OOS_flag = 0;
				D4_flag = 0;
				change = 0;
				current_money = 0;
				next_state = PRICE_STATE;
			end
		end
		else if (current_state == PRICE_STATE) begin
			bcd_value = item_price;
			// Money inputted
			if (~nickel_d[0] & nickel_d[1]) begin
				if (item_quantity == 0) begin
					OOS_flag = 1;
					next_state = DC_STATE;
				end
				else begin
					next_money = current_money + 5;
					next_state = BUY_STATE;
				end
			end
			else if (~dime_d[0] & dime_d[1]) begin
				if (item_quantity == 0) begin
					OOS_flag = 1;
					next_state = DC_STATE;
				end
				else begin
					next_money = current_money + 10;
					next_state = BUY_STATE;
				end
			end	
			else if (~quarter_d[0] & quarter_d[1]) begin
				if (item_quantity == 0) begin
					OOS_flag = 1;
					next_state = DC_STATE;
				end
				else begin
					next_money = current_money + 25;
					next_state = BUY_STATE;
				end
			end
			// Quantity
			else if (admin == 0) begin
				if (info == 1) begin
					next_state = QUANTITY_STATE;
				end
			end
			// ADMIN mode
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
			bcd_value = item_quantity;
			// Price
			if (admin == 0) begin
				if (info == 0) begin
					next_state = PRICE_STATE;
				end
			end
			// ADMIN mode
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
			bcd_value = revenue;
			// Reset revenue
			if (~rst_d[0] & rst_d[1]) begin
				revenue = 0;
				next_state = REVENUE_STATE;
			end
			// USER mode
			else if (admin == 0) begin
				if (info == 0) begin
					next_state = PRICE_STATE;
				end
				else if (info == 1) begin
					next_state = QUANTITY_STATE;
				end		
			end
			// Update quantity mode
			else if (admin == 1) begin
				if (info == 1) begin
					next_state = UPDATE_STATE; 
				end 
			end
			//current_state = next_state;
		end
		else if (current_state == UPDATE_STATE) begin
			bcd_value = item_quantity;
			// Reset quantities
			if (~rst_d[0] & rst_d[1]) begin
				item_quantity = 0;
				if (item == 2'b00) begin
					item_a_quantity = 0;
				end
				else if (item == 2'b01) begin
					item_b_quantity = 0;
				end
				else if (item == 2'b10) begin
					item_c_quantity = 0;
				end
				else if (item == 2'b11) begin
					item_d_quantity = 0;
				end
				next_state = UPDATE_STATE;
			end
			// Increase quantity
			else if (~nickel_d[0] & nickel_d[1]) begin
				item_quantity = item_quantity + 5;
				if (item == 2'b00) begin
					item_a_quantity = item_a_quantity + 5;
				end
				else if (item == 2'b01) begin
					item_b_quantity = item_b_quantity + 5;
				end
				else if (item == 2'b10) begin
					item_c_quantity = item_c_quantity + 5;
				end
				else if (item == 2'b11) begin
					item_d_quantity = item_d_quantity + 5;
				end
				next_state = UPDATE_STATE;
			end
			else if (~dime_d[0] & dime_d[1]) begin
				item_quantity = item_quantity + 10;
				if (item == 2'b00) begin
					item_a_quantity = item_a_quantity + 10;
				end
				else if (item == 2'b01) begin
					item_b_quantity = item_b_quantity + 10;
				end
				else if (item == 2'b10) begin
					item_c_quantity = item_c_quantity + 10;
				end
				else if (item == 2'b11) begin
					item_d_quantity = item_d_quantity + 10;
				end
				next_state = UPDATE_STATE;
			end
			else if (~quarter_d[0] & quarter_d[1]) begin
				item_quantity = item_quantity + 25;
				if (item == 2'b00) begin
					item_a_quantity = item_a_quantity + 25;
				end
				else if (item == 2'b01) begin
					item_b_quantity = item_b_quantity + 25;
				end
				else if (item == 2'b10) begin
					item_c_quantity = item_c_quantity + 25;
				end
				else if (item == 2'b11) begin
					item_d_quantity = item_d_quantity + 25;
				end
				next_state = UPDATE_STATE;
			end
			// USER mode
			else if (admin == 0) begin
				if (info == 0) begin
					next_state = PRICE_STATE;
				end
				else if (info == 1) begin
					next_state = QUANTITY_STATE;
				end		
			end
			// Revenue
			else if (admin == 1) begin
				if (info == 0) begin
					next_state = REVENUE_STATE; 
				end 
			end
			//current_state = next_state;
		end
		else if (current_state == BUY_STATE) begin
			bcd_value = current_money;						
			if (~rst_d[0] & rst_d[1]) begin
				next_money = 0;
				change = current_money;
				next_state = PRICE_STATE;
				// Set D4_temp to indicate C
			end
			else if (~buy_d[0] & buy_d[1]) begin
				if (current_money == item_price) begin
					next_money = 0;
					next_state = DC_STATE;
					item_quantity = item_quantity - 1;
					if (item == 2'b00) begin
						item_a_quantity = item_a_quantity - 1;
					end
					else if (item == 2'b01) begin
						item_b_quantity = item_b_quantity - 1;
					end
					else if (item == 2'b10) begin
						item_c_quantity = item_c_quantity - 1;
					end
					else if (item == 2'b11) begin
						item_d_quantity = item_d_quantity - 1;
					end
					revenue = revenue + item_price;
					// Set D4_temp to indicate D
					D4_flag = 2'b01;
				end
				else if (current_money > item_price) begin
					next_money = 0;
					next_state = DC_STATE;
					change = current_money - item_price;
					item_quantity = item_quantity - 1;
					if (item == 2'b00) begin
						item_a_quantity = item_a_quantity - 1;
					end
					else if (item == 2'b01) begin
						item_b_quantity = item_b_quantity - 1;
					end
					else if (item == 2'b10) begin
						item_c_quantity = item_c_quantity - 1;
					end
					else if (item == 2'b11) begin
						item_d_quantity = item_d_quantity - 1;
					end
					revenue = revenue + item_price;
	
					// Set D4_temp to indicate C
					D4_flag = 2'b10;
					bcd_value = change;
				end
				else begin
					next_state = BUY_STATE;
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
		current_state <= next_state;
		current_money = next_money;
	end
	
	// Display
	always @(posedge clkdisplay) begin
		case (ss_display_counter)
			0: begin
				// Item bought
				if (D4_flag == 2'b01) begin
					ss_segment_register = DISPLAY_H;
					ss_anode_register = 4'b0111;				
				end
				// There is change
				else if (D4_flag == 2'b10) begin
					ss_segment_register = DISPLAY_C;
					ss_anode_register = 4'b0111;						
				end
				// Item is out of stock
				else if (OOS_flag == 1) begin
					ss_segment_register = DISPLAY_N;
					ss_anode_register = 4'b0111;
				end
				// Price
				else if (!admin && !info) begin
					ss_anode_register = 4'b0111;
					ss_segment_register = DONT_CARE;
				end
				// Quantity
				else if (!admin && info) begin
					ss_anode_register = 4'b0111;
					ss_segment_register = display_D4;
				end
				// Revenue
				else if (admin && !info) begin
					ss_anode_register = 4'b0111;
					ss_segment_register = display_D4;
				end
				// Update Stock
				else if (admin && info) begin
					if (clkblink) begin
						ss_anode_register = 4'b0111;
						ss_segment_register = display_D4;
					end
					else begin
						ss_anode_register = 4'b0111;
						ss_segment_register = DONT_CARE;
					end
				end
				else begin
					ss_anode_register = 4'b0111;
					ss_segment_register = display_D4;
				end
			end
			1: begin
				// Item bought
				if (D4_flag == 2'b01) begin
					ss_anode_register = 4'b1011;
					ss_segment_register = DISPLAY_E;
				end
				// There is change
				else if (D4_flag == 2'b10) begin
					ss_anode_register = 4'b1011;
					ss_segment_register = display_nickel;
				end
				// Item out of stock
				else if (OOS_flag == 1) begin
					ss_anode_register = 4'b1011;
					ss_segment_register = DISPLAY_O;
				end
				// Price
				else if (!admin && !info) begin
					ss_anode_register = 4'b1011;
					ss_segment_register = display_hundreds;
				end
				// Quantity
				else if (!admin && info) begin
					ss_anode_register = 4'b1011;
					ss_segment_register = display_hundreds;
				end
				// Revenue
				else if (admin && !info) begin
					ss_anode_register = 4'b1011;
					ss_segment_register = display_hundreds;
				end
				// Update Stock
				else if (admin && info) begin
					if (clkblink) begin
						ss_anode_register = 4'b1011;
						ss_segment_register = display_hundreds;
					end
					else begin
						ss_anode_register = 4'b1011;
						ss_segment_register = DONT_CARE;
					end
				end
				else begin
					ss_anode_register = 4'b1011;
					ss_segment_register = display_hundreds;
				end
			end
			2: begin
				// Item bought
				if (D4_flag == 2'b01) begin
					ss_anode_register = 4'b1101;
					ss_segment_register = DISPLAY_R;
				end
				// There is change
				else if (D4_flag == 2'b10) begin
					ss_anode_register = 4'b1101;
					ss_segment_register = display_dime;
				end
				// Item is out of stock
				else if (OOS_flag == 1) begin
					ss_anode_register = 4'b1101;
					ss_segment_register = DISPLAY_N;
				end
				// Price
				else if (!admin && !info) begin
					ss_anode_register = 4'b1101;
					ss_segment_register = display_tens;
				end
				// Quantity
				else if (!admin && info) begin
					ss_anode_register = 4'b1101;
					ss_segment_register = display_tens;
				end
				// Revenue
				else if (admin && !info) begin
					ss_anode_register = 4'b1101;
					ss_segment_register = display_tens;
				end
				// Update Stock
				else if (admin && info) begin
					if (clkblink) begin
						ss_anode_register = 4'b1101;
						ss_segment_register = display_tens;
					end
					else begin
						ss_anode_register = 4'b1101;
						ss_segment_register = DONT_CARE;
					end
				end
				else begin
					ss_anode_register = 4'b1101;
					ss_segment_register = display_tens;
				end
			end
			3: begin
				// Item bought
				if (D4_flag == 2'b01) begin
					ss_anode_register = 4'b1110;
					ss_segment_register = DISPLAY_E;
				end
				// There is change
				else if (D4_flag == 2'b10) begin
					ss_anode_register = 4'b1110;
					ss_segment_register = display_quarter;
				end
				// Item is out of stock
				else if (OOS_flag == 1) begin
					ss_anode_register = 4'b1110;
					ss_segment_register = DISPLAY_E;
				end
				// Price
				else if (!admin && !info) begin
					ss_anode_register = 4'b1110;
					ss_segment_register = display_ones;
				end
				// Quantity
				else if (!admin && info) begin
					ss_anode_register = 4'b1110;
					ss_segment_register = display_ones;
				end
				// Revenue
				else if (admin && !info) begin
					ss_anode_register = 4'b1110;
					ss_segment_register = display_ones;
				end
				// Update Stock
				else if (admin && info) begin
					if (clkblink) begin
						ss_anode_register = 4'b1110;
						ss_segment_register = display_ones;
					end
					else begin
						ss_anode_register = 4'b1110;
						ss_segment_register = DONT_CARE;
					end
				end
				else begin
					ss_anode_register = 4'b1110;
					ss_segment_register = display_ones;
				end
			end
		endcase
		ss_display_counter = ss_display_counter + 1;
	end
	
	// Convert binary number to decimal digits
	sixteen_bit_bcd bcd(.binary(bcd_value), .D4(D4_bcd), .hundreds(hundreds_bcd), .tens(tens_bcd), .ones(ones_bcd));
	change_machine cm(.change(bcd_value), .nickel(num_nickel), .dime(num_dime), .quarter(num_quarter));  
	
	// Convert decimal to seven segment display
	segment_display disp_D4(.count(D4_bcd), .display(display_D4));
	segment_display disp_hundreds(.count(hundreds_bcd), .display(display_hundreds));
	segment_display disp_tens(.count(tens_bcd), .display(display_tens));
	segment_display disp_ones(.count(ones_bcd), .display(display_ones));
	
	segment_display disp_nickel(.count(num_nickel), .display(display_nickel));
	segment_display disp_dime(.count(num_dime), .display(display_dime));
	segment_display disp_quarter(.count(num_quarter), .display(display_quarter));

	// Testing
	assign output_state = output_state_temp;
	assign output_money = current_money;
	assign output_change = change;
	assign output_quantity = item_quantity;
	assign output_revenue = revenue;
	
	// Seven Segment Display
	assign anode = ss_anode_register;
	assign seg_display = ss_segment_register;

endmodule
