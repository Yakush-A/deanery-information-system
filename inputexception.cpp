#include "inputexception.h"
#include <iomanip>

std::ostream& operator << (std::ostream& os, InputException& exc)
{
    os<<'I'<<std::setw(3)<<std::setfill('0')<<exc.index<<' '<<exc.description<<std::endl;
    return os;
}
