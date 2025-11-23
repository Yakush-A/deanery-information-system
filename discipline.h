#ifndef DISCIPLINE_H
#define DISCIPLINE_H

class Discipline
{
public:
    enum class Assessment {EXAM, TEST, GRADEDTEST, COURSEPROJ};

protected:
    int semester;
    int subjectId;
    int hours;
    Assessment assessmentType;

public:
    Discipline(
        int id=0, int sem=0, int h=0, Assessment type=Assessment::EXAM) :
        semester(sem), subjectId(id), hours(h), assessmentType(type)
    {}

    int getSubjectId() const;
    int getSemester() const;
    int getHours() const;
    Assessment getAssessmentType() const;

    void setSubjectId(int id);
    void setSemester(int sem);
    void setHours(int h);
    void setAssessmentType(Assessment type);

};

#endif // DISCIPLINE_H
