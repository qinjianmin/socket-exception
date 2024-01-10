cmake_minimum_required(VERSION 3.28.0)
project(socketex)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD 99)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(test)
add_subdirectory(lib)
add_subdirectory(1-connection-refused)
add_subdirectory(2-connection-timeout)
add_subdirectory(3-1-connection-close)
add_subdirectory(4-socket-read-timeout)
