#include "group.h"

std::list<Student> Group::makeFailureReport(float minGPA, int currentSem)
{
    std::list<Student> lowGPAStudents;

    for(const auto& it : students)
    {
        if(it.second.getGPA() < minGPA ||
            it.second.hasIncomplete(currentSem))

            lowGPAStudents.push_back(it.second);
    }

    return lowGPAStudents;
}

// Геттеры
int Group::getGroupNumber() const
{
    return groupNumber;
}
int Group::getMajorId() const
{
    return majorId;
}
int Group::getCourse() const
{
    return course;
}
int Group::getAdvisorId() const
{
    return advisorId;
}
int Group::getClassRepId() const
{
    return classRepId;
}
int Group::getClassViceRepId() const
{
    return classViceRepId;
}
const std::map<int, Student>& Group::getStudents() const
{
    return students;
}
const Schedule& Group::getGroupSchedule() const
{
    return groupSchedule;
}

// Сеттеры
void Group::setGroupNumber(int number)
{
    groupNumber = number;
}
void Group::setMajorId(int major)
{
    majorId = major;
}
void Group::setCourse(int c)
{
    course = c;
}
void Group::setAdvisorId(int id)
{
    advisorId = id;
}
void Group::setClassRepId(int id)
{
    classRepId = id;
}
void Group::setClassViceRepId(int id)
{
    classViceRepId = id;
}
void Group::setStudents(const std::map<int, Student>& src)
{
    students = src;
}
void Group::setSchedule(const Schedule& src)
{
    groupSchedule = src;
}
