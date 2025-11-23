#ifndef INPUTEXCEPTION_H
#define INPUTEXCEPTION_H

#include "baseexception.h"

#include <iostream>

class InputException : public BaseException
{
public:
    InputException(int id, const char* str) :
        BaseException(id, str)
    {}

    InputException(const InputException& src) :
        BaseException(src)
    {}

    friend std::ostream& operator << (std::ostream& os, InputException& exc);


};

#endif // INPUTEXCEPTION_H
