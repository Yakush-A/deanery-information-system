#ifndef LESSON_H
#define LESSON_H

#include"eventtime.h"
#include"subject.h"

class Lesson : public Subject
{
    EventTime startTime;
    EventTime endTime;
    int teacherId;

public:
    Lesson(int id=0, const std::string& abbr="", const std::string& name="",
           EventTime start = {0, 0}, EventTime end = {0, 0}, int teachId=0) :
        Subject(id, abbr, name), startTime(start), endTime(end), teacherId(teachId)
    {}


    // Геттеры
    const EventTime& getStartTime() const;
    const EventTime& getEndTime() const;
    int getTeacherId() const;

    // Сеттеры
    void setStartTime(const EventTime& start);
    void setEndTime(const EventTime& end);
    void setTeacherId(int id);

};

#endif // LESSON_H
