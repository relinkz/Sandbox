cmake_minimum_required(VERSION 3.22)

set(This Sandbox)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    Example.hpp
    InheritedCode.hpp
    ExceptionalServer.hpp
    MagicSpells.hpp
    )
    
set(Sources
    Example.cpp
    InheritedCode.cpp
    ExceptionalServer.cpp
    MagicSpells.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
add_subdirectory(tests)