#include "../header/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    std::cout << "ScavTrap Constructer called" << std::endl;
    this->name = name;
    this->ScavTrap::name = name + "_clap_name";
    FragTrap::hit_points;
    ScavTrap::energy;
    FragTrap::attack_dmg;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "ScavTrap Deconstructer called" << std::endl;

}
