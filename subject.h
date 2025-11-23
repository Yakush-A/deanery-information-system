#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

class Subject
{
protected:
    int subjectId;
    std::string abbreviation;
    std::string fullName;

public:
    Subject(int id=0, const std::string& abbr="", const std::string& name="") :
        subjectId(id), abbreviation(abbr), fullName(name)
    {}

    virtual int getSubjectId();
    virtual const std::string& getAbbreviation();
    virtual const std::string& getFullName();

    virtual void setSubjectId(int id);
    virtual void getAbbreviation(const std::string& abbr);
    virtual void getFullName(const std::string& name);

};

#endif // SUBJECT_H
