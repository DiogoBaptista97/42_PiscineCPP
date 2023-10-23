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
		for(int i = 0; i < 4; i++)
			this->slot[i] = src.slot[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src)
{
	if(this != &src)
	{
		for(int i = 0; i < 4; i++)
			this->slot[i] = src.slot[i];	
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *src)
{
	int i;

	i = 0;
	while(this->slot[i] != NULL)
		i++;
	if(i < 4)
		this->slot[i] = src;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while(i < 4)
	{
		std::cout << "he" << i << std::endl;
		if (this->slot[i] && this->slot[i]->getType() == type)
			return this->slot[i]->clone();
		i++;
	}
	return NULL;
}