#include "lesson.h"

// Геттеры
const EventTime& Lesson::getStartTime() const
{
    return startTime;
}

const EventTime& Lesson::getEndTime() const
{
    return endTime;
}

int Lesson::getTeacherId() const
{
    return teacherId;
}

// Сеттеры
void Lesson::setStartTime(const EventTime& start)
{
    startTime = start;
}

void Lesson::setEndTime(const EventTime& end)
{
    endTime = end;
}

void Lesson::setTeacherId(int id)
{
    teacherId = id;
}
