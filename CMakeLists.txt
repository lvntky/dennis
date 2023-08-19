cmake_minimum_required(VERSION 3.10)

project(SCC)

set(CMAKE_C_STANDARD 11)

# Add the source files to the project
set(SOURCE_FILES
    src/scan.c
    src/scc.c
    src/data.c
)

# Add header files to the project
set(HEADER_FILES
    include/scan.h
    include/data.h
    include/definitions.h
)

# Create an executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})
