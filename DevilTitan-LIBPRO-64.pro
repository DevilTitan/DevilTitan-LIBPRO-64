# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------

TEMPLATE = app
TARGET = DevilTitan-LIBPRO-64
DESTDIR = ../x64/Debug
QT += core uitools widgets gui sql

DEFINES += WIN64 QT_DLL QT_SQL_LIB QT_UITOOLS_LIB QT_WIDGETS_LIB
INCLUDEPATH += ./GeneratedFiles \
    . \
    ./GeneratedFiles/Debug
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(DevilTitan-LIBPRO-64.pri)

FORMS += \
    borrowbook.ui \
    aftersendingrequest.ui

HEADERS += \
    borrowbook.h \
    aftersendingrequest.h

SOURCES += \
    borrowbook.cpp \
    aftersendingrequest.cpp