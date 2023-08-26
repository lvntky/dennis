cmake_minimum_required(VERSION 3.10)

project(SCC)

set(CMAKE_C_STANDARD 11)

# Add the source files to the project
set(SOURCE_FILES
    src/ast.c
    src/ast_interpreter.c
    src/data.c
    src/scan.c
    src/scc.c 
)

# Add header files to the project
set(HEADER_FILES
    include/scan.h
    include/data.h
    include/definitions.h
    include/ast.h
)

# Create an executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})
