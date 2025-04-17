#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int n_grade):_name(name)
{
	std::cout << "Bureaucrat constractor has been called!" << std::endl;
	if (n_grade >= 1 && n_grade <= 150)
		grade = n_grade;
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 0)
		throw (Bureaucrat::GradeTooHighException());
}

Bureaucrat::Bureaucrat(): _name("Default")
{
	std::cout << "Bureaucrat default constractor has been called!" << std::endl;
	grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	std::cout << "Bureaucrat copy constructor has been called!" << std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->grade = other.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destractor has been called!" << std::endl;
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
	if (grade < 0)
		throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decGrade()
{
	grade++;
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void Bureaucrat::announcement()
{
	std::cout << _name << ", bureaucrat grade" << grade << std::endl;
}

void Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	return (os << obj.getName() << ", bureaucrat grade " << obj.getGrade());
}