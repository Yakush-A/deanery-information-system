#ifndef EVENTTIME_H
#define EVENTTIME_H

#include<iostream>

// Базовый класс для времени
class EventTime
{
protected:
    unsigned hour, minute;

public:
    EventTime(unsigned h=0, unsigned m=0) :
        hour(h), minute(m)
    {}

    //геттеры
    inline unsigned getHour();
    inline unsigned getMinute();

    //сеттеры
    inline void setHour(unsigned h);
    inline void setMinute(unsigned m);

    friend std::ostream& operator << (std::ostream& os, const EventTime& t);
    friend std::istream& operator >> (std::istream& is, EventTime& t);
};

#endif // EVENTTIME_H
