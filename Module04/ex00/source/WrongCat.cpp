#include "../header/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat Deconstructor" << std::endl;

}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "assignment operator called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	return (*this);
}
