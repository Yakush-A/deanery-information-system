#include"person.h"

inline std::string Person::getFirstName() const
{
    return firstName;
}
inline std::string Person::getMiddleName() const
{
    return middleName;
}
inline std::string Person::getLastName() const
{
    return lastName;
}


inline void Person::setFirstName(const std::string& first)
{
    firstName = first;
}
inline void Person::setMiddleName(const std::string& middle)
{
    middleName = middle;
}
inline void Person::setLastName(const std::string& last)
{
    lastName = last;
}
