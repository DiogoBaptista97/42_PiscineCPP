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

	AForm* formTypes[] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	for(int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			form = formTypes[i];
		}
	}

	for(int i = 0; i < 3; i++)
	{
		if (form != formTypes[i])
			delete formTypes[i];
	}
	if (form != NULL)
	{
		std::cout << target << "Intern creates " << form->getName();
	}

	return form;
}