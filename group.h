#ifndef GROUP_H
#define GROUP_H

#include "student.h"
#include "schedule.h"
#include "grade.h"

#include <map>
#include <set>

class Group 
{
private:
    int groupNumber;
    std::map<int, Student> students;
    Schedule groupSchedule;
    int course;
    int majorId;
    int advisorId;
    int classRepId;
    int classViceRepId;

public:
    Group(int num=0, int c=1, int majId=0,
            int advId=0, int crId=0, int cvrId=0) :
        groupNumber(num), course(c), majorId(majId),
        advisorId(advId), classRepId(crId), classViceRepId(cvrId)
    {}

    std::list<Student> makeFailureReport(float minGPA, int currentSem);

    // Геттеры
    int getGroupNumber() const;
    int getMajorId() const;
    int getCourse() const;
    int getAdvisorId() const;
    int getClassRepId() const;
    int getClassViceRepId() const;
    const std::map<int, Student>& getStudents() const;
    const Schedule& getGroupSchedule() const;

    // Сеттеры
    void setGroupNumber(int number);
    void setMajorId(int major);
    void setCourse(int c);
    void setAdvisorId(int id);
    void setClassRepId(int id);
    void setClassViceRepId(int id);
    void setStudents(const std::map<int, Student>& src);
    void setSchedule(const Schedule& src);

    friend std::ifstream& operator >> (std::ifstream& is, Group& fc);
    friend std::ofstream& operator << (std::ofstream& os, Group& fc);
};

#endif
