set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)

cmake_minimum_required(VERSION 2.8)

project(RGBTools C CXX)

generate_arduino_library(RGBTools BOARD uno SRCS src/RGBTools.cpp HDRS src/RGBTools.h)

add_subdirectory(tests)