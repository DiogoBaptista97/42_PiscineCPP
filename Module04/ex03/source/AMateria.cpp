#include "../header/AMateria.hpp"


AMateria::AMateria()
{
	std::cout << "AMateria Default constructer" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Default Deconstructer" << std::endl;
}

/* AMateria::AMateria(const AMateria &copy)
{
	if(this != &copy)
		*this = copy;
} */

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "Deep Copy constructor"
}

AMateria& AMateria::operator= (const AMateria &copy)
{
	std::cout << "AMateria Assigment Operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}