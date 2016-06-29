/*
* RGBTools
* Version 1.4 April, 2015
* Copyright 2015 Johannes Mittendorfer
* 
* Use this code with RGB-LEDs.
*/

#ifndef RGBTools_H
#define RGBTools_H

#include <Arduino.h>

enum Mode { COMMON_ANODE, COMMON_CATHODE };

class RGBTools
{
	public:
		RGBTools(uint8_t r, uint8_t g, uint8_t b);
		RGBTools(uint8_t r, uint8_t g, uint8_t b, Mode mode);
		void setColor(uint8_t r, uint8_t g, uint8_t b);
		void setColor(uint32_t);
		void fadeTo(uint8_t r, uint8_t g, uint8_t b, int steps, int duration);
		
	private:
		// pins for colors
		uint8_t r_pin, g_pin, b_pin;

		// saves current state (color)
		uint8_t curr_r, curr_g, curr_b;

		// output mode for common cathode or anode RGB LEDs
		uint8_t mode;

};

#endif
