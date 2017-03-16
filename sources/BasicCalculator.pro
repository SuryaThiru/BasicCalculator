#-------------------------------------------------
#
# Project created by QtCreator 2017-02-26T10:24:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BasicCalculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    calculator.cpp

HEADERS  += mainwindow.h \
    calculator.h

FORMS    += mainwindow.ui

RESOURCES += \
    icon.qrc

DISTFILES += \
    to-do.txt \
    bugs

win32: RC_ICONS += app_icon.ico
