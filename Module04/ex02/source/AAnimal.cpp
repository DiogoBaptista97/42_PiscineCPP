#include "../header/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal Constructer" << std::endl;

}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
}
AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal Deconstructer" << std::endl;

}

void AAnimal::makeSound() const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string AAnimal::getType() const
{
	return(this->type);
}

AAnimal& AAnimal::operator=(const AAnimal &copy)
{
	this->type = copy.type;
	return (*this);
}