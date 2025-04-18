#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string& _target): target(_target) {}

RobotomyRequestForm::RobotomyRequestForm(): target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm copy constructor has been called!" << std::endl;
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->grade = other.grade;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destractor has been called!" << std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	std::ofstream outputFile(target + "_shrubbery");
	outputFile << "      /\\" << std::endl;
	outputFile << "     /**\\" << std::endl;
	outputFile << "    /****\\   /\\" << std::endl;
	outputFile << "   /******\\ /**\\" << std::endl;
	outputFile << "  /********\\****\\" << std::endl;
	outputFile << " /**********\\****\\" << std::endl;
	outputFile << "/************\\****\\" << std::endl;
	outputFile << "      ||" << std::endl;
	outputFile << "      ||" << std::endl;
	outputFile.close();
}