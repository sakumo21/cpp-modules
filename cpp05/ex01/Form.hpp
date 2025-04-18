#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool	isSigned;
		int		Signers;
		int		Executers;
	public:
		Form(const std::string& _name, int _signers, int _executers);
		Form& operator=(const Form& other);
		Form(const Form& other);
		Form();
		~Form();
		const std::string& getName() const;
		bool getSigned() const;
		int getSigner() const;
		int getExecuter() const;
		void beSigned(const Bureaucrat& signer);
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

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif