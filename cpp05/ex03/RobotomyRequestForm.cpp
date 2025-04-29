#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target):AForm("Robotomy Request", 72, 45), target(_target) {}

RobotomyRequestForm::RobotomyRequestForm(): target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): AForm(other), target(other.target)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	this->target = other.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (this->getSigned() == true && executor.getGrade() < this->getSigner() && executor.getGrade() < this->getExecuter())
	{
		std::cout << "drrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
		srand(time(0));
		int random = rand() % 2;
		if (random == 0)
			std::cout << target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << target << " has not been robotomized successfully!" << std::endl;
	}
	else
	{
		throw (AForm::GradeTooLowException());
	}
}