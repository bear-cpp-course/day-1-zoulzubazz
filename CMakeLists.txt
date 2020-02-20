cmake_minimum_required(VERSION 3.2)
project(MPAGSCipher VERSION 0.1.0)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_CXX_STANDARD 14)

add_executable(mpags-cipher mpags-cipher.cpp
		MPAGScipher/TransformChar.cpp MPAGScipher/processCommandline.cpp)

target_include_directories(mpags-cipher
	PRIVATE MPAGScipher)

set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror -Wfatal-errors -Wshadow -pedantic")

#target_compile_features(mpags-cipher PRIVATE cxx_auto_type cxx_range_for cxx_uniform_initialization) 
