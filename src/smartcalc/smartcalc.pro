QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
include(qcustomplot/qcustomplot.pri)
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../functions/creditcalc.c \
    ../functions/deposit.c \
    ../functions/s21_smartcalc.c \
    ../functions/stack_functions.c \
    ../functions/validator.c \
    creditcalcwindow.cpp \
    depositwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot/qcustomplot.cpp

HEADERS += \
    ../functions/s21_smartcalc.h \
    ../s21_smartcalc.h \
    creditcalcwindow.h \
    depositwindow.h \
    mainwindow.h \
    qcustomplot/qcustomplot.h

FORMS += \
    creditcalcwindow.ui \
    depositwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../img/calc_icon.png \
    img/calc_icon.png \
    img/monetki.png \
    img/svinka.png

RESOURCES += \
    resource.qrc
