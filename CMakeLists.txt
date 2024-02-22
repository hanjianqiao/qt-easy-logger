cmake_minimum_required(VERSION 3.5)

project(qt-easy-logger VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(LIBRARY_SOURCES
    logger.h logger.cpp
    logview.h logview.cpp
)

add_library(qt-easy-logger STATIC
    ${LIBRARY_SOURCES}
)

target_link_libraries(qt-easy-logger PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
