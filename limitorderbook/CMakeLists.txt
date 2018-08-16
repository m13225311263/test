cmake_minimum_required(VERSION 3.10)
project(limitorderbook)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. DIRROOT)
add_subdirectory(source)
add_subdirectory(data)
include_directories(./ ./source)

add_executable(limitorderbook main.cpp ${DIRROOT})
target_link_libraries(limitorderbook source)