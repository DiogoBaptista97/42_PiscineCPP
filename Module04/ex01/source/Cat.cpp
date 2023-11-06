#include "../header/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Default Cat Deconstructor" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miau Miau Miau" << std::endl;
}