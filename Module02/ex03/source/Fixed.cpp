#include "../header/Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	this->_fixed = 0;
}

Fixed::Fixed(const int bit)
{
	this->_fixed = bit << this->_bit;
}

Fixed::Fixed(const float bit)
{
	this->_fixed = roundf(bit * ( 1 << this->_bit));
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed& Fixed::min(Fixed &copy1, Fixed &copy2)
{
	if (copy1.toFloat() <= copy2.toFloat())
		return copy1;
	return copy2;
}

const Fixed& Fixed::min(const Fixed &copy1, const Fixed &copy2)
{
	if (copy1.toFloat() <= copy2.toFloat())
		return copy1;
	return copy2;
}

Fixed& Fixed::max(Fixed &copy1, Fixed &copy2)
{
	if (copy1.toFloat() >= copy2.toFloat())
		return copy1;
	return copy2;
}

const Fixed& Fixed::max(const Fixed &copy1, const Fixed &copy2)
{
	if (copy1.toFloat() >= copy2.toFloat())
		return copy1;
	return copy2;
}
int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}
//--------assignation operator
Fixed& Fixed::operator=(const Fixed &copy)
{
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
//------operator overload ofr std::cout
std::ostream & operator<<(std::ostream & out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}
//-------arithmetic operators
Fixed Fixed::operator*(const Fixed &copy)
{
	return(this->toFloat() * copy.toFloat());
}

Fixed Fixed::operator+(const Fixed &copy)
{
	return(this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator/(const Fixed &copy)
{
	return(this->toFloat() / copy.toFloat());
}
Fixed Fixed::operator-(const Fixed &copy)
{
	return(this->toFloat() - copy.toFloat());
}

//-------comparison operators
bool Fixed::operator==(const Fixed &copy)
{
	if (this->toFloat() == copy.toFloat())
		return(true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed &copy)
{
	if (this->toFloat() != copy.toFloat())
		return(true);
	else
		return (false);
}

bool Fixed::operator>(const Fixed &copy)
{
	if (this->toFloat() > copy.toFloat())
		return(true);
	else
		return (false);
}

bool Fixed::operator<(const Fixed &copy)
{
	if (this->toFloat() < copy.toFloat())
		return(true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed &copy)
{
	if (this->toFloat() >= copy.toFloat())
		return(true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed &copy)
{
	if (this->toFloat() <= copy.toFloat())
		return(true);
	else
		return (false);
}

//-------increment
Fixed Fixed::operator++(int)
{
	Fixed duplicate(*this);
	this->_fixed++;
	return(duplicate);
}

Fixed& Fixed::operator++(void)
{
	++this->_fixed;
	return(*this);
}

//-------decrement
Fixed Fixed::operator--(int)
{
	Fixed duplicate(*this);
	this->_fixed--;
	return(duplicate);
}

Fixed& Fixed::operator--(void)
{
	--this->_fixed;
	return(*this);
}