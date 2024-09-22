#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private :
		std::string target;
		ShrubberyCreationForm();
	public :
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
	void execute(Bureaucrat const & executor) const;
	std::string getTargetName() const;
};

#endif // SHRUBBERYCREATIONFORM_HPP