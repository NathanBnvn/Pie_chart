cmake_minimum_required(VERSION 3.5)

project(pie_chart LANGUAGES C)

find_package(gd)
add_executable(pie_chart main.c)
target_link_libraries(pie_chart gd)

include(GNUInstallDirs)

install(TARGETS pie_chart
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
