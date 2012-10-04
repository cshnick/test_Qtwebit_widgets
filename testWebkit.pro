#-------------------------------------------------
#
# Project created by QtCreator 2012-10-03T12:57:08
#
#-------------------------------------------------

QT       += core gui webkit

SERVICE_DIR = $$PWD/service

TARGET = testWebkit
TEMPLATE = app

SOURCES += main.cpp\
    GraphicsSimpleBrowser.cpp \
    GraphicsProxySimpleBrowser.cpp \
    SimpleBrowser.cpp \
    WebWindow.cpp

HEADERS  += \
    GraphicsSimpleBrowser.h \
    WebWindow.h \
    SimpleBrowser.h \
    GraphicsProxySimpleBrowser.h

FORMS    += webwindow.ui \
    simplebrowser.ui

MOC_DIR = $$SERVICE_DIR
UI_DIR = $$SERVICE_DIR
OBJECTS_DIR = $$SERVICE_DIR
DESTDIR = $$SERVICE_DIR
