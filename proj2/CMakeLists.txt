cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(proj2)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PUBLIC
  src/gcd.cpp
  src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
  ${CMAKE_BINARY_DIR}/../include)