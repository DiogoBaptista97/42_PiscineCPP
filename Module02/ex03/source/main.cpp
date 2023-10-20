#include "../header/Fixed.hpp"
#include <iostream>

int main( void ) 
{

	Fixed a;
	Fixed t;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(1.14f);
	Fixed e(1.14f);
	Fixed d(2);
	std::cout << t << std::endl;
	t = c + d;
	std::cout << t << std::endl;
	t = c * d;
	std::cout << t << std::endl;
	t = c / d;
	std::cout << t << std::endl;
	t = d - c;
	std::cout << t << std::endl;
	t = d;
	std::cout << t << std::endl;
	if (e != c)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
 	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl; 
	std::cout << Fixed::max( a, b ) << std::endl; 
	return 0;
}