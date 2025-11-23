#include "interface.h"
#include "fileexception.h"

#include<fstream>

#define MAJOR_DATA_FILE_NAME "majordata.txt"
#define FACULTY_DATA_FILE_NAME "facultydata.txt"
#define DEPARTMENTS_FILE_NAME "departments.txt"
#define DISCIPLINES_FILE_NAME "disciplines.txt"
#define TEACHERS_FILE_NAME "teachers.txt"
#define EXAMS_FILE_NAME "exams.txt"
#define GRADES_FILE_NAME "departments.txt"
#define DISCIPLINES_FILE_NAME "disciplines.txt"
#define TEACHERS_FILE_NAME "teachers.txt"


void Interface::readFacultyData()
{
    Faculty buffer;

    if(!std::filesystem::exists(workingDirectory))
        throw FileException(2, "Directory does not exist.");

    std::ifstream inputStream;

    inputStream.open(workingDirectory.string() + FACULTY_DATA_FILE_NAME);
    if(!inputStream.is_open())
        throw FileException(1, "File does not exist.");

    inputStream>>buffer;

    Department departmentBuffer;

    inputStream.open(workingDirectory.string() + DEPARTMENTS_FILE_NAME);
    if(!inputStream.is_open())
        throw FileException(1, "File does not exist.");








    faculty = buffer;
}
