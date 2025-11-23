#include "university.h"

std::ifstream& operator >> (std::ifstream& is, University& uni)
{
    std::getline(is, uni.abbreviation, '/');
    std::getline(is, uni.fullName);

    Faculty buffer;

    while(!is.eof())
    {
        is>>buffer;
        uni.addFaculty(buffer);
    }

    return is;
}
std::ofstream& operator << (std::ofstream& os, University& uni)
{
    os<<uni.abbreviation.c_str()<<'/'<<uni.fullName.c_str()<<std::endl;

    for(auto& fc : uni.faculties)
    {
        std::cout<<fc.second.getAbbreviation()<<std::endl;
        os<<fc.second<<std::endl;
    }
    return os;
}

void University::addFaculty(const Faculty& src)
{
    faculties[src.getFacultyId()] = src;
}


const std::map<int,Faculty>& University::getFaculties() const
{
    return faculties;
}
const std::string& University::getAbbreviation() const
{
    return abbreviation;
}
const std::string& University::getFullName() const
{
    return fullName;
}
const std::filesystem::path& University::getWorkingDirectory() const
{
    return workingDirectory;
}
