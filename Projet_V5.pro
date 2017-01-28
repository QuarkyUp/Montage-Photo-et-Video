#-------------------------------------------------
#
# Project created by QtCreator 2016-11-20T20:15:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projet_V5
TEMPLATE = app

INCLUDEPATH += /usr/include/opencv2
LIBS += -L/usr/lib/i386-linux-gnu/ -lopencv_core -lopencv_highgui

SOURCES += main.cpp\
        view.cpp \
    control.cpp \
    model.cpp \
    MyThread_Merge.cpp \
    myThread.cpp \
    thread_img.cpp

HEADERS  += view.h \
    control.h \
    libraries.h \
    model.h \
    MyThread_Merge.h \
    myThread.h \
    thread_img.h \
    valgrind.h

FORMS    += view.ui

SUBDIRS += \
    m_actions.pro

RESOURCES += \
    icons.qrc
