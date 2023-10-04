#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Constructer called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy = 10;
	this->attack_dmg = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Deconstructer called" << std::endl;
}

std::string	ClapTrap::get_name(void)
{
	return (this->name);
}


void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTraps " << this->name;

	std::cout << " attackes " << target;
	std::cout << " causing " <<  this->attack_dmg << " point of damage!"<< std::endl;
 }

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " tacking damage, ";
	this->hit_points -= amount;
	if(this->hit_points > 0)
		std::cout << "left with " << this->hit_points << " of HP" << std::endl;
	if (this->hit_points <= 0)
		std::cout << "Died" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " used Repair," << std::endl;
	this->energy--;
	if(this->energy > 0)
	{
		this->hit_points += amount;
		std::cout << this->name << " is at " << this->hit_points << " of HP" << std::endl;
	}
	else
		std::cout << "Unable to repair, not enough energy";
}