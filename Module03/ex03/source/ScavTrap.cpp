#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()//, hit_points(100), energy(50), attack_dmg(20)
{
	this->hit_points = 100; 
	this->energy = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap default Constructer called" << std::endl;

}


ScavTrap::ScavTrap(std::string name) 
	: ClapTrap(name)//, hit_points(100), energy(50), attack_dmg(20)
{
	this->hit_points = 100; 
	this->energy = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap Constructer called" << std::endl;
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

void ScavTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->energy > 0)
	{
	std::cout << "ScavTrap " << this->name;
	std::cout << " attackes " << target;
	std::cout << " causing " <<  this->attack_dmg << " point of damage!"<< std::endl;
	}
	else if (this->energy <= 0)
		std::cout << "Unable to attack, not enough energy" << std::endl;
	else
		std::cout << "Unable to attack, is died" << std::endl;
}
