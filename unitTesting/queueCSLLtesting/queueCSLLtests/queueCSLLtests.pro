TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += $$PWD/../queueCSLL
INCLUDEPATH += $$PWD/../../../_libUnity
DEPENDPATH += $$PWD/../queueCSLL

SOURCES += main.c \
    ../../../_libUnity/unity.c

HEADERS += \
    ../../../_libUnity/unity.h \
    ../../../_libUnity/unity_internals.h

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../queueCSLL/debug/queue.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../queueCSLL/release/queue.o
}

unix: OBJECTS += $$OUT_PWD/../queueCSLL/queue.o
