#ifndef GRADE_H
#define GRADE_H

#include<fstream>

#include "eventdatetime.h"

class Grade
{
protected:
    int subjectId;
    int studentId;
    int teacherId;
    int grade;
    EventDateTime dateTime;

public:
    Grade(int subjId=0, int studId=0, int teachId=0,
          int gr=0, EventDateTime dt={0,0,0,0,0}) :
        subjectId(subjId), studentId(studId), teacherId(teachId),
        grade(gr), dateTime(dt)
    {}


    virtual int getStudentId() const;
    virtual int getGrade() const;
    virtual EventDateTime getEventDateTime() const;

    virtual void setStudentId(int id);
    virtual void setGrade(int gr);
    virtual void setEventDateTime(const EventDateTime& dt);

    friend std::ifstream& operator >> (std::ifstream& is, Grade& gr);
    friend std::ofstream& operator << (std::ofstream& os, Grade& gr);
};

#endif
