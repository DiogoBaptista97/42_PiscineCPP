#include "../header/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Default Cat Deconstructor" << std::endl;
	delete this->brain;
}