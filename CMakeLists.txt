cmake_minimum_required(VERSION 3.2)
project(MPAGSCipher VERSION 0.1.0)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wfatal-errors -Wshadow -pedantic")

add_subdirectory(MPAGScipher)

enable_testing()
add_subdirectory(Testing)

add_executable(mpags-cipher mpags-cipher.cpp)

target_link_libraries(mpags-cipher PRIVATE MPAGScipher)
 

