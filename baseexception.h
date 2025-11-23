#ifndef BASEEXCEPTION_H
#define BASEEXCEPTION_H

#include<cstring>

#define EXCEPTION_LENGTH_MAX 80

class BaseException
{
protected:
    int index;
    char description[EXCEPTION_LENGTH_MAX + 1]{};

public:
    BaseException(int id, const char* str) :
        index(id)
    {
        if(str) strcpy(description, str);
    }

    BaseException(const BaseException& src) :
        index(src.index)
    {
        if(strlen(src.description))
            strcpy(description, src.description);
    }

};

#endif // BASEEXCEPTION_H
