#include "../header/AForm.hpp"

AForm::AForm() : name("default"), gradeToSign(150), gradeToExec(0)
{
	this->isSigned = false;
}

AForm::AForm(const std::string& name, const int requiredGradeToSign) 
	: name(name), isSigned(false), gradeToSign(requiredGradeToSign), gradeToExec(0) 
{
	if (requiredGradeToSign < 1) 
		throw AForm::GradeTooHighException();
	if (requiredGradeToSign > 150) 
		throw AForm::GradeTooLowException();
}

AForm::AForm(const std::string& name, const int requiredGradeToSign, const int requiredGradeToExec) 
	: name(name), isSigned(false), gradeToSign(requiredGradeToSign), gradeToExec(requiredGradeToExec)
{
	if (requiredGradeToSign < 1) 
		throw AForm::GradeTooHighException();
	if (requiredGradeToSign > 150) 
		throw AForm::GradeTooLowException();
	if (requiredGradeToExec < 1)
		throw AForm::GradeTooHighException();
	if (requiredGradeToExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src)
	: name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec) {}

AForm::~AForm()
{
}

AForm& AForm::operator=(const AForm& src) 
{
	if (this != &src)
		this->isSigned = src.isSigned;
	return *this;
}

const std::string &AForm::getName() const 
{
	return name;
}

bool AForm::getSigned() const 
{
	return isSigned;
}

int AForm::getGradeToSign() const 
{
	return gradeToSign;
}

int AForm::getGradeToExec() const 
{
	return gradeToExec;
}

void AForm::beSigned(Bureaucrat& bureaucrat) 
{
	if (bureaucrat.getGrade() <= this->gradeToSign) 
		isSigned = true;
	else 
		throw AForm::GradeTooLowException();
}

std::ostream & operator<<(std::ostream& out, const AForm& Aform)
{
	out << "AForm info:" << std::endl;
 	out << "Name: " << Aform.getName() << std::endl;
	out << "isSigned: " << Aform.getSigned() << std::endl;
	out << "Grade to sign: " << Aform.getGradeToSign() << std::endl;
	out << "Grade to execute: " << Aform.getGradeToExec() << std::endl;
	return out;
}
