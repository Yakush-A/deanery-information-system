#ifndef SPECIALITY_H
#define SPECIALITY_H

#include<string>
#include<vector>

#include<group.h>

class Speciality
{
private:
    std::string specialityName;
    std::vector<Group> groups;

public:
    Speciality();

    inline std::string getSpecialityName();
    inline std::vector<Group> getGroups();

    inline void setSpecialityName(std::string name);
    inline void setGroups(std::vector<Group> groups);
};

#endif // SPECIALITY_H
