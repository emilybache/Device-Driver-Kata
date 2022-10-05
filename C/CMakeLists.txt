cmake_minimum_required(VERSION 3.23)
project(C C)

set(CMAKE_C_STANDARD 11)

# TODO: include cmocka in the build

include_directories(.)

add_executable(C
        DeviceDriver.c
        DeviceDriver.h
        DeviceDriverTest.c
        FlashMemoryDevice.h)
