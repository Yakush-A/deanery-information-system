#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include<fstream>
#include<string>
#include<map>

#include"teacher.h"

class Department
{
private:
    int facultyId;
    int departmentId;
    int departmentHeadId;
    std::string abbreviation;
    std::string fullName;
    int majorProgramId;

    std::map<int, Teacher> teachers;


public:
    Department(int fId=0, int dId=0, int dHId=0,
            const std::string& abbr="", const std::string& name="", int majProgId=0) :
        facultyId(fId), departmentId(dId), departmentHeadId(dHId),
        abbreviation(abbr), fullName(name), majorProgramId(majProgId)
    {}

    int getFacultyId() const;
    int getDepartmentId() const;
    int getDepartmentHeadId() const;
    const std::string& getAbbreviation() const;
    const std::string& getFullName() const;
    int getMajorProgramId() const;
    const std::map<int, Teacher>& getTeachers() const;

    void setFacultyId(int id);
    void setDepartmentId(int id);
    void setDepartmentHeadId(int id);
    void setAbbreviation(const std::string& abbr);
    void setFullName(const std::string& name);
    void setMajorProgramId(int id);
    void setTeachers(std::map<int, Teacher>& src);

    void addTeacher(const Teacher& src);

    friend std::ifstream& operator >> (std::ifstream& is, Department& dp);
    friend std::ofstream& operator << (std::ofstream& os, Department& dp);
};

#endif // DEPARTMENT_H
