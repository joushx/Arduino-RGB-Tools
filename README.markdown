#RGB-Tools

RGBTools is a software C++-library for Arduino for controlling an RGB-LED.

##Installation
Just copy all the files to your `arduino/libraries`-folder into a folder called `RGBTools.

##Set a color##
Use the `setColor`-method for setting an RGB-specified color.

```
#include <RGBTools.h>
 
// set pins of red, green and blue
RGBTools rgb(9,10,11);
 
void setup(){
  rgb.setColor(255,0,0);
}
 
void loop(){
  // nothing to loop
}
```

##Fade to color##
Use the `fadeTo`-method for fade to a specific color in certain steps and time.

```
#include <RGBTools.h>
 
// Pins von Rot, Grün und Blau an der LED setzen
RGBTools rgb(9,10,11);
 
void setup(){
  rgb.fadeTo(255,0,0,50,3000); // zu Rot in 50 Schritten + 3 Sekunden
}
 
void loop(){
  // nothing to loop
}

```

##Author##
Created by Johannes Mittendorfer (http://jmittendorfer.hostingsociety.com) 2012.