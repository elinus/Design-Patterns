cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(State)

include_directories(include)

add_executable(
    a.out

    src/GumballMachine.cpp
    src/GumballMachineTestDrive.cpp
    src/HasQuarterState.cpp
    src/NoQuarterState.cpp
    src/SoldOutState.cpp
    src/SoldState.cpp    
)
