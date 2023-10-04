#include "../header/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal Constructer" << std::endl;

}

Animal::~Animal()
{
	std::cout << "Default Animal Deconstructer" << std::endl;

}

void Animal::makeSound() const
{
	if (this->type == "Dog")
		std::cout << "AU AU AU" << std::endl;
	if (this->type == "Cat")
		std::cout << "Miau Miau Miau" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}