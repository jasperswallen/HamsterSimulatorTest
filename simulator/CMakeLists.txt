# Hamster Simulator Root CMakeLists.txt

cmake_minimum_required(VERSION 3.20)
project(HamsterSimulator CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(mbed-benchtest EXCLUDE_FROM_ALL)

SET(HAMSTER_CORE_MAIN ../firmware/main.cpp)

add_executable(HamsterSimulatorCLI ${HAMSTER_CORE_MAIN})

target_link_libraries(HamsterSimulatorCLI mbed_platform)
