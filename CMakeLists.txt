cmake_minimum_required(VERSION 3.15)
project(baillie_psw)
set(CMAKE_CXX_STANDARD 20)

set(SOURCES ${CMAKE_SOURCE_DIR}/baillie_bench.cpp 
            ${CMAKE_SOURCE_DIR}/baillie_test.hpp 
            ${CMAKE_SOURCE_DIR}/lucas_test.hpp
            ${CMAKE_SOURCE_DIR}/rabin_miller.hpp
			)

add_executable(${PROJECT_NAME} ${SOURCES})