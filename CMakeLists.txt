cmake_minimum_required(VERSION 3.4.1)

project(glApplication)
message(STATUS "try to build open gl sample codes")

include_directories(
    /usr/local/include
)

set(SOURCE
    ${SOURCE}
    main.cpp
)

add_executable(
    glApplication 
    ${SOURCE}
)

target_include_directories(glApplication SYSTEM PUBLIC "/usr/local/include")
# target_include_directories(glApplication SYSTEM PUBLIC "/Users/bytedance/Desktop/opengl-cpp/include")

target_link_libraries(glApplication ${CMAKE_SOURCE_DIR}/libs/libsoil2-debug.a)