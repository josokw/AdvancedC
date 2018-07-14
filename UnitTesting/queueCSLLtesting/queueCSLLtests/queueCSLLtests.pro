TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += $$PWD/../queueCSLL
DEPENDPATH += $$PWD/../queueCSLL

SOURCES += main.c \
    unity.c

HEADERS += \
    unity.h \
    unity_internals.h

win32: CONFIG(debug, debug|release) {
   OBJECTS += $$OUT_PWD/../queueCSLL/debug/queue.o
}
win32: CONFIG(release, debug|release) {
   OBJECTS += $$OUT_PWD/../queueCSLL/release/queue.o
}

unix: OBJECTS += $$OUT_PWD/../queueCSLL/queue.o
