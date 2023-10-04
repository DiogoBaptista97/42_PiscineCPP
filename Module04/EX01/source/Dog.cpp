#include "../header/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Default Dog Deconstructor" << std::endl;
	delete this->brain;
}