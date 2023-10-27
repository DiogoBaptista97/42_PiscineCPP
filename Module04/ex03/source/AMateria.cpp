#include "../header/AMateria.hpp"


AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	if(this != &copy)
		*this = copy;
}

AMateria::AMateria(std::string const & type) : type(type)
{
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
	(void)target;
	//nothing
}
