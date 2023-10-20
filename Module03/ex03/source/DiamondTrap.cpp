#include "../header/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Diamond Default Constructer called" << std::endl;
	this->ClapTrap::name = name + "_clap_name";
	this->hit_points = FragTrap::hit_points;
	this->energy = ScavTrap::energy;
	this->attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "Diamond Copy Constructer called" << std::endl;

	*this = copy;
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "Diamond Constructer called" << std::endl;
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hit_points = FragTrap::hit_points;
	this->energy = ScavTrap::energy;
	this->attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Deconstructer called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiaondTrap Name: " << this->name <<  " and ClapTrap Name: " << ClapTrap::name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs) {
        this->name = rhs.name;
        this->hit_points = rhs.hit_points;
        this->energy = rhs.energy;
        this->attack_dmg = rhs.attack_dmg;
    }
	return(*this);
}
