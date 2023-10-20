#include "../header/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default Contructer Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
	
	setHp(100);
	setEnergy(100);
	setAttack(30);
    std::cout << "FragTrap Contructer Called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Default Deconstructed Called" << std::endl;

}

FragTrap::FragTrap(const FragTrap &copy)
{
	 std::cout << "FragTrap Copy Contructer Called" << std::endl;
	*this = copy;
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

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Copy operator Called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy = copy.energy;
	this->attack_dmg = copy.attack_dmg;
	return(*this);
}
