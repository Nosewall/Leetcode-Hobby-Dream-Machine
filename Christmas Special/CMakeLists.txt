cmake_minimum_required(VERSION 3.23)
project(Christmas_Special)

set(CMAKE_CXX_STANDARD 14)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(Christmas_Special main.cpp)

add_executable(Day_1_Puzzle_1 "Day 1/Puzzle 1/main.cpp")
add_executable(Day_1_Puzzle_2 "Day 1/Puzzle 2/main.cpp")
add_executable(Day_2_Puzzle_1 "Day 2/Puzzle 1/main.cpp")
add_executable(Day_2_Puzzle_2 "Day 2/Puzzle 2/main.cpp")
add_executable(Day_3_Puzzle_1 "Day 3/Puzzle 1/main.cpp")
add_executable(Day_3_Puzzle_2 "Day 3/Puzzle 2/main.cpp")
add_executable(Day_4_Puzzle_1 "Day 4/Puzzle 1/main.cpp")
add_executable(Day_4_Puzzle_2 "Day 4/Puzzle 2/main.cpp")
add_executable(Day_5_Puzzle_1 "Day 5/Puzzle 1/main.cpp")
add_executable(Day_5_Puzzle_2 "Day 5/Puzzle 2/main.cpp")
add_executable(Day_6_Puzzle_1 "Day 6/Puzzle 1/main.cpp")
add_executable(Day_6_Puzzle_2 "Day 6/Puzzle 2/main.cpp")
add_executable(Day_7_Puzzle_1 "Day 7/Puzzle 1/main.cpp")
add_executable(Day_7_Puzzle_2 "Day 7/Puzzle 2/main.cpp")