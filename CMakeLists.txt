cmake_minimum_required(VERSION 3.28.1)

project(testapp)

add_executable(testapp Main.cpp)

add_subdirectory("../protegon/" binary_dir)
#add_subdirectory("external/protegon")

target_link_libraries(testapp PRIVATE protegon)

# include(GNUInstallDirs)

# install(TARGETS testapp
#   RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#   LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#   ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
# )

# install(
#   FILES 
#   ${LIBRARY_HEADERS}
#   DESTINATION
#   ${CMAKE_INSTALL_INCLUDEDIR}/protegon
# )