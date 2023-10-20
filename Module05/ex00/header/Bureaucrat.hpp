#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name);
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &copy);
		std::string getName() const;
		int getGrade() const;
		void setName(std::string name);
		void setGrade(int i);
		void incrementGrade();
		void decrementGrade();
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