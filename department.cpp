#include "department.h"

std::ifstream& operator >> (std::ifstream& is, Department& dp)
{
    char buffer[80];
    is.getline(buffer, 80, '/');
    dp.departmentId = std::atoi(buffer);

    std::getline(is, dp.abbreviation);
    std::getline(is, dp.fullName);

    is.getline(buffer, 80, '/');
    dp.departmentHeadId = std::atoi(buffer);

    is.getline(buffer, 80);
    dp.majorProgramId = std::atoi(buffer);

    return is;
}
std::ofstream& operator << (std::ofstream& os, Department& dp)
{
    os<<dp.departmentId<<'/'<<
        dp.abbreviation.c_str()<<'/'<<
        dp.fullName.c_str()<<'/'<<
        dp.departmentHeadId<<'/'<<
        dp.majorProgramId;

    return os;
}


int Department::getFacultyId() const
{
    return facultyId;
}
int Department::getDepartmentId() const
{
    return departmentId;
}
int Department::getDepartmentHeadId() const
{
    return departmentHeadId;
}
const std::string& Department::getAbbreviation() const
{
    return abbreviation;
}
const std::string& Department::getFullName() const
{
    return fullName;
}
int Department::getMajorProgramId() const
{
    return majorProgramId;
}
const std::map<int, Teacher>& Department::getTeachers() const
{
    return teachers;
}


void Department::setFacultyId(int id)
{
    facultyId = id;
}
void Department::setDepartmentId(int id)
{
    departmentId = id;
}
void Department::setDepartmentHeadId(int id)
{
    departmentHeadId = id;
}
void Department::setAbbreviation(const std::string& abbr)
{
    abbreviation = abbr;
}
void Department::setFullName(const std::string& name)
{
    fullName = name;
}
void Department::setMajorProgramId(int id)
{
    majorProgramId = id;
}
void Department::setTeachers(std::map<int, Teacher>& src)
{
    teachers = src;
}
