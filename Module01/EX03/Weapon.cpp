#include "Weapon.hpp"
#include <string>
#include <iostream>


void Weapon::setType(std::string _type)
{
    this->_type = _type;
}

std::string Weapon::getType()
{
    return (this->_type);
}

Weapon::Weapon(std::string _type)
{
    this->_type = _type;
}

Weapon::~Weapon()
{
}