cmake_minimum_required(VERSION 2.6.0)

project(exampleMain.cpp)

add_executable(${PROJECT_NAME}
  src/exampleMain.cpp
  ../cppFiles/example.cpp



)
	
target_include_directories(${PROJECT_NAME}
	PUBLIC
	../include
	)
	
