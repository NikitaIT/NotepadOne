#-------------------------------------------------
#
# Project created by QtCreator 2016-01-28T21:56:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NotepadOne
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    highlighter.cpp

HEADERS  += mainwindow.h \
    highlighter.h

FORMS    += mainwindow.ui

RESOURCES += \
    imgres.qrc
