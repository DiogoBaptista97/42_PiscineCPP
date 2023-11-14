#include "../header/Form.hpp"

Form::Form() : name("default"), gradeToSign(150), gradeToExec(0)
{
	this->isSigned = false;
}

Form::Form(const std::string& name, const int requiredGradeToSign) 
	: name(name), isSigned(false), gradeToSign(requiredGradeToSign), gradeToExec(0) 
{
	if (requiredGradeToSign < 1) 
		throw Form::GradeTooHighException();
	if (requiredGradeToSign > 150) 
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src)
	: name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec) {}

Form::~Form()
{
}

Form& Form::operator=(const Form& src) 
{
	if (this != &src)
		this->isSigned = src.isSigned;
	return *this;
}

const std::string &Form::getName() const 
{
	return name;
}

bool Form::getSigned() const 
{
	return isSigned;
}

int Form::getGradeToSign() const 
{
	return gradeToSign;
}

int Form::getGradeToExec() const 
{
	return gradeToExec;
}

void Form::beSigned(Bureaucrat& bureaucrat) 
{
	if (bureaucrat.getGrade() <= this->gradeToSign) 
		isSigned = true;
	else 
		throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream& out, const Form& form)
{
	out << "Form info:" << std::endl;
 	out << "Name: " << form.getName() << std::endl;
	out << "isSigned: " << form.getSigned() << std::endl;
	out << "Grade to sign: " << form.getGradeToSign() << std::endl;
	out << "Grade to execute: " << form.getGradeToExec() << std::endl;
	return out;
}
