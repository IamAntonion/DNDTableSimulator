cmake_minimum_required(VERSION 3.16)

set(COMPONENT_NAME gui)

add_library(${COMPONENT_NAME}
    masterwindow.cpp
    masterwindow.h
    masterwindow.ui
)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set_target_properties(${COMPONENT_NAME} PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    AUTORCC ON
)

target_link_libraries(${COMPONENT_NAME}
    Qt6::Widgets
)

target_include_directories(${COMPONENT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)