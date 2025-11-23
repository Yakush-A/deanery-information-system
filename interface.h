#ifndef INTERFACE_H
#define INTERFACE_H

#include<filesystem>
#include<map>

#include"faculty.h"

class Interface
{
private:
    Faculty faculty;
    std::filesystem::path workingDirectory;

    std::map<int, Subject> allSubjects;

public:
    Interface(std::string path);

    void readFacultyData();


    const Faculty& getFaculty() const;
    const std::filesystem::path& getWorkingDirectory() const;
};

#endif // INTERFACE_H
