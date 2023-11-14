#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExec;

		Form();
	public:
		~Form();
		Form(const std::string &name, int gradeToSign);
		Form(const Form &copy);
		Form& operator=(const Form &copy);
		const std::string &getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(Bureaucrat &bureaucrat);
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
std::ostream & operator<<(std::ostream & out, const Form &form);


#endif // FORM_HPP