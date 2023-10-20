#include "../header/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Default Dog Deconstructor" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Au AU" << std::endl;
}