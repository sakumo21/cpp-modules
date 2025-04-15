#include "Bureaucrat.hpp"

 const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR: GRADE TOO HIGH!!");
}

 const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("ERROR: GRADE TOO LOW!!");
}