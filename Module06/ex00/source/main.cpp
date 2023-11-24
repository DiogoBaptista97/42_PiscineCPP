#include <string>
#include <iostream>
#include "../header/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "More than one input" << std::endl;
		return 1;
	}
	ScalarConverter temp(argv[1]);
}