cmake_minimum_required(VERSION 3.4)
project(b15py)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add pybind11 as a subdirectory
add_subdirectory(pybind11)

# Specify the source files
set(SOURCES src/main.cpp)

# Add the pybind11 module
pybind11_add_module(b15py ${SOURCES})

# Link libraries (e.g., b15fdrv)
target_link_libraries(b15py PRIVATE -lb15fdrv)

# Specify the installation target
install(TARGETS b15py LIBRARY DESTINATION b15py)

# Copy the built library to the b15py directory
add_custom_command(
    TARGET b15py POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:b15py> ${CMAKE_SOURCE_DIR}/b15py/$<TARGET_FILE_NAME:b15py>
)

