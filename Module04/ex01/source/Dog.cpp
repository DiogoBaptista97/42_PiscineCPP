#include "../header/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Default Dog Deconstructor" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Au AU" << std::endl;
}