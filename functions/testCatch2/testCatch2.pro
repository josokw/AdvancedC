TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++17

INCLUDEPATH += $$PWD/../src
INCLUDEPATH += $$PWD/Catch2
DEPENDPATH += $$PWD/../src

SOURCES += testMain.cpp \
   functionTestsCatch2.cpp

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../src/debug/functions.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../src/release/functions.o
}

unix: OBJECTS += $$OUT_PWD/../src/functions.o
