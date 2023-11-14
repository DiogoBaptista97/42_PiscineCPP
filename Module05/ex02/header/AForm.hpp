#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExec;

		AForm();
	public:
		~AForm();
		AForm(const std::string &name, int gradeToSign);
		AForm(const std::string& name, const int requiredGradeToSign, const int requiredGradeToExec);
		AForm(const AForm &copy);
		AForm& operator=(const AForm &copy);
		const std::string &getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class FormNotSignedException : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return ("Form not signed\n");
				}
		};
};
std::ostream & operator<<(std::ostream & out, const AForm &Aform);


#endif // AFORM_HPP