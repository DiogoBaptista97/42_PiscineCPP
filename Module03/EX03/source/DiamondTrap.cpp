#include "../header/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	int i;
	std::cout << "Diamond Constructer called" << std::endl;
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	i =	get_energy_Scav();
	this->hit_points = get_hitpoints_Frag();
	this->energy = get_energy_Scav();
	this->attack_dmg = get_dmg_Scav();

	std::cout << "I:    " << i << std::endl;
 	std::cout << this->name << std::endl;
	std::cout << this->hit_points << std::endl;
	std::cout << this->energy << std::endl;
	std::cout << this->attack_dmg << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Deconstructer called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiaondTrap Name: " << this->name <<  " and ClapTrap Name: " << ClapTrap::name << std::endl;
	std::cout << "status: " << std::endl;
	std::cout << "HP: " << this->hit_points << std::endl;
	std::cout << "Engergy: " << this->energy << std::endl;
	std::cout << "Atack Damage: " << this->attack_dmg << std::endl;
}