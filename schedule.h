#ifndef SCHEDULE_H
#define SCHEDULE_H

#define WEEKS_IN_SCHEDULE 4
#define WORKDAYS_IN_SCHEDULE 6

#include<list>

#include"lesson.h"
#include"eventdate.h"

class Schedule
{
protected:
    EventDate lessonsStart;
    EventDate lessonsEnd;
    std::list<Lesson> lessons[WEEKS_IN_SCHEDULE][WORKDAYS_IN_SCHEDULE];

public:
    Schedule(EventDate start={0,0,0}, EventDate end={0,0,0}) :
        lessonsStart(start), lessonsEnd(end)
    {}

    // Геттеры
    const EventDate& getLessonsStart() const;
    const EventDate& getLessonsEnd() const;
    const std::list<Lesson>& getLessons(int week, int day) const;
    std::list<Lesson>& getLessons(int week, int day);

    // Сеттеры
    void setLessonsStart(const EventDate& start);
    void setLessonsEnd(const EventDate& end);
    void setLessons(int week, int day, const std::list<Lesson>& lessonsList);
};

#endif // SCHEDULE_H
