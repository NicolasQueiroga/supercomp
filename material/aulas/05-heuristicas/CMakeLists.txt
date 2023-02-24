cmake_minimum_required(VERSION 3.10)
project(aula05 VERSION 1.0.1)

set(CMAKE_CXX_STANDARD 11)
set(GCC_COVERAGE_COMPILE_FLAGS "-g -Og -Wall -pedantic")
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_executable(main src/main.cpp)

add_library(heuristics SHARED ${CMAKE_CURRENT_SOURCE_DIR}/lib/aula05/heuristics.cpp)

target_include_directories(heuristics PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/lib)

target_link_libraries(main PUBLIC heuristics)