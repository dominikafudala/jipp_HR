cmake_minimum_required( VERSION 3.0 )

project( HR )

include_directories( ./include ./src )

add_executable(output ./src/main.cpp ./src/employee.cpp ./src/hrms.cpp)