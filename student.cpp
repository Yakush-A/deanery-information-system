#include "student.h"
#include <algorithm>

std::ifstream& operator >> (std::ifstream& is, Student& st)
{
    char buffer[80];
    is.getline(buffer, 80, '/');
    st.studentId = std::atoi(buffer);

    std::getline(is, st.lastName);
    std::getline(is, st.firstName);
    std::getline(is, st.middleName);

    return is;
}
std::ofstream& operator << (std::ofstream& os, Student& st)
{
    os<<st.studentId<<'/'<<st.lastName<<'/'<<st.firstName<<'/'<<st.middleName;
    return os;
}

float Student::getGPA() const
{
    int numOfGrades = grades.size();
    int sum{};
    for(const auto& it : grades)
    {
        sum+=it.getGrade();
    }
    return static_cast<float>(sum/numOfGrades);
}

float Student::getGPA(int semester) const
{
    int numOfGrades{};
    int sum{};
    for(const auto& it : recordsTranscript)
    {
        if(it.getSemester() == semester)
            sum+=it.getGrade();
    }
    return (numOfGrades) ? static_cast<float>(sum/numOfGrades) : 10;
}

bool Student::hasIncomplete(int currentSemester) const
{
    int retakeCount{};

    for(const ExamGrade& it : recordsTranscript)
    {
        if(it.getSemester() == currentSemester)
        {
            retakeCount += it.getRetakes();

            if((it.getGrade() < 4 && it.getAssessmentType() != Discipline::Assessment::TEST) ||
                (it.getGrade() == 0 && it.getAssessmentType() == Discipline::Assessment::TEST))
                return true;
        }
    }

    return retakeCount > 2;
}

std::list<ExamGrade> Student::getIncompletes(int currentSemester) const
{
    std::list<ExamGrade> debtDisciplines;
    for(const ExamGrade& it : recordsTranscript)
    {
        if(it.getSemester() == currentSemester)
        {
            if((it.getGrade() < 4 && it.getAssessmentType() != Discipline::Assessment::TEST) ||
                (it.getGrade() == 0 && it.getAssessmentType() == Discipline::Assessment::TEST))
                debtDisciplines.push_back(it);
        }
    }
    return debtDisciplines;
}

std::list<Discipline> Student::countCreditDefiency(const std::list<Discipline>& major, int semester) const
{
    std::list<Discipline> defiency;

    for(const Discipline& it : major)
    {
        if(it.getSemester() <= semester)
        {
            auto founded = std::find_if(
                recordsTranscript.begin(), recordsTranscript.end(),
                [&it](const ExamGrade& gr) {
                    return ((it.getSubjectId() == gr.getSubjectId()) &&
                            (it.getHours() == gr.getHours()) &&
                            (it.getSemester() == gr.getSemester()) &&
                            (it.getAssessmentType() == gr.getAssessmentType())
                            ); // Сравнение по ключу
                });
            if(founded == recordsTranscript.end()) defiency.push_back(it);
        }
    }

    return defiency;
}

// Геттеры
int Student::getGroupNumber() const
{
    return groupNumber;
}

int Student::getStudentId() const
{
    return studentId;
}

const std::list<ExamGrade>& Student::getRecordsTranscript() const
{
    return recordsTranscript;
}

const std::set<Grade>& Student::getGrades() const
{
    return grades;
}


// Сеттеры
void Student::setGroupNumber(int group)
{
    groupNumber = group;
}

void Student::setStudentId(int id)
{
    studentId = id;
}

void Student::setRecordsTranscript(const std::list<ExamGrade>& records)
{
    recordsTranscript = records;
}

void Student::setGrades(const std::set<Grade>& grades)
{
    this->grades = grades;
}
