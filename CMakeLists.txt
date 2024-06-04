cmake_minimum_required(VERSION 3.22)

project(demo-fakeit)

set(CMAKE_CXX_STANDARD 11)

add_executable(demo-fakeit main.cpp
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
