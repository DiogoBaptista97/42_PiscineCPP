#pragma once

#include <iostream>
#include <string>
#include <fstream>

class Fixed
{
	private:
		int _fixed;
		static const int _bit = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(const int bit);
		Fixed(const float bit);
		~Fixed(void);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		//operator overloading
		Fixed& operator=(const Fixed &copy);
};

std::ostream & operator<<(std::ostream & out, Fixed const &fixed);
