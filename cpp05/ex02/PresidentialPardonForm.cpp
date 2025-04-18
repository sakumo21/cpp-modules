#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string& _target): target(_target) {}

PresidentialPardonForm::PresidentialPardonForm(): target("Default") {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm copy constructor has been called!" << std::endl;
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->grade = other.grade;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destractor has been called!" << std::endl;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor)
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