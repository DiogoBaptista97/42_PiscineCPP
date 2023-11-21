#include "../header/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		this->target = copy.target;
	}
	return (*this);
}


void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if ( executor.getGrade() > this->getGradeToExec() )
		throw AForm::GradeTooLowException();
	else {
		static int  i;
		if ( i % 2 == 0 )
			std::cout << this->target << " has been robotomized" << std::endl;
		else
			std::cout << "Robotomy failed " << std::endl;
		i++;
	}
}
