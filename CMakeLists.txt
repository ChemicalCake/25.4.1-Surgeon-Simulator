cmake_minimum_required(VERSION 3.26)
project("SurgeonSimulator" VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(SurgeonSimulator src/main.cpp include/operations.h
        include/points.h)
target_include_directories(SurgeonSimulator PUBLIC include)
