cmake_minimum_required(VERSION 3.19)
project(QUEUEHW LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(QUEUEHW
    main.cpp
    node.h
    queue.h


)

target_link_libraries(QUEUEHW
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS QUEUEHW
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
