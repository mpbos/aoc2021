cmake_minimum_required(VERSION 2.8.3)
project(aoc2021)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(day1 src/day1.cpp src/load_inputs.cpp src/load_inputs.h)
add_executable(day2 src/day2.cpp src/load_inputs.cpp src/load_inputs.h)
add_executable(day3 src/day3.cpp src/load_inputs.cpp src/load_inputs.h)

add_executable(day7 src/day7.cpp src/load_inputs.cpp src/load_inputs.h)
