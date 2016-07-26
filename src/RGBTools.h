/*
* RGBTools
* Version 1.5 July, 2016
* 
* Use this code with RGB-LEDs.
*/

#ifndef RGBTools_H
#define RGBTools_H

#ifdef DEBUGGING
	#define analogWrite(pin,val) (printf("set %d to %d\n", pin, val))
	#define delay(val) (printf("delay %lu\n", val))
	#include <stdio.h>
	#include <stdint.h>
#else
	#include <Arduino.h>
#endif


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
