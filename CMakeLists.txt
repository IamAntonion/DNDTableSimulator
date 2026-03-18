cmake_minimum_required(VERSION 3.19)
project(DNDTableSimulator LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(DNDTableSimulator
    WIN32 MACOSX_BUNDLE
    main.cpp
)

add_subdirectory(components/gui)
add_subdirectory(components/api)

target_link_libraries(DNDTableSimulator
    PRIVATE
        Qt::Core
        Qt::Widgets
        gui
        api
)

install(TARGETS DNDTableSimulator
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET DNDTableSimulator
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})