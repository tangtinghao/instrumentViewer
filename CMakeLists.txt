cmake_minimum_required(VERSION 3.12)
project(InstrumentViewer)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_executable(InstrumentViewer src/main.cpp)
target_include_directories(InstrumentViewer PRIVATE include)
target_compile_options(InstrumentViewer PRIVATE -Wall -Wextra -pedantic)
if (MSVC)
    target_compile_options(InstrumentViewer PRIVATE /W4)
else()
    target_compile_options(InstrumentViewer PRIVATE -Werror)
endif()
set_target_properties(InstrumentViewer PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions(InstrumentViewer PRIVATE DEBUG)
else()
    target_compile_definitions(InstrumentViewer PRIVATE NDEBUG)
endif()
install(TARGETS InstrumentViewer DESTINATION bin)