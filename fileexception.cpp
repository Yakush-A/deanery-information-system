#include "fileexception.h"

#include<iomanip>

std::ostream& operator << (std::ostream& os, FileException& exc)
{
    os<<'F'<<std::setw(3)<<std::setfill('0')<<exc.index<<' '<<exc.description<<std::endl;
    return os;
}
