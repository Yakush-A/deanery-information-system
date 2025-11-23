#ifndef MAJOR_H
#define MAJOR_H

#include <map>
#include <string>

#include "group.h"

class Major
{
private:
    int majorId;
    std::string abbreviation;
    std::string fullName;

    std::list<Discipline> disciplines;

public:
    Major(int id=0, std::string abbr=0, std::string name=0) :
        majorId(id), abbreviation(abbr), fullName(name)
    {}


    int getMajorId() const;
    const std::string& getAbbreviation() const;
    const std::string& getFullName() const;

    const std::list<Discipline>& getDisciplines() const;

    void setMajorId(int id);
    void setAbbreviation(const std::string& abbr);
    void setFullName(const std::string& name);
    void setDisciplines(const std::list<Discipline>& dis);
};

#endif // MAJOR_H
