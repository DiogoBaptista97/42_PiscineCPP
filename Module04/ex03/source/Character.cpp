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
<<<<<<< HEAD
		for(int i = 0; i < 4; i++)
		{
			delete this->inv[i];
			if (src.inv[i])
				this->inv[i] = src.inv[i]->clone();
			else
				this->inv[i] = NULL;
		}
=======
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87
		this->name = src.name;
		for(int i = 0; i < 4; i++)
		{
			if (src.inv[i])
				this->inv[i] = src.inv[i]->clone();
			else
				this->inv[i] = NULL;
		}
	}
	return (*this);
}
std::string const &Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
<<<<<<< HEAD
		if(this->inv[i] == NULL)
		{
			this->inv[i] = m;
			return ;
		}
		i++;
=======
		if (this->inv[i] == NULL)
		{
			this->inv[i] = m;
			break;
		}
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->inv[idx])
		{
			this->inv[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->inv[idx] != NULL)
		this->inv[idx]->use(target);
}
