cmake_minimum_required(VERSION 3.9)

project(message_server)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(source_dir "${PROJECT_SOURCE_DIR}/src/")
set(include_dir "${PROJECT_SOURCE_DIR}/include/")
set(JSON_BuildTests OFF CACHE INTERNAL "")


file(GLOB source_files "${source_dir}/*.cpp")

include_directories(${include_dir} ${PROJECT_SOURCE_DIR}/nlohmann_json/include)

add_subdirectory(nlohmann_json)

add_executable(app ${source_files})

target_link_libraries(app pthread)
