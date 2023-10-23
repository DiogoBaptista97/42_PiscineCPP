#include "../header/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default Cure Constructer" << std::endl;
}

Cure::~Cure()
{
		std::cout << "Default Cure Deconstructer" << std::endl;
}

Cure::Cure(const Cure  &src)
{
	if (this != &src)
		*this = src;
}

Cure & Cure::operator= (const Cure &src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "*heals " << target.getName() << "'s wounds *" << std::endl;
}