#include <string>
#include <iostream>
#include "../header/Bureaucrat.hpp"
#include "../header/AForm.hpp"
#include "../header/PresidentialPardonForm.hpp"
#include "../header/ShrubberyCreationForm.hpp"
#include "../header/RobotomyRequestForm.hpp"
#include "../header/Intern.hpp"

int main(void)
{
	{
		Intern 	someRandomIntern;

		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		//Bureaucrat bureaucrat("Diogo", 4); // change grade between  26 and higher to get the error
		//bureaucrat.signForm(*rrf);
	}
/* 	try {
		Bureaucrat bureaucrat("Diogo", 4); // change grade between  26 and higher to get the error
 		ShrubberyCreationForm form1("Shrubbery");
		RobotomyRequestForm form2("Robotomy");
		PresidentialPardonForm form3("President");

 		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);
 		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
 		std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	} */
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