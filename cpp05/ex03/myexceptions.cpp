#include "Bureaucrat.hpp"
#include "AForm.hpp"

 const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GRADE TOO HIGH!!");
}

 const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GRADE TOO LOW!!");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("GRADE TOO HIGH!!");
}

 const char* AForm::GradeTooLowException::what() const throw()
{
	return ("GRADE TOO LOW!!");
}