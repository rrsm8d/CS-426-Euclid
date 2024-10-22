cmake_minimum_required(VERSION 3.5)

project(Euclid2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Euclid2 main.cpp)

include(GNUInstallDirs)
install(TARGETS Euclid2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
