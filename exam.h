#ifndef EXAM_H
#define EXAM_H

#include "discipline.h"
#include "examgrade.h"

class Exam : public Discipline, public ExamGrade
{
protected:

public:
    Exam(int subjId=0, int sem=0, int h=0, Discipline::Assessment type = Discipline::Assessment::EXAM,
         int studId=0, int teachId=0,
         int gr=0, EventDateTime dt={0,0,0,0,0}, int ret=0) :
        Discipline(subjId, sem, h, type), ExamGrade(subjId, studId, teachId, gr, dt, ret)
    {}
};

#endif // EXAM_H
