#include "employee.h"

// Геттеры
std::string Employee::getPosition() const
{
    return position;
}

// Сеттеры
void Employee::setPosition(const std::string& pos)
{
    position = pos;
}
