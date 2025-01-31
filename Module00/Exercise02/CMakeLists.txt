cmake_minimum_required(VERSION 3.10)

project(PhoneBookApp VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find libraries
find_library(ConvertToLowerLib NAMES ConvertToLowerLib PATHS ${CMAKE_SOURCE_DIR}/../Exercise01/build)
find_library(ConvertToUpperLib NAMES ConvertToUpperLib PATHS ${CMAKE_SOURCE_DIR}/../Exercise01/build)

#
# Include directories
include_directories(include)
include_directories(../Exercise01/include)

# Add executable
add_executable(OldPhoneBookExecutable src/main.cpp src/OldPhoneBook.cpp)

# Link the found libraries
target_link_libraries(OldPhoneBookExecutable PRIVATE ${ConvertToUpperLib} ${ConvertToLowerLib})
