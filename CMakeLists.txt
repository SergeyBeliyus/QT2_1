cmake_minimum_required(VERSION 3.14)

project(QT2 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Sql)
find_package(Qt6 REQUIRED COMPONENTS Network)

add_executable(QT2
  main.cpp
)
target_link_libraries(QT2 Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(QT2 Qt${QT_VERSION_MAJOR}::Sql)
target_link_libraries(QT2 Qt${QT_VERSION_MAJOR}::Network)

include(GNUInstallDirs)
install(TARGETS QT2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
