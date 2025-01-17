cmake_minimum_required(VERSION 3.22.0 FATAL_ERROR)
project(Task_5)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GRAPHICS_LIBRARY_FILES
	Figure.cpp
	Triangle.cpp
	RightTriangle.cpp
	IsoscelesTriangle.cpp
	EquilateralTriangle.cpp
	Quadrangle.cpp
	Rectangle.cpp
	Square.cpp
	Parallelogram.cpp
	Rhomb.cpp
	Figure.h
	Triangle.h
	RightTriangle.h
	IsoscelesTriangle.h
	EquilateralTriangle.h
	Quadrangle.h
	Rectangle.h
	Square.h
	Parallelogram.h
	Rhomb.h
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Graphics SHARED ${GRAPHICS_LIBRARY_FILES})

set(SOURCES
	main.cpp
)
set(HEADERS
)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} Graphics)