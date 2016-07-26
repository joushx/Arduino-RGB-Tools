#include "../src/RGBTools.h"

// set pins of red, green and blue
RGBTools rgb1(3,6,5);
int drive1 = 4;

RGBTools rgb2(11,9,10);
int drive2 = 12;



void setup(){
  Serial.begin(115200);
  pinMode(drive1, OUTPUT);
  digitalWrite(drive1, HIGH);
  pinMode(drive2, OUTPUT);
  digitalWrite(drive2, HIGH);
  Serial.print(F("\nStarted"));

  
  rgb1.fadeTo(255,0,0,5,100); // to red in 5 steps and 3 seconds
  rgb2.fadeTo(255,0,0,5,100); // to red in 5 steps and 3 seconds
  rgb1.fadeTo(0,255, 0,5,100); //
  rgb2.fadeTo(0,255, 0,5, 100); //
  rgb1.fadeTo(0,0,255,5,100); //
  rgb2.fadeTo(0,0,255,5,100); //
  
  rgb1.fadeTo(0,0,0,5,100); //
  rgb2.fadeTo(0,0,0,5,100); //
  
  Serial.print(F("\nStopped"));

  
  
}

void loop(){
  // nothing to loop
}

