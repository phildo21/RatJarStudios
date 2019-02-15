cmake_minimum_required(VERSION 2.6.0)

project(fatFuckPancakeMain.cpp)

add_executable(${PROJECT_NAME}
  src/fatFuckPancakeMain.cpp
  ../cppFiles/FatFuckPancakeFunctions.cpp



)
	
target_include_directories(${PROJECT_NAME}
	PUBLIC
	headers
	)
	
