#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class ScalarConverter
{
	private:
		std::string const convert;
		ScalarConverter();
		ScalarConverter &operator =(ScalarConverter const &copy);
	public:
		ScalarConverter(std::string input);
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		void to_Float(double &number);
		void to_Int(double &number);
		void to_Double(double &numbers);
		void to_Char(double &number);
};




#endif // BUREAUCRAT_HPP