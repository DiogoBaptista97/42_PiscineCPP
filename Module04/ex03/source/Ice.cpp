#include "../header/Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
	std::cout << "Default Ice Constructer" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Default Ice Deconstructer" << std::endl;
}

Ice::Ice(const Ice &src)
{
	if (this != &src)
		*this = src;
}

Ice& Ice::operator =(const Ice &src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots and ice bolt at " << target.getName() << std::endl;
}