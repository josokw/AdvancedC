TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += $$PWD/../app
INCLUDEPATH += $$PWD/Unity
DEPENDPATH += $$PWD/../app

SOURCES += \
    Unity/unity.c \
    testMain.c

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../app/debug/functions.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../app/release/functions.o
}

unix: OBJECTS += $$OUT_PWD/../app/functions.o
