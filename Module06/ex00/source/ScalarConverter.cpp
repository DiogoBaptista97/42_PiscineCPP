#include "../header/ScalarConverter.hpp"

#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <limits>

ScalarConverter::ScalarConverter() 
{
}

ScalarConverter::ScalarConverter(std::string input) : convert(input)
{
	/*atof included int stdlib.h: alpha to float or double*/
	double number = static_cast<double>(atof(convert.c_str()));
	to_Char(number);
	if (std::isnan(number) || std::isinf(number))
	{
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << convert << "f" << std::endl;
		std::cout << "Double: " << convert << std::endl;
	}
	else
	{
		to_Int(number);
		to_Float(number);
		to_Double(number);
	}
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &copy)
{
	(void)copy;
	return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) : convert(copy.convert)
{
}

ScalarConverter::~ScalarConverter()
{
}

/*converting the string type in c++, to C type char *, using the c_str*/

void ScalarConverter::to_Float(double &number )
{
/* 	std::fixed included in iomanip : Modifies the default formatting for floating-point output. */
	if (number > std::numeric_limits<float>::max() || number < -std::numeric_limits<float>::max()) // using this numeric_limits, the min of float and double are positive values, issue resolved in c11
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	std::cout << "float: " << std::fixed << std::setprecision(1) << number << "f" << std::endl;
}

void ScalarConverter::to_Int(double &number)
{
	if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min())
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	int i;
	/*downgrade, going from a double to an int*/
	i = static_cast<int>(number);
	std::cout << "int: " << i << std::endl;
}

void ScalarConverter::to_Double(double &number)
{
	if (number > std::numeric_limits<double>::max() || number < -std::numeric_limits<double>::max())
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	std::cout << "double: " << std::fixed << std::setprecision(1) << number << std::endl;
}

void ScalarConverter::to_Char(double &number)
{
	float nbr = static_cast<float>(number);
	char c;
	c = static_cast<char>(number);
	/*isnan from math library, to test if is a not a number*/
	if (number < 0 || number > 127 || std::isnan(number) || std::isinf(nbr))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (number < 32 || number > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: '" << c << "'" << std::endl;
}
