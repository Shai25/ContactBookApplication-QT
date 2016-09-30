#-------------------------------------------------
#
# Project created by QtCreator 2016-03-29T16:43:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Contact
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logic.cpp \
    afterlogin.cpp \
    addcontact.cpp \
    deletecontact.cpp \
    editcontact.cpp \
    contact.cpp \
    trienode.cpp

HEADERS  += mainwindow.h \
    logic.h \
    afterlogin.h \
    addcontact.h \
    deletecontact.h \
    editcontact.h \
    contact.h \
    trienode.h

FORMS    += mainwindow.ui \
    afterlogin.ui \
    addcontact.ui \
    deletecontact.ui \
    editcontact.ui
