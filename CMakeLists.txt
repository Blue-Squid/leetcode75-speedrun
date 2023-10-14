cmake_minimum_required(VERSION 3.5)

project(leetcode75-speedrun)

# Include directories where header files are located
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories for source files
add_subdirectory(src)
add_subdirectory(tests)
