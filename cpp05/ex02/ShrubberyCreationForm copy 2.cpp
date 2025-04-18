#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string& _target): target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm(): target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm copy constructor has been called!" << std::endl;
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->grade = other.grade;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destractor has been called!" << std::endl;
}



void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if ()
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
}