#ifndef CLASSROOM_H
#define CLASSROOM_H

#include<string>

class Classroom 
{
private:
    enum class Type{LECTURE, LABORATORY, DEFAULT};

    Type roomType;
    std::string roomNumber;

public:
    Classroom(const std::string& number, Type type) :
        roomType(type), roomNumber(number)
    {}

    virtual std::string getRoomNumber() const;
    virtual Type getRoomType() const;

    virtual void setRoomNumber(const std::string& number);
    virtual void setRoomType(const Type& type);
};


#endif
