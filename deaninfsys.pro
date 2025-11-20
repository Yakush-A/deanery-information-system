QT       += core gui

QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    faculty.cpp \
    main.cpp \
    mainwindow.cpp \
    \
    person.cpp \
    employee.cpp \
    speciality.cpp \
    student.cpp \
    teacher.cpp \
    \
    group.cpp \
    \
    eventtime.cpp \
    \
    lesson.cpp \
    \
    academicevent.cpp \
    campusevent.cpp \
    \
    schedule.cpp \
    \
    classroom.cpp \
    \
    grade.cpp \
    examgrade.cpp \
    passfailgrade.cpp

HEADERS += \
    faculty.h \
    mainwindow.h \
    person.h \
    employee.h \
    speciality.h \
    student.h \
    teacher.h \
    \
    group.h \
    \
    eventtime.h \
    \
    lesson.h \
    \
    academicevent.h \
    campusevent.h \
    \
    schedule.h \
    \
    classroom.h \
    \
    grade.h \
    examgrade.h \
    passfailgrade.h


FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
