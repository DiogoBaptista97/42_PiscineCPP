#include <string>
#include <iostream>
#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"

int main(void)
{

    try {
        Bureaucrat bureaucrat("Diogo",10);
        Form form("Avaluation", 2);
        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
		std::cout << std::endl;
		std::cout << bureaucrat << std::endl;
    }
	catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
    }
/* 	try 
	{
		Bureaucrat bur("Diogo", 2);
		std::cout << bur << std::endl;
		bur.incrementGrade();
		std::cout << bur << std::endl;
		bur.incrementGrade();
		std::cout << bur << std::endl;
	}
 	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	} */
}