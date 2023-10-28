cmake_minimum_required(VERSION 3.26)
project(file_utils)

set(CMAKE_CXX_STANDARD 17)

# Define source files
set(SOURCE_FILES
        src/main.cpp
        src/file_operations.cpp
        src/user_input.cpp
)

# Define header files
set(HEADER_FILES
        include/file_operations.h
        include/user_input.h
)

# Add the executable target
add_executable(file_utils ${SOURCE_FILES} ${HEADER_FILES})

# Include directories
target_include_directories(file_utils PRIVATE include)
