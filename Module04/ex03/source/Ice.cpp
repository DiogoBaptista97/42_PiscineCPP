#include "../header/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &src) : AMateria(src)
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