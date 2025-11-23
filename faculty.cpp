#include "faculty.h"
#include <vector>
#include <algorithm>

std::ifstream& operator >> (std::ifstream& is, Faculty& fc)
{
    char buffer[80];
    is.getline(buffer, 80, '/');
    fc.facultyId = std::atoi(buffer);
    std::getline(is, fc.abbreviation, '/');
    std::getline(is, fc.fullName);

    return is;
}
std::ofstream& operator << (std::ofstream& os, Faculty& fc)
{
    os<<fc.facultyId<<'/'<<fc.abbreviation.c_str()<<'/'<<fc.fullName.c_str();
    return os;
}

//метод получения списков профилизации студентов
std::pair<std::list<int>, std::list<int>> Faculty::profilizeGroups(std::list<int> groupNumbers,
    int primaryMajorIntake, int secondaryMajorIntake, int currentSemester) const
{
    std::vector<std::pair<float, int>> studentsWithGPA;
    std::list<int> primaryProfileIds;
    std::list<int> secondaryProfileIds;

    for (int groupNum : groupNumbers)
    {
        const auto& group = groups.at(groupNum).getStudents();

        for (const auto& studentPair : group)
        {
            studentsWithGPA.emplace_back(
                studentPair.second.getGPA(currentSemester),
                studentPair.second.getStudentId()
            );
        }
    }

    std::sort(studentsWithGPA.begin(), studentsWithGPA.end(),
              [](const auto& a, const auto& b) {
                  return a.first > b.first;
              });

    int count = 0;
    for (const auto& studentPair : studentsWithGPA)
    {
        if (count < primaryMajorIntake)
            primaryProfileIds.push_back(studentPair.second);

        if (count < primaryMajorIntake + secondaryMajorIntake)
            secondaryProfileIds.push_back(studentPair.second);

        else break;

        count++;
    }

    return {primaryProfileIds, secondaryProfileIds};
}

std::list<int> Faculty::getTopStudents(float minGPA, int currentSemester) const
{
    std::list<int> topStudents;

    // Проходим по всем группам факультета
    for (const auto& groupPair : groups)
    {
        const Group& group = groupPair.second;

        // Проходим по всем студентам в группе
        for (const auto& studentPair : group.getStudents())
        {
            const Student& student = studentPair.second;

            // Проверяем условия: нет академической задолженности и GPA >= minGPA
            if (!student.hasIncomplete(currentSemester)
                && student.getGPA() >= minGPA)
            {
                topStudents.push_back(student.getStudentId());
            }
        }
    }

    return topStudents;
}

int Faculty::getFacultyId() const
{
    return facultyId;
}
const std::string& Faculty::getAbbreviation() const
{
    return abbreviation;
}
const std::string& Faculty::getFullName() const
{
    return fullName;
}
const std::map<int, Department>& Faculty::getDepartments() const
{
    return departments;
}
const std::map<int, Major>& Faculty::getMajors() const
{
    return majors;
}
const std::map<int, Group>& Faculty::getGroups() const
{
    return groups;
}

void Faculty::setFacultyId(int id)
{
    facultyId = id;
}
void Faculty::setAbbreviation(const std::string& abbr)
{
    abbreviation = abbr;
}
void Faculty::setFullName(const std::string& name)
{
    fullName = name;
}
void Faculty::setGroups(const std::map<int, Group>& src)
{
    groups = src;
}
