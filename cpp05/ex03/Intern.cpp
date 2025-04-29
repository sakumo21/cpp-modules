#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern()
{

}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string formnames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int i = 0;
    for (i = 0; i < 3 && formName != formnames[i];i++)
    {
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << formnames[i] << " form" << std::endl;
            return new RobotomyRequestForm(target);
        case 1:
            std::cout << "Intern creates " << formnames[i] << " form" << std::endl;
            return new PresidentialPardonForm(target);
        case 2:
            std::cout << "Intern creates " << formnames[i] << " form" << std::endl;
            return new ShrubberyCreationForm(target);
        default:
            std::cout << "Intern cannot create form" << std::endl;
            return NULL;
    }
}