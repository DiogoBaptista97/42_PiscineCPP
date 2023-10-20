#include "../header/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat Constructor" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Default Cat Deconstructor" << std::endl;

}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miau Miau Miau" << std::endl;
}
