#include "../header/Intern.hpp"
#include "../header/PresidentialPardonForm.hpp"
#include "../header/RobotomyRequestForm.hpp"
#include "../header/ShrubberyCreationForm.hpp"
#include <string>

Intern::Intern()
{

}


Intern::~Intern()
{

}

Intern::Intern(const Intern &copy)
{
	if (this != &copy)
		*this = copy;
}

Intern& Intern::operator=(const Intern &copy)
{
	if (this != &copy)
		*this = copy;
	return (*this);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::string formNames[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm* form;
	form = NULL;
			std::cout << "hi 2" << std::endl;

	AForm* formTypes[] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	for(int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			form = formTypes[i];
			std::cout << "int :" << i << std::endl;
			std::cout << "form type" << formNames[i] << std::endl;
			std::cout << form->getName();
			std::cout << "Memory :" << std::endl;
			std::cout << formTypes[i] << std::endl;
			std::cout << form << std::endl;

		}
	}

	for(int i = 0; i < 3; i++)
	{
		delete formTypes[i];
	}
	std::cout << "hi " << std::endl;
	if (form != NULL)
	{
		std::cout << target << std::endl;
		std::cout << "Intern creates ";
		std::cout << form->getName();
	}
	std::cout << "hi 3" << std::endl;
	return form;
}