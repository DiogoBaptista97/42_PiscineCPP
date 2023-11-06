#include "../header/MateriaSource.hpp"
#include "../header/AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "IMateriaSource Default constructer" << std::endl;

	for(int i = 0; i < 4; i++)
		this->slot[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "IMateriaSource Default Deconstructer" << std::endl;
	for(int i = 0; i < 4; i++)
		if (this->slot[i])
			delete this->slot[i];
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "IMateriaSource copy constructer" << std::endl;

	if(this != &src)
<<<<<<< HEAD
		*this = src;
=======
	{
		*this = src;
	}
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src)
{
	std::cout << "IMateriaSource assignment constructer" << std::endl;
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
<<<<<<< HEAD
		if (this->slot[i] && this->slot[i]->getType() == type)
=======
		if(this->slot[i] && this->slot[i]->getType() == type)
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87
			return this->slot[i]->clone();
	}
	return NULL;
}