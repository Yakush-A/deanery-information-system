#include "major.h"

// Геттеры
int Major::getMajorId() const
{
    return majorId;
}
const std::string& Major::getAbbreviation() const
{
    return abbreviation;
}
const std::string& Major::getFullName() const
{
    return fullName;
}
const std::list<Discipline>& Major::getDisciplines() const
{
    return disciplines;
}


// Сеттеры
void Major::setMajorId(int id)
{
    majorId = id;
}
void Major::setAbbreviation(const std::string& abbr)
{
    abbreviation = abbr;
}
void Major::setFullName(const std::string& name)
{
    fullName = name;
}
