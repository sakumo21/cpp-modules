#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target):AForm("Presidential PardonForm", 25, 5), target(_target) {}

PresidentialPardonForm::PresidentialPardonForm(): target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): AForm(other), target(other.target)
{
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	this->target = other.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (this->getSigned() == true && executor.getGrade() < this->getSigner() && executor.getGrade() < this->getExecuter())
	{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
	}
	else
	{
		throw (AForm::GradeTooLowException());
	}
}