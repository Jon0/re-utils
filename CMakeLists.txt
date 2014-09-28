project (GPD)

cmake_minimum_required (VERSION 2.8)

file(GLOB SRC_FILES
    "src/*.cpp"
    "src/gp/*.cpp"
    "src/x86/*.cpp"
)

add_definitions(-std=c++11)
add_executable (GPDMain ${SRC_FILES})
target_link_libraries (GPDMain)
