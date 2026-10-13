cmake_minimum_required(VERSION 4.3)
project(PigDice2_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(PigDice2_0 main.cpp
        DIE.cpp
        DIE.h
        Turn.cpp
        Turn.h
        PDGame.cpp
        PDGame.h)
