cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

project(Adapter)

include_directories(include)

add_executable(
    a.out

    src/MallardDuck.cpp
    src/WildTurkey.cpp
    src/TurkeyAdapter.cpp
    src/DuckTestDrive.cpp
)
