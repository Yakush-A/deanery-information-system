#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"

class Employee : public Person {
protected:
    std::string position;
    
public:
    Employee(std::string last="", std::string first="",
             std::string middle="", std::string pos="") :
        Person(last, first, middle), position(pos)
    {}

    // Геттеры
    std::string getPosition() const;

    // Сеттеры
    void setPosition(const std::string& pos);
};

#endif
