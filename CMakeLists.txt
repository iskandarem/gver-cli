cmake_minimum_required(VERSION 3.10)
project(gver)

set(CMAKE_CXX_STANDARD 17)

# Add yaml-cpp from external folder
add_subdirectory(external/yaml-cpp)

# Your executable
add_executable(gver src/main.cpp)

# Link with yaml-cpp target
target_link_libraries(gver PRIVATE yaml-cpp)
