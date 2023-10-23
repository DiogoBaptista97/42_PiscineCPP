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
	std::cout << "Deep Copy constructor" << std::endl;
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

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Target is: " << target.getName() << std::endl;
	//nothing
}

/* AMateria* AMateria::clone() const = 0
{
	return (*this->)
} */