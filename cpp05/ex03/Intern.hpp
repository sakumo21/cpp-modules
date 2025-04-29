#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Intern
{
    public:
        Intern();
        Intern& operator=(const Intern& other);
        Intern(const Intern& other);
        ~Intern();
        AForm* makeForm(std::string formName, std::string target);
};

#endif