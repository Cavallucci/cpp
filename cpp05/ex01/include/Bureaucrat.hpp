#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

# define NOC	"\033[0m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"

class Form;

class Bureaucrat 
{
	public:
		Bureaucrat (std::string const name, unsigned int grade);
		~Bureaucrat (void);
		Bureaucrat (Bureaucrat  const & src);

		Bureaucrat 			&operator=(Bureaucrat  const &rhs);
		std::string const	getName() const;
		unsigned int		getGrade() const;
		void				increase(void);
		void				decrease(void);
		void				signForm(Form &f) const;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char	*what() const throw();
		};

	private:
		std::string const	_name;
		unsigned int		_grade;

};
std::ostream		&operator<<(std::ostream &cout, Bureaucrat const &i);
#endif
