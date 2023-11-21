#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private :
		std::string target;
		RobotomyRequestForm();
	public :
	~RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);
	void execute(Bureaucrat const & executor) const;

};

#endif // ROBOTOMYREQUESTFORM_HPP