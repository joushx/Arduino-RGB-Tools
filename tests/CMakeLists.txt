cmake_minimum_required(VERSION 2.8.9)

generate_arduino_firmware(setColor 
	BOARD uno 
	SKETCH setColor.ino 
	LIBS RGBTools 
	PORT /tmp/simavr-uart0
	SERIAL picocom @SERIAL_PORT@ -b 9600 -l
)