#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):AForm("Shrubbery Creation", 145, 137), target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm(): target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm(other), target(other.target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->target = other.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destractor has been called!" << std::endl;
}



void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (this->getSigned() == true && executor.getGrade() < this->getSigner() && executor.getGrade() < this->getExecuter())
	{
		std::string filename = target + "_shrubbery";
		std::ofstream outputFile(filename.c_str());
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
	else
	{
		throw (AForm::GradeTooLowException());
	}
}