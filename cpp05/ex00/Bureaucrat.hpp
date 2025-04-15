#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int grade;
	public:

		Bureaucrat(const std::string &name, int n_grade);
		~Bureaucrat();
		void		announcement();
		void		incGrade();
		void		decGrade();
		const std::string& getName() const;
		int 		getGrade() const;
		
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