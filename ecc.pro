QT += widgets

SOURCES += \
    src/main.cpp \
    src/main_widget.cpp \
    src/InverseMod.cpp

HEADERS += \
    include/main_widget.h \
    include/KeyGen.h
    include/Curves.h
    include/EllipticCurve.h
    include/InverseMod.h
    include/EccCalculator.h

INCLUDEPATH += include/

DESTDIR = bin/

CONFIG += qt debug
CONFIG += c++14