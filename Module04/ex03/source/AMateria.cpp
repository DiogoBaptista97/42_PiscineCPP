#include "../header/AMateria.hpp"


AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

<<<<<<< HEAD
AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria string constructer" << std::endl;
=======
AMateria::AMateria(const AMateria &copy)
{
	if(this != &copy)
		*this = copy;
}
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87

}

AMateria::AMateria(const AMateria &copy)
{
<<<<<<< HEAD
	std::cout << "AMateria copy constructer" << std::endl;

	if(this != &copy)
		*this = copy;
=======
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87
}


AMateria& AMateria::operator= (const AMateria &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
<<<<<<< HEAD
	std::cout << "Target is: " << target.getName() << std::endl;
}

=======
	(void)target;
	//nothing
}
>>>>>>> e707f627fbacbbcae93591e9cc3c6dfc98d16d87
