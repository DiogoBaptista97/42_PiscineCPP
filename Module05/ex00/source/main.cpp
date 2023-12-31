#include <string>
#include <iostream>
#include "../header/Bureaucrat.hpp"

int main(void)
{
	try 
	{
		Bureaucrat bur("Diogo", 2);
		std::cout << bur << std::endl;
		bur.incrementGrade();
		std::cout << bur << std::endl;
/* 		bur.incrementGrade();
		std::cout << bur << std::endl; */
	}
 	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Bureaucrat bur("Diogo", 160);
	}
 	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}