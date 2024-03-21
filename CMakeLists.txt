cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp
        Logger.cpp
        Logger.h
        test.cpp
        lest.hpp
        ILogger.h
        system/IFileSystem.h
        system/FileSystemImpl.cpp
        system/FileSystemImpl.h
)

add_compile_definitions(lest_FEATURE_AUTO_REGISTER)

find_package(FakeIt REQUIRED)
target_link_libraries(untitled PRIVATE FakeIt::FakeIt-standalone)
