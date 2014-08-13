#include <RGBTools.h>

// set pins of red, green and blue
RGBTools rgb(9,10,11);

void setup(){
  rgb.fadeTo(255,0,0,50,3000); // to red in 50 steps and 3 seconds
}

void loop(){
  // nothing to loop
}
