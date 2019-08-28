TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += $$PWD/../src
INCLUDEPATH += $$PWD/Unity
DEPENDPATH += $$PWD/../src

SOURCES += \
    Unity/unity.c \
    testMain.c

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../src/debug/functions.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../src/release/functions.o
}

unix: OBJECTS += $$OUT_PWD/../src/functions.o
