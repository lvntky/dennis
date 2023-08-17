project(SCC)

cmake_minimum_required(VERSION 3.27i)

file(GLOB SOURCES src/*.c)


# Add an executable target
add_executable(${PROJECT_NAME} ${SOURCES})
