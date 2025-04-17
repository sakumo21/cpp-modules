#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(const std::string& _name, int _signers, int _executers):name(_name), Signers(_signers), Executers(_executers)
{
	std::cout << "form constructor called!!" << std::endl;
	isSigned = false;
	if (_signers > 150 || _executers > 150)
		throw (Form::GradeTooLowException());
	else if (_signers <= 0 || _executers <= 0)
		throw (Form::GradeTooHighException());
}

Form::Form(): name("Default"), isSigned(false), Signers(150), Executers(150)
{
	std::cout << "Form default constractor has been called!" << std::endl;
}

Form::Form(const Form& other)
{
	std::cout << "Form copy constructor has been called!" << std::endl;
	*this = other;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->isSigned = other.isSigned;
	this->Signers = other.Signers;
	this->Executers = other.Executers;
	return *this;
}

Form::~Form()
{
	std::cout << "form destructor called!!" << std::endl;
}

const std::string& Form::getName() const
{
	return (name);
}

bool Form::getSigned() const
{
	return(isSigned);
}

int Form::getSigner() const
{
	return(Signers);
}

int Form::getExecuter() const
{
	return (Executers);
}
void Form::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() > Signers)
		throw (Form::GradeTooLowException());
	else if (signer.getGrade() <= Signers)
	{
		isSigned = true;
		std::cout << signer.getName() << " signed " << this->name << " successfully!!" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	return (os << obj.getName() << " is a form thats need a Bureaucrat with a grade of " << obj.getSigner() << " or above to get signed and a grade of " << obj.getExecuter() << " or above to get executed");
}