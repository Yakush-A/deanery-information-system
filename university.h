#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

#include "faculty.h"

class University
{
private:
    std::map<int, Faculty> faculties;
    std::string abbreviation;
    std::string fullName;
    std::filesystem::path workingDirectory;

public:
    University(std::string abbr="",std::string name="", std::string path="") :
        abbreviation(abbr), fullName(name), workingDirectory(path)
    {}

    const std::map<int, Faculty>& getFaculties() const;
    const std::string& getAbbreviation() const;
    const std::string& getFullName() const;
    const std::filesystem::path& getWorkingDirectory() const;

    void addFaculty(const Faculty& src);

    friend std::ifstream& operator >> (std::ifstream& is, University& uni);
    friend std::ofstream& operator << (std::ofstream& os, University& uni);
};

#endif // UNIVERSITY_H
