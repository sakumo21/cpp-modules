#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string& _target);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor);
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif