#include "../header/Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog Constructor" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Default Dog Deconstructor" << std::endl;
}