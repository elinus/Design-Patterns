cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CONFIGURATION_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(Decorator)
add_compile_options(-Wall -Wnon-virtual-dtor)


include_directories(include)

add_executable(
    a.out

    src/Beverage.cpp
    src/Espresso.cpp
    src/HouseBlend.cpp
    src/DarkRoast.cpp
    src/Decaf.cpp
    src/Mocha.cpp
    src/Whip.cpp
    src/Milk.cpp
    src/Soy.cpp
    src/StarbuzzCoffee.cpp
    )
