#include "eventdate.h"

#include <iomanip>

inline unsigned EventDate::getDay()
{
    return monthDay;
}
inline unsigned EventDate::getMonth()
{
    return month;
}
inline unsigned EventDate::getYear()
{
    return year;
}

//сеттеры
inline void EventDate::setDay(unsigned d)
{
    monthDay = d;
}
inline void EventDate::setMonth(unsigned m)
{
    month = m;
}
inline void EventDate::setYear(unsigned y)
{
    year = y;
}

std::ostream& operator << (std::ostream& os, const EventDate& t)
{
    os<<std::setw(2)<<std::setfill('0')<<std::right<<t.monthDay<<'.'<<t.month<<'.'<<t.year;
    return os;
}

std::istream& operator >> (std::istream& is, EventDate& t)
{
    char dot1, dot2;
    is >> t.monthDay >> dot1 >> t.month >> dot2 >> t.year;

    if (dot1 != '.' || dot2 != '.') {
        is.setstate(std::ios::failbit);
    }

    return is;
}
