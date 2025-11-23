#ifndef EXAMGRADE_H
#define EXAMGRADE_H

#include "grade.h"
#include "discipline.h"

class ExamGrade : public Grade, public Discipline
{
protected:
    int retakes;

public:
    ExamGrade(int subjId=0, int studId=0, int teachId=0,
              int gr=0, EventDateTime dt={0,0,0,0,0}, int ret=0,
              int sem=0, int h=0, Assessment type=Assessment::EXAM) :

        Grade(subjId, studId, teachId, gr, dt),
        Discipline(subjId, sem, h, type),
        retakes(ret)
    {}

    int getRetakes() const;

    void setRetakes(int ret);
};

#endif // EXAMGRADE_H
