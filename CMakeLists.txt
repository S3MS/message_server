cmake_minimum_required(VERSION 3.9)

project(message_server)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(source_dir "${PROJECT_SOURCE_DIR}/src/")
set(include_dir "${PROJECT_SOURCE_DIR}/include/")

file(GLOB source_files "${source_dir}/*.cpp")

include_directories(${include_dir})

add_executable(app ${source_files})

target_link_libraries(app pthread)
