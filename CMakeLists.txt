cmake_minimum_required(VERSION 2.8.9)

# setup project
project (RGBTools)

# add Arduino library
include_directories(/usr/share/arduino/hardware/arduino/cores/arduino/)
include_directories(/usr/share/arduino/hardware/arduino/variants/standard/)

file(GLOB_RECURSE CORE_SRC
        /usr/share/arduino/hardware/arduino/cores/arduino/*.c
        /usr/share/arduino/hardware/arduino/cores/arduino/*.cpp
)

# configure AVR compiler (from http://playground.arduino.cc/Code/CmakeBuild)
SET(CMAKE_SYSTEM_NAME Generic)
SET(CMAKE_C_COMPILER avr-gcc)
SET(CMAKE_CXX_COMPILER avr-g++)
SET(CSTANDARD "-std=c++11")
SET(CDEBUG "-gstabs")
SET(CWARN "-Wall -Wstrict-prototypes")
SET(CTUNING "-funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums")
SET(COPT "-Os")
SET(CINCS "-I${Candi_SOURCE_DIR}/libarduino")
SET(CMCU "-mmcu=atmega168")
SET(CDEFS "-DF_CPU=16000000")
SET(CFLAGS "${CMCU} ${CDEBUG} ${CDEFS} ${CINCS} ${COPT} ${CWARN} ${CSTANDARD} ${CEXTRA}")
SET(CXXFLAGS "${CMCU} ${CDEFS} ${CINCS} ${COPT}")
SET(CMAKE_C_FLAGS ${CFLAGS})
SET(CMAKE_CXX_FLAGS ${CXXFLAGS})

# fix -rdynamic error
SET(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS "")
SET(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "")

# add exe
add_executable(RGBTools ${CORE_SRC} src/RGBTools.cpp)