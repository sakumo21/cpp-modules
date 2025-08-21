#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int n_grade):_name(name)
{
	if (n_grade >= 1 && n_grade <= 150)
		grade = n_grade;
	else if (n_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (n_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(): _name("Default")
{
	grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string& Bureaucrat::getName() const
{
	return(_name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incGrade()
{
	grade--;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void		Bureaucrat::decGrade()
{
	grade++;
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void Bureaucrat::announcement()
{
	std::cout << _name << ", bureaucrat grade" << grade << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	return (os << obj.getName() << ", bureaucrat grade " << obj.getGrade());
}