cmake_minimum_required(VERSION 3.23)
project(Christmas_Special)

set(CMAKE_CXX_STANDARD 14)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(Christmas_Special main.cpp)

add_executable(Day_1_Puzzle_1 "Day 1/Puzzle 1/main.cpp")
add_executable(Day_1_Puzzle_2 "Day 1/Puzzle 2/main.cpp")
add_executable(Day_2_Puzzle_1 "Day 2/Puzzle 1/main.cpp")