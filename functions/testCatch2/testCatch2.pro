TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++17

INCLUDEPATH += $$PWD/../app
INCLUDEPATH += $$PWD/Catch2
DEPENDPATH += $$PWD/../app

SOURCES += testMain.cpp \
   functionTestsCatch2.cpp

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../app/debug/functions.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../app/release/functions.o
}

unix: OBJECTS += $$OUT_PWD/../app/functions.o
