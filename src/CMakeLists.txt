cmake_minimum_required(VERSION 3.23)
project(CppPrimer)

set(CMAKE_CXX_STANDARD 20)

add_executable(cube
    ch10/cube.cpp)

add_executable(stock
    ch10/stock00.cpp
    ch10/usestock00.cpp)
