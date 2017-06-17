cmake_minimum_required(VERSION 3.3)
project(std_rand)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp RandomNumberGenerator.hpp)

add_executable(std_rand ${SOURCE_FILES})
