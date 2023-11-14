#include "../header/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
	{
		this->target = copy.target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if  (this->getSigned() == false )
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "    *" << std::endl;
		std::cout << "   ***" << std::endl;
		std::cout << "  *****" << std::endl;
		std::cout << " *******" << std::endl;
		std::cout << "*********" << std::endl;
		std::cout << "   |||" << std::endl;
	}
}