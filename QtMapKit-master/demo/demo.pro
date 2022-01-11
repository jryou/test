#-------------------------------------------------
#
# Project created by QtCreator 2013-07-08T16:01:14
#
#-------------------------------------------------

QT       += core gui webkit

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets webkitwidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo
TEMPLATE = app

INCLUDEPATH += ../src
LIBS += -L../lib -lqtmapkit

SOURCES += main.cpp\
        Widget.cpp

HEADERS  += Widget.h
