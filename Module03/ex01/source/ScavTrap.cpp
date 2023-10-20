#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constructer called" << std::endl;

}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructer called" << std::endl;

	setHp(100);
	setEnergy(50);
	setAttack(20);
/*     this->hit_points = 100;
	this->energy = 50;
	this->attack_dmg = 20; */
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructer called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy operator" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy = copy.energy;
	this->attack_dmg = copy.attack_dmg;
	return(*this);
}