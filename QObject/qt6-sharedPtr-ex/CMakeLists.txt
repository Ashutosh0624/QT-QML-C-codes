cmake_minimum_required(VERSION 3.16)

project(qt6-sharedPtr-ex LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(qt6-sharedPtr-ex
  main.cpp
  cat.h cat.cpp
  toy.h toy.cpp
)
target_link_libraries(qt6-sharedPtr-ex Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS qt6-sharedPtr-ex
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
