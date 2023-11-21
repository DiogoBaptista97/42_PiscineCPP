#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &copy);
		std::string getName() const;
		int getGrade() const;
		void setGrade(int i);
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);
		//class exceptions and nested classes
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Grade to High\n");
				}

		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Grade to Low\n");
				}

		};


};
std::ostream & operator<<(std::ostream & out, Bureaucrat &bureaucrat);




#endif // BUREAUCRAT_HPP