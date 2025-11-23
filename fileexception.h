#ifndef FILEEXCEPTION_H
#define FILEEXCEPTION_H

#include <iostream>

#include "baseexception.h"

class FileException : public BaseException
{
public:
    FileException(int id, const char* str) :
        BaseException(id, str)
    {}

    FileException(const FileException& src) :
        BaseException(src)
    {}

    friend std::ostream& operator << (std::ostream& os, FileException& exc);

};

#endif // FILEEXCEPTION_H
