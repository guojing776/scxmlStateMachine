# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

cmake_minimum_required(VERSION 3.16)
project(stateMachine LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

if(NOT DEFINED INSTALL_EXAMPLESDIR)
    set(INSTALL_EXAMPLESDIR "examples")
endif()

set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/widgets/statemachine/stateMachine")

find_package(Qt6 REQUIRED COMPONENTS Scxml Core Gui StateMachine Widgets)

qt_add_executable(stateMachine
    main.cpp
    widget.cpp
    widget.h
    widget.ui
)

set_target_properties(stateMachine PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

target_link_libraries(stateMachine PRIVATE
    Qt::Core
    Qt::Gui
    Qt::StateMachine
    Qt::Widgets
    Qt6::Scxml
)

qt6_add_statecharts(stateMachine
    stateChart.scxml
)


install(TARGETS stateMachine
    RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
    BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
    LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
)
