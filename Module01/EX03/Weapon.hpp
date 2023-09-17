#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string _type);
		~Weapon();
		std::string *getType();
		void setType(std::string _type);
};

Weapon::Weapon(std::string _type)
{
    this->_type = _type;
}

Weapon::~Weapon()
{
}

#endif