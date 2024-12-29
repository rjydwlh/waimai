cmake_minimum_required(VERSION 3.16)

project(sample2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        qt.cpp
        qt.h
        qt.ui
        admin.cpp
        admin.h
        admin.ui
        #   // ========  胡佳奇 ==========//
        # dingd.cpp
        # dingd.h
        # dingd.ui
        # widget.h
        # widget.cpp
        # widget.ui
        # shangp.h
        # shangp.cpp
        # shangp.ui
        # xiugai.cpp
        # xiugai.h
        # xiugai.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(sample2
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        # xiugai.cpp
        # xiugai.h
        # xiugai.ui
        # dingd.cpp
        # dingd.h
        # dingd.ui
        # widget.h
        # widget.cpp
        # widget.ui
        # shangp.h
        # shangp.cpp
        # shangp.ui
        panduan.cpp
        regis.h regis.cpp regis.ui
        customer.h customer.cpp customer.ui
        admin.h admin.cpp admin.ui
        search_restaurant.h search_restaurant.cpp search_restaurant.ui
        info_restaurant.h info_restaurant.cpp info_restaurant.ui
        good.h good.cpp good.ui
        pic.qrc
        sales_log.h sales_log.cpp sales_log.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET sample2 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(sample2 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(sample2
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(sample2 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.sample2)
endif()
set_target_properties(sample2 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS sample2
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(sample2)
endif()
