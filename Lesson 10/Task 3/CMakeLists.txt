cmake_minimum_required(VERSION 3.22.0 FATAL_ERROR)
project(Task_3)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(DYNAMIC_LIBRARY_FILES
	Leaver.cpp
	Leaver.h
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(DynamicLibrary SHARED ${DYNAMIC_LIBRARY_FILES})

set(SOURCES
	main.cpp
)
set(HEADERS
)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} DynamicLibrary)