cmake_minimum_required(VERSION 3.5)
project(SCC)  # Replace "YourProjectName" with your actual project name

# Add the source files to the project
set(SOURCE_FILES
    src/scan.c
    src/scc.c
)

# Add header files to the project
set(HEADER_FILES
    include/scan.h
    include/data.h
)

# Create an executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

