cmake_minimum_required(VERSION 2.6.0)

project(cocola_Machine.cpp)

add_executable(${PROJECT_NAME}
  src/cocola_Machine.cpp
  ../cppFiles/cocola_Functions.cpp



)
	
target_include_directories(${PROJECT_NAME}
	PUBLIC
	../include
	)
	
