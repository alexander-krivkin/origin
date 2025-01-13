cmake_minimum_required(VERSION 3.22.0 FATAL_ERROR)
project(my_second_cmake_project)
set(SOURCES "main.cpp" "Errors.cpp" "Figure.cpp" "Triangle.cpp"
 "RightTriangle.cpp" "IsoscelesTriangle.cpp" "EquilateralTriangle.cpp"
 "Quadrangle.cpp" "Rectangle.cpp" "Square.cpp" "Parallelogram.cpp" "Rhomb.cpp")
add_executable(my_second_cmake_program ${SOURCES})