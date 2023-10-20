#include "../header/Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed = 0;
}

Fixed::Fixed(const int bit)
{
	std::cout << "int constructor called" << std::endl;
	this->_fixed = bit << this->_bit;
}

Fixed::Fixed(const float bit)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = roundf(bit * ( 1 << this->_bit));
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
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
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &copy)
		this->_fixed = copy.getRawBits();
	return (*this);
}

float Fixed::toFloat(void) const
{
											//shift the bits
	return ((float)(this->getRawBits()) / (1 << this->_bit));
}

int Fixed::toInt(void) const
{
	return(this->_fixed >> this->_bit);
}
//operator overload
std::ostream & operator<<(std::ostream & out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}
