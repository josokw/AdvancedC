TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += $$PWD/../functions
DEPENDPATH += $$PWD/../functions

SOURCES += main.c \
    unity.c

HEADERS += \
    unity.h \
    unity_internals.h

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../functions/debug/functions.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../functions/release/functions.o
}

unix: OBJECTS += $$OUT_PWD/../functions/functions.o
