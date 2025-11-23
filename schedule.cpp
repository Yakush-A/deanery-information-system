#include "schedule.h"

// Геттеры
const EventDate& Schedule::getLessonsStart() const
{
    return lessonsStart;
}

const EventDate& Schedule::getLessonsEnd() const
{
    return lessonsEnd;
}

const std::list<Lesson>& Schedule::getLessons(int week, int day) const
{
    return lessons[week][day];
}

std::list<Lesson>& Schedule::getLessons(int week, int day)
{
    return lessons[week][day];
}

// Сеттеры
void Schedule::setLessonsStart(const EventDate& start)
{
    lessonsStart = start;
}

void Schedule::setLessonsEnd(const EventDate& end)
{
    lessonsEnd = end;
}

void Schedule::setLessons(int week, int day, const std::list<Lesson>& lessonsList)
{
    lessons[week][day] = lessonsList;
}
