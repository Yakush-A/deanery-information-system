#include "eventtime.h"

#include<iomanip>

inline unsigned EventTime::getHour()
{
    return hour;
}
inline unsigned EventTime::getMinute()
{
    return minute;
}

//сеттеры
inline void EventTime::setHour(unsigned h)
{
    hour = h;
}
inline void EventTime::setMinute(unsigned m)
{
    minute = m;
}

std::ostream& operator << (std::ostream& os, const EventTime& t)
{
    os<<std::setw(2)<<std::setfill('0')<<std::right<<t.hour<<':'<<t.minute;
    return os;
}

std::istream& operator >> (std::istream& is, EventTime& t)
{
    char colon;
    is >> t.hour >> colon >> t.minute;

    // Проверка корректности формата
    if (colon != ':') {
        is.setstate(std::ios::failbit);
    }

    return is;
}
