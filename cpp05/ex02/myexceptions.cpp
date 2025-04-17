#include "Bureaucrat.hpp"
#include "Form.hpp"

 const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GRADE TOO HIGH!!");
}

 const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GRADE TOO LOW!!");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("GRADE TOO HIGH!!");
}

 const char* Form::GradeTooLowException::what() const throw()
{
	return ("GRADE TOO LOW!!");
}