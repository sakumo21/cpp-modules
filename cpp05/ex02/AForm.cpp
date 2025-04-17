#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(const std::string& _name, int _signers, int _executers):name(_name), Signers(_signers), Executers(_executers)
{
	std::cout << "Aform constructor called!!" << std::endl;
	isSigned = false;
	if (_signers > 150 || _executers > 150)
		throw (AForm::GradeTooLowException());
	else if (_signers <= 0 || _executers <= 0)
		throw (AForm::GradeTooHighException());
}

AForm::AForm(): name("Default"), isSigned(false), Signers(150), Executers(150)
{
	std::cout << "AForm default constractor has been called!" << std::endl;
}

AForm::AForm(const AForm& other)
{
	std::cout << "AForm copy constructor has been called!" << std::endl;
	*this = other;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->isSigned = other.isSigned;
	this->Signers = other.Signers;
	this->Executers = other.Executers;
	return *this;
}

AForm::~AForm()
{
	std::cout << "Aform destructor called!!" << std::endl;
}

const std::string& AForm::getName() const
{
	return (name);
}

bool AForm::getSigned() const
{
	return(isSigned);
}

int AForm::getSigner() const
{
	return(Signers);
}

int AForm::getExecuter() const
{
	return (Executers);
}
void AForm::beSigned(Bureaucrat signer)
{
	if (signer.getGrade() > Signers)
		throw (AForm::GradeTooLowException());
	else if (signer.getGrade() <= Signers)
	{
		isSigned = true;
		std::cout << signer.getName() << " signed " << this->name << " successfully!!" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	return (os << obj.getName() << " is a Aform thats need a Bureaucrat with a grade of " << obj.getSigner() << " or above to get signed and a grade of " << obj.getExecuter() << " or above to get executed");
}