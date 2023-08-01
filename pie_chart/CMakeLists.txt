cmake_minimum_required(VERSION 3.5)

project(pie_chart LANGUAGES C)

find_package(gd)
add_executable(pie_chart main.c)

include(GNUInstallDirs)
include_directories(/opt/homebrew/Cellar/gd/2.3.3_5/include/)
link_directories(/opt/homebrew/Cellar/gd/2.3.3_5/lib/libgd.3.dylib)

install(TARGETS pie_chart
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
