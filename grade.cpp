#include "grade.h"

std::ifstream& operator >> (std::ifstream& is, Grade& gr)
{
    char radix;
    is>>gr.studentId>>radix>>
        static_cast<EventDate&>(gr.dateTime)>>radix>>
        gr.subjectId>>radix>>
        gr.teacherId>>radix>>
        gr.grade>>radix>>
        static_cast<EventTime&>(gr.dateTime);
    return is;
}
std::ofstream& operator << (std::ofstream& os, Grade& gr)
{
    os<<gr.studentId<<'/'<<
        static_cast<EventDate&>(gr.dateTime)<<'/'<<
        gr.subjectId<<'/'<<
        gr.teacherId<<'/'<<
        gr.grade<<'/'<<
        static_cast<EventTime&>(gr.dateTime);
    return os;
}


int Grade::getStudentId() const
{
    return studentId;
}
int Grade::getGrade() const
{
    return grade;
}
EventDateTime Grade::getEventDateTime() const
{
    return dateTime;
}


void Grade::setStudentId(int id)
{
    studentId = id;
}
void Grade::setGrade(int gr)
{
    grade = gr;
}
void Grade::setEventDateTime(const EventDateTime& dt)
{
    dateTime = dt;
}
