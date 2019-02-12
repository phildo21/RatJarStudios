cmake_minimum_required(VERSION 2.6.0)

project(Bracket_Search.cpp)

add_executable(${PROJECT_NAME}
  src/Bracket_Search.cpp
  ../cppFiles/Bracket_Search_Functions.cpp



)
	
target_include_directories(${PROJECT_NAME}
	PUBLIC
	headers
	)
	
