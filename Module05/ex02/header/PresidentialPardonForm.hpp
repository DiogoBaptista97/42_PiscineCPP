#ifndef	PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private :
		std::string target;
		PresidentialPardonForm();
	public :
	~PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &copy);
	void execute(Bureaucrat const & executor) const;

};

#endif // PRESIDENTIALPARDONFORM_HPP