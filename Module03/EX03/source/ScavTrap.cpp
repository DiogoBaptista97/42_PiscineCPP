#include "../header/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructer called" << std::endl;

    this->hit_points = 100;
	this->energy = 50;
	this->attack_dmg = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructer called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}


int ScavTrap::get_dmg_Scav()
{
	std::cout << "print dmg: " << this->attack_dmg << std::endl;
    return(this->attack_dmg);
}

int ScavTrap::get_hitpoints_Scav()
{
    return(this->hit_points);
}

int ScavTrap::get_energy_Scav()
{
    return(this->energy);
}