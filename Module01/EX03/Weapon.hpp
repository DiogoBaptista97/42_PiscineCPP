#pragma once
#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string _type);
		~Weapon();
		std::string getType();
		void setType(std::string _type);
};
