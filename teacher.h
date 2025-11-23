#ifndef TEACHER_H
#define TEACHER_H

#include"employee.h"
#include"schedule.h"

class Teacher : public Employee
{
protected:
    int teacherId;
    int departmentId;
    Schedule teacherSchedule;

public:
    Teacher(int teachId=0, int depId=0) :
        teacherId(teachId), departmentId(depId)
    {}

    int getTeacherId() const;
    int getDepartmentId() const;
    const Schedule& getTeacherSchedule() const;

    void setTeacherId(int id);
    void setDepartmentId(int id);
    void setTeacherSchedule(const Schedule& schedule);
};

#endif
