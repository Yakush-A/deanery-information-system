#ifndef STUDENT_H
#define STUDENT_H

#include <set>
#include <fstream>
#include <list>

#include"person.h"
#include"examgrade.h"
#include"grade.h"

class Student : public Person 
{
protected:
    int groupNumber;
    int studentId;

    std::list<ExamGrade> recordsTranscript;
    std::set<Grade> grades;

public:
    Student(
        std::string fName="Иванов", std::string mName="Иван", std::string lName="Иванович",
        int group=0, int id=0) :
        Person(fName, mName, lName),
        groupNumber(group), studentId(id)
    {}

    float getGPA() const;
    float getGPA(int semester) const;

    bool hasIncomplete(int currentSemester) const;

    std::list<ExamGrade> getIncompletes(int currentSemester) const;

    std::list<Discipline> countCreditDefiency(const std::list<Discipline>& major, int semester) const;

    // Геттеры
    int getGroupNumber() const;
    int getStudentId() const;
    const std::list<ExamGrade>& getRecordsTranscript() const;
    const std::set<Grade>& getGrades() const;

    // Сеттеры
    void setGroupNumber(int group);
    void setStudentId(int id);
    void setRecordsTranscript(const std::list<ExamGrade>& records);
    void setGrades(const std::set<Grade>& grades);

    friend std::ifstream& operator >> (std::ifstream& is, Student& st);
    friend std::ofstream& operator << (std::ofstream& os, Student& st);

};

#endif
