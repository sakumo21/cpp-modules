#include "Bureaucrat,hpp"
#include "Form.hpp"

Form::Form(const std::string& _name, int signers, int executers):name(_name), canSignIt(signers), canExecuteIt(executers)
{
	std::cout << "form constructor called!!" << std::endl;
	isSigned = false;
	if (signers > 150 || executers > 150)
		throw (Form::GradeTooLowException());
	else if (signers < 0 || executers < 0)
		throw (Form::GradeTooHighException());
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
	return(canSignIt);
}

int Form::getExecuter() const
{
	return (canExecuteIt);
}

void Form::beSigned(Bereaucrat& signer) const
{
	if (signer.grade > canSignIt)
		throw (Form::GradeTooLowException());
	else if (signers <= canSignIt)
	{
		isSigned = true;
		std::cout << signer._name << "signed " << this->name << "successfully!!" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	return (os << obj.name << "is a form thats need a Bureaucrat with a grade of " << obj.getSigner << "to get signed and a grade of " << obj.getExecuter << "to get executed");
}