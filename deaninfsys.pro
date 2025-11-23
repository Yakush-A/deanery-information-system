QT       += core gui

QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    baseexception.cpp \
    department.cpp \
    discipline.cpp \
    eventdate.cpp \
    eventdatetime.cpp \
    eventtime.cpp \
    exam.cpp \
    examgrade.cpp \
    faculty.cpp \
    fileexception.cpp \
    inputexception.cpp \
    interface.cpp \
    lesson.cpp \
    main.cpp \
    mainwindow.cpp \
    \
    major.cpp \
    node.cpp \
    person.cpp \
    employee.cpp \
    schedule.cpp \
    student.cpp \
    subject.cpp \
    teacher.cpp \
    \
    group.cpp \
    \
    grade.cpp \
    tree.cpp

HEADERS += \
    baseexception.h \
    department.h \
    discipline.h \
    eventdate.h \
    eventdatetime.h \
    eventtime.h \
    exam.h \
    examgrade.h \
    faculty.h \
    fileexception.h \
    inputexception.h \
    interface.h \
    lesson.h \
    mainwindow.h \
    major.h \
    node.h \
    person.h \
    employee.h \
    schedule.h \
    student.h \
    subject.h \
    teacher.h \
    \
    group.h \
    grade.h \
    tree.h


FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
