cmake_minimum_required(VERSION 3.12)
project(GTestSample)

set(CMAKE_CXX_STANDARD 17)

set(SOURSE_FILES main.cpp)
add_executable(GTestSample_run ${SOURSE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(${CMAKE_PROJECT_NAME}_run ${CMAKE_PROJECT_NAME}_lib)


