cmake_minimum_required(VERSION 3.17)
project(Chapter02)

set(CMAKE_CXX_STANDARD 11)

include_directories(soundex)

set(SOURCE_FILES main.cpp)

add_subdirectory(soundex)
add_subdirectory(soundex_tests)
