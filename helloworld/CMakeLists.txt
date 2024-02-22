cmake_minimum_required(VERSION 3.4.1)

project(helloworld VERSION 0.0.1)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

aux_source_directory(src/ SRC_LIST)
add_executable(helloworld ${SRC_LIST} )

