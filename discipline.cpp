#include "discipline.h"

int Discipline::getSubjectId() const
{
    return subjectId;
}
int Discipline::getSemester() const
{
    return semester;
}
int Discipline::getHours() const
{
    return hours;
}
Discipline::Assessment Discipline::getAssessmentType() const
{
    return assessmentType;
}


void Discipline::setSubjectId(int id)
{
    subjectId = id;
}
void Discipline::setSemester(int sem)
{
    semester = sem;
}
void Discipline::setHours(int h)
{
    hours = h;
}
void Discipline::setAssessmentType(Assessment type)
{
    assessmentType = type;
}
