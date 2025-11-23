#include "teacher.h"

// Геттеры
int Teacher::getTeacherId() const
{
    return teacherId;
}

int Teacher::getDepartmentId() const
{
    return departmentId;
}

const Schedule& Teacher::getTeacherSchedule() const
{
    return teacherSchedule;
}

// Сеттеры
void Teacher::setTeacherId(int id)
{
    teacherId = id;
}

void Teacher::setDepartmentId(int id)
{
    departmentId = id;
}

void Teacher::setTeacherSchedule(const Schedule& schedule)
{
    teacherSchedule = schedule;
}
