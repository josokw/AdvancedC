TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++17

INCLUDEPATH += $$PWD/../functions
INCLUDEPATH += $$PWD/../../../_libCatch2
DEPENDPATH += $$PWD/../functions

SOURCES += testMain.cpp \
   functionTestsCatch2.cpp

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../functions/debug/functions.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../functions/release/functions.o
}

unix: OBJECTS += $$OUT_PWD/../functions/functions.o
