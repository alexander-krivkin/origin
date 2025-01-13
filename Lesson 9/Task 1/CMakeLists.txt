cmake_minimum_required(VERSION 3.22.0 FATAL_ERROR)
project(my_first_cmake_project)
set(SOURCES "main.cpp")
add_executable(my_first_cmake_program ${SOURCES})