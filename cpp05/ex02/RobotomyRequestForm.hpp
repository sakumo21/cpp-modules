#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string& _target);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		RobotomyRequestForm();
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor);
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif