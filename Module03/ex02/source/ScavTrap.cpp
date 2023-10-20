#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default Constructer called" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructer called" << std::endl;

	setHp(100);
	setEnergy(50);
	setAttack(20);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructer called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructer called" << std::endl;
	*this = copy;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Scav Copy operator" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy = copy.energy;
	this->attack_dmg = copy.attack_dmg;
	return(*this);
}
