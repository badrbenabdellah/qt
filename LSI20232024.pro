QT       += core gui sql
#QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
w
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ajouteretudiant.cpp \
    database.cpp \
    gemi.cpp \
    geo.cpp \
    gestionetudiant.cpp \
    gi.cpp \
    listefilliere.cpp \
    listetudiant.cpp \
    login.cpp \
    lsi.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ajouteretudiant.h \
    connexion_mysql.h \
    database.h \
    gemi.h \
    geo.h \
    gestionetudiant.h \
    gi.h \
    listefilliere.h \
    listetudiant.h \
    login.h \
    lsi.h \
    mainwindow.h

FORMS += \
    ajouteretudiant.ui \
    gemi.ui \
    geo.ui \
    gestionetudiant.ui \
    gi.ui \
    listefilliere.ui \
    listetudiant.ui \
    login.ui \
    lsi.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    assets/fst-1024x383.png \
    assets/logo-uae-1024x297.png

RESOURCES += \
    resources.qrc
