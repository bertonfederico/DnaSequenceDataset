TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    algorithm.cpp \
    algorithm_iterate.cpp \
    algorithm_massive.cpp \
    run_algorithm.cpp \
    main.cpp

HEADERS += \
    algorithm.h \
    algorithm_iterate.h \
    algorithm_massive.h \
    common.h \
    run_algorithm.h
