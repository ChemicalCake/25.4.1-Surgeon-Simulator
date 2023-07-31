cmake_minimum_required(VERSION 3.26)

set(DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(SurgeonSimulator main.cpp ${DIR}/operations.h)
target_include_directories(SurgeonSimulator PUBLIC ${DIR})