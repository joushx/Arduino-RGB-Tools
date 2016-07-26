cmake_minimum_required(VERSION 2.8.9)

generate_arduino_firmware(fadeToColor
	BOARD uno 
	SKETCH fadeToColor.ino
	LIBS RGBTools
)