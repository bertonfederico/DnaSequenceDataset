QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    algorithm.cpp \
    algorithm_iterate.cpp \
    algorithm_massive.cpp \
    main.cpp \
    mainwindow.cpp \
    run_algorithm.cpp

HEADERS += \
    algorithm.h \
    algorithm_iterate.h \
    algorithm_massive.h \
    common.h \
    mainwindow.h \
    run_algorithm.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../kisspng-computer-icons-input-devices-input-output-icon-des-input-5b2ef937991953.8203599415298051116271

RESOURCES += \
    info.qrc \
    input.qrc \
    output.qrc \
    tick.qrc
