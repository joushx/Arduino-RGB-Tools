cmake_minimum_required(VERSION 2.8)

project(RGBToolsTests C CXX)

add_definitions(-DDEBUGGING)

add_executable(setColor setColor.cpp)
add_executable(fadeToColor fadeToColor.cpp)

add_library(RGBTools ../src/RGBTools.h ../src/RGBTools.cpp)
target_link_libraries(setColor RGBTools)
target_link_libraries(fadeToColor RGBTools)

