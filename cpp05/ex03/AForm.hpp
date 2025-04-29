#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <iostream>
#include <exception>
#include <fstream>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool	isSigned;
		int		Signers;
		int		Executers;
	public:
		AForm(const std::string& _name, int _signers, int _executers);
		AForm(const AForm& other);
		AForm();
		virtual ~AForm();
		AForm& operator=(const AForm& other);
		const std::string& getName() const;
		bool getSigned() const;
		int getSigner() const;
		int getExecuter() const;
		void beSigned(const Bureaucrat& signer);
		virtual void execute(Bureaucrat const & executor) = 0;
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

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif