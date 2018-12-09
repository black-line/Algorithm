cmake_minimum_required(VERSION 3.9)
project(Algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(Algorithm codeup/2064.cpp)
add_definitions(-w) #避免因使用gets()而产生警告,进而终止编译
