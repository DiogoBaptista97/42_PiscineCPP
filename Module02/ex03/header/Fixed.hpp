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
		Fixed operator+(const Fixed &copy);
		Fixed operator*(const Fixed &copy);
		Fixed operator-(const Fixed &copy);
		Fixed operator/(const Fixed &copy);

		bool operator==(const Fixed &copy);
		bool operator!=(const Fixed &copy);
		bool operator>(const Fixed &copy);
		bool operator<(const Fixed &copy);	
		bool operator>=(const Fixed &copy);	
		bool operator<=(const Fixed &copy);

		static const Fixed& min(const Fixed &copy1, const Fixed &copy2);
		static Fixed& min(Fixed &copy1, Fixed &copy2);
		static const Fixed& max(const Fixed &copy1, const Fixed &copy2);
		static Fixed& max(Fixed &copy1, Fixed &copy2);

		Fixed operator++(int);
		Fixed& operator++(void);
		Fixed operator--(int);
		Fixed& operator--(void);
};

std::ostream & operator<<(std::ostream & out, Fixed const &fixed);
