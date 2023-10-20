#include "../header/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Clap Constructer called" << std::endl;
	this->name = name;
	setHp(10);
	setEnergy(10);
	setAttack(0);
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Deconstructer called" << std::endl;
}

std::string	ClapTrap::get_name(void)
{
	return (this->name);
}


void ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->energy > 0)
	{
	std::cout << "ClapTraps " << this->name;
	std::cout << " attackes " << target;
	std::cout << " causing " <<  this->attack_dmg << " point of damage!"<< std::endl;
	}
	else if (this->energy <= 0)
		std::cout << "Unable to attack, not enough energy" << std::endl;
	else
		std::cout << "Unable to attack, is died" << std::endl;

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
	std::cout << this->name << "used Repair, " << std::endl;
	this->energy--;
	if(this->energy > 0 && this->hit_points > 0)
	{
		this->hit_points += amount;
		std::cout << this->name << " is at " << this->hit_points << " of HP" << std::endl;
	}
	else if (this->energy <= 0)
		std::cout << "Unable to repair, not enough energy" << std::endl;
	else
		std::cout << "Unable to repair, died;" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy operator" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy = copy.energy;
	this->attack_dmg = copy.attack_dmg;
	return(*this);
}

void ClapTrap::setAttack(int dmg)
{
	this->attack_dmg = dmg;
}

void ClapTrap::setEnergy(int energy)
{
	this->energy = energy;
}
void ClapTrap::setHp(int hp)
{
	this->hit_points = hp;
}