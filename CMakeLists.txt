cmake_minimum_required(VERSION 3.21.0)

project(stm32_gtest)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)               # Define explicitly to use of the standard C17 declared in the previous line
set(CMAKE_C_EXTENSIONS OFF)                     # Disabling vendor-specific extensions

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)             # Define explicitly to use of the standard C++17 declared in the previous line
set(CMAKE_CXX_EXTENSIONS OFF)                   # Disabling vendor-specific extensions



### CMAKE MODULES
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/)

# GoogleTest module
include(/Tests/googletest)


# For Windows: Prevent overriding the parent project's compiler/linker settings


# It must to be declare before the test folder
enable_testing()

# Variables name for target


add_subdirectory(Src)
add_subdirectory(Tests)