#ifndef FACULTY_H
#define FACULTY_H

#include<map>
#include<string>
#include<fstream>

#include "department.h"
#include "major.h"
#include "group.h"

class Faculty
{
private:
    int facultyId;
    std::string abbreviation;
    std::string fullName;

    std::map<int, Department> departments;
    std::map<int, Major> majors;
    std::map<int, Group> groups;


public:
    Faculty(int id=0, std::string abbr="", std::string name="") :
        facultyId(id), abbreviation(abbr), fullName(name)
    {}

    std::list<int> getTopStudents(float minGPA, int currentSemester) const;

    int getFacultyId() const;
    const std::string& getAbbreviation() const;
    const std::string& getFullName() const;
    const std::map<int, Department>& getDepartments() const;
    const std::map<int, Major>& getMajors() const;
    const std::map<int, Group>& getGroups() const;

    void setFacultyId(int id);
    void setAbbreviation(const std::string& abbr);
    void setFullName(const std::string& name);
    void setGroups(const std::map<int, Group>& src);

    void addDepartment(const Department& src);

    std::pair<std::list<int>, std::list<int>> profilizeGroups(std::list<int> groupNumbers,
        int primaryMajorIntake, int secondaryMajorIntake, int currentSemester) const;

    friend std::ifstream& operator >> (std::ifstream& is, Faculty& fc);
    friend std::ofstream& operator << (std::ofstream& os, Faculty& fc);
};

#endif // FACULTY_H
