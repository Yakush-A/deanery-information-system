#ifndef EVENTDATETIME_H
#define EVENTDATETIME_H

#include "eventtime.h"
#include "eventdate.h"

class EventDateTime : public EventDate, public EventTime
{
public:
    EventDateTime(int h=0, int m=0, int d=0, int mon=0, int y=0) :
        EventDate(d, mon, y), EventTime(h, m)
    {}
};

#endif // EVENTDATETIME_H
