#include "../header/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal Constructer" << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal Deconstructer" << std::endl;

}

void WrongAnimal::makeSound() const
{

	if (this->type == "WrongCat")
		std::cout << "Wrong Miau Miau Miau" << std::endl;
	else
		std::cout << "animals dont make soundss" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	return (*this);
}
