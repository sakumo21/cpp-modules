#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string _name;
		int grade;
	public:

		Bureaucrat(const std::string &name, int n_grade);
		Bureaucrat& operator=(const Bureaucrat& other);
		Bureaucrat(const std::string &name, int n_grade);
		Bureaucrat();
		~Bureaucrat();
		void		announcement();
		void		incGrade();
		void		decGrade();
		const std::string& getName() const;
		int 		getGrade() const;
		void		signForm(Form& form) const;
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif