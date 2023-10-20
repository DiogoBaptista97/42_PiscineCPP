#include "../header/Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &copy)
		this->_fixed = copy.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}