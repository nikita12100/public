cmake_minimum_required(VERSION 3.8)
project(TP)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Unit.cpp Decorator.cpp white_unit.cpp black_unit.cpp
        Generate_Unit.cpp Abstract_Generate_Unit.cpp UnitCreator.cpp horse_unit.cpp
        Command.cpp Move_Unit.cpp Atack_Unit.cpp War.cpp)
add_executable(TP ${SOURCE_FILES})