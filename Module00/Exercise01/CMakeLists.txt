cmake_minimum_required(VERSION 3.10)
project(Convert)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add include directories
include_directories(include)

# Add source files for the ConvertToUpper and ConvertToLower logic
add_library(ConvertToUpperLib src/ConvertToUpper.cpp)
add_library(ConvertToLowerLib src/ConvertToLower.cpp)

# Add the main executable (your main.cpp)
add_executable(MainExecutable src/main.cpp)

# Link the executable with both the ConvertToUpper and ConvertToLower libraries
target_link_libraries(MainExecutable PRIVATE ConvertToUpperLib ConvertToLowerLib)

