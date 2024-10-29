cmake_minimum_required(VERSION 3.21.0)
project(Stm32Tests)


set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)               # Define explicitly to use of the standard C17 declared in the previous line
set(CMAKE_C_EXTENSIONS OFF)                     # Disabling vendor-specific extensions

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)             # Define explicitly to use of the standard C++17 declared in the previous line
set(CMAKE_CXX_EXTENSIONS OFF)                   # Disabling vendor-specific extensions


############################ Test Project ############################


# Stm32 Project Includes
set(STM32_INC_DIR "../Src/Stm32_Project_1/Core/Inc"
                  "../Src/Stm32_Project_1/Drivers/CMSIS/Include"
                  "../Src/Stm32_Project_1/Drivers/CMSIS/Device/ST/STM32F4xx/Include"
                  "../Src/Stm32_Project_1/Drivers/STM32F4xx_HAL_Driver/Inc")             
                  
                  

add_subdirectory(googletest)                           



# Stm32 Project Specific Include Directories
include_directories(
   ${STM32_INC_DIR}
)


# adding stm32 sources
set(SOURCE_FILES "../Src/Stm32_Project_1/Core/Src/Hello.c"
                 
                  )



add_executable(runUnitTests Test_Project_1/test_main.cpp ${SOURCE_FILES})


#link the test executable with googletest
target_link_libraries(runUnitTests gtest gtest_main)

#writing test results into an xml file
add_custom_target(runTests
	COMMAND runUnitTests --gtest_output=xml:test_results.xml
	)

