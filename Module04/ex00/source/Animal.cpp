#include "../header/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal Constructer" << std::endl;

}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Default Animal Deconstructer" << std::endl;

}

void Animal::makeSound() const
{
		std::cout << "animals dont make sound" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}

Animal& Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	return (*this);
}