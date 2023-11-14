#include "../header/Bureaucrat.hpp"

#include <iostream>
#include <string>

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
		grade = copy.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return(this->name);
}

void Bureaucrat::setGrade(int i)
{
	this->grade = i;
}


int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::incrementGrade()
{
	int g;
	g = getGrade();
	g--;
	if (g >=1)
		setGrade(g);
	else
	{
		throw Bureaucrat::GradeTooHighException();
	}

}

void Bureaucrat::decrementGrade()
{
	int g;
	g = getGrade();
	g++;
	if (g <=150)
		setGrade(g);
	else
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

void Bureaucrat::signForm(AForm &form) 
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " error in execution of " << form.getName() << " error: " << e.what() << std::endl;
	}
}


//------operator overload of std::cout
std::ostream & operator<<(std::ostream & out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return out;
}
