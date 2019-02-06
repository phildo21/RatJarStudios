cmake_minimum_required(VERSION 2.6.0)

project(***name of project***.cpp)

add_executable(${PROJECT_NAME}
  src/***name of project***.cpp
  ../cppFiles/***name of function implementation***.cpp



)
	
target_include_directories(${PROJECT_NAME}
	PUBLIC
	../include
	)
	
