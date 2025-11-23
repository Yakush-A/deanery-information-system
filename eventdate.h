#ifndef EVENTDATE_H
#define EVENTDATE_H

#include<iostream>

class EventDate
{
protected:
    int monthDay;
    int month;
    int year;

public:
    EventDate(int d=0, int m=0, int y=0) :
        monthDay(d), month(m), year(y)
    {}

    inline unsigned getDay();
    inline unsigned getMonth();
    inline unsigned getYear();

    //сеттеры
    inline void setDay(unsigned d);
    inline void setMonth(unsigned m);
    inline void setYear(unsigned y);

    friend std::ostream& operator << (std::ostream& os, const EventDate& t);
    friend std::istream& operator >> (std::istream& is, EventDate& t);
};

#endif // EVENTDATE_H
