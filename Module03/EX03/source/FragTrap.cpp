#include "../header/FragTrap.hpp"

FragTrap::FragTrap()
{}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hit_points = 100;
    this->energy = 100;
    this->attack_dmg = 30;
    std::cout << "Frag Created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Deconstructed" << std::endl;

}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << this->name;
	std::cout << " attackes " << target;
	std::cout << " causing " <<  this->attack_dmg << " point of damage!"<< std::endl;
 }

 void FragTrap::highFiveGuys(void)
 {
    if (this->energy <= 0)
        std::cout << this->name << " his out of energy" << std::endl;
    else
    std::cout << this->name << " high fives everyone" << std::endl;
 }

int FragTrap::get_dmg_Frag()
{
    return(this->attack_dmg);
}

int FragTrap::get_hitpoints_Frag()
{
    return(this->hit_points);
}

int FragTrap::get_energy_Frag()
{
    return(this->energy);
}