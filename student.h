#ifndef STUDENT_H
#define STUDENT_H

#include"person.h"

class Student : public Person 
{
protected:
    int groupNumber;
    int studentId;

public:
    Student(
        std::string fName, std::string mName, std::string lName,
        int group, int id) :
        Person(fName, mName, lName),
        groupNumber(group), studentId(id)
    {}

    // Геттеры
    virtual inline int getGroupNumber() const;
    virtual inline int getStudentId() const;

    // Сеттеры
    virtual inline void setGroupNumber(int group);
    virtual inline void setStudentId(int id);
};

#endif
