cmake_minimum_required(VERSION 2.6.0)

project(bracket_Search.cpp)

add_executable(${PROJECT_NAME}
  src/bracket_Search.cpp
  ../cppFiles/bracket_Search_Functions



)
	
target_include_directories(${PROJECT_NAME}
	PUBLIC
	../include
	)
	
