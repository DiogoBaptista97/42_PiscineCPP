#include "../header/MateriaSource.hpp"
#include "../header/AMateria.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->slot[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		delete this->slot[i];
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	if(this != &src)
	{
		*this = src;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src)
{
	if(this != &src)
	{
		for(int i = 0; i < 4; i++)
		{
			if (src.slot[i])
				this->slot[i] = src.slot[i]->clone();
			else
				this->slot[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *src)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->slot[i] == NULL)
		{
			std::cout << "Learned " << src->getType() << "at p" << i << std::endl;
			this->slot[i] = src->clone();
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->slot[i] && this->slot[i]->getType() == type)
			return this->slot[i]->clone();
	}
	return NULL;
}