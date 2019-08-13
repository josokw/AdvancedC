TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += $$PWD/../functions
INCLUDEPATH += $$PWD/../../../_libUnity
DEPENDPATH += $$PWD/../functions

SOURCES += \
    ../../../_libUnity/unity.c \
    testMain.c

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../functions/debug/functions.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../functions/release/functions.o
}

unix: OBJECTS += $$OUT_PWD/../functions/functions.o


