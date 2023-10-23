#include "../header/ICharacter.hpp"
#include "../header/Character.hpp"

#include <iostream>
Character::Character()
{
	this->name = "";
	for(int i = 0; i < 4; i++)
		this->inv[i] = NULL;
}

Character::Character(std::string const name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		this->inv[i] = NULL;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if(this->inv[i])
			delete this->inv[i];
}

Character::Character(const Character &src)
{
	if (this != &src)
		*this = src;
}

Character& Character::operator=(const Character &src)
{
	if (this != &src)
	{
		for(int i = 0; i < 4; i++)
			this->inv[i] = src.inv[i];
		this->name = src.name;
	}
	return (*this);
}
std::string const &Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if(this->inv[i] == NULL)
			this->inv[i] = m;
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->inv[idx])
		{
			delete this->inv[idx];
			this->inv[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	std::cout << idx << std::endl;
	if (idx >= 0 && idx <= 3 && this->inv[idx] != NULL)
		this->inv[idx]->use(target);
}