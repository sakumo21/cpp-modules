#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(const std::string& _name, int _signers, int _executers):name(_name), Signers(_signers), Executers(_executers)
{
	isSigned = false;
	if (_signers > 150 || _executers > 150)
		throw (AForm::GradeTooLowException());
	else if (_signers <= 0 || _executers <= 0)
		throw (AForm::GradeTooHighException());
}

AForm::AForm(): name("Default"), isSigned(false), Signers(150), Executers(150)
{
}

AForm::AForm(const AForm& other)
{
	*this = other;
}

AForm& AForm::operator=(const AForm& other)
{
	this->isSigned = other.isSigned;
	this->Signers = other.Signers;
	this->Executers = other.Executers;
	return *this;
}

AForm::~AForm()
{
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

void AForm::beSigned(const Bureaucrat& signer)
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