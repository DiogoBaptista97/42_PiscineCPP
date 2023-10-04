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