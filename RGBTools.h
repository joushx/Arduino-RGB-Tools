#ifndef RGBTools_H
#define RGBTools_H

#include <Arduino.h>

class RGBTools
{
	public:
		RGBTools(int r, int g, int b);
		void setColor(int r, int g, int b);
		void fadeTo(int r,int g,int b,int steps,int duration);
};

#endif