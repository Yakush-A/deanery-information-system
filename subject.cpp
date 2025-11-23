#include "subject.h"

int Subject::getSubjectId()
{
    return subjectId;
}
const std::string& Subject::getAbbreviation()
{
    return abbreviation;
}
const std::string& Subject::getFullName()
{
    return fullName;
}


void Subject::setSubjectId(int id)
{
    subjectId = id;
}
void Subject::getAbbreviation(const std::string& abbr)
{
    abbreviation = abbr;
}
void Subject::getFullName(const std::string& name)
{
    fullName = name;
}
