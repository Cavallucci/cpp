#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const name, unsigned int sgrade, unsigned int egrade);
		~Form(void);
		Form(Form const & src);

		Form &       operator=(Form const & rhs);
		std::string const		getName() const;
		bool					getSign() const;
		unsigned int			getGradeSign() const;
		unsigned int			getGradeExec() const;
		void					beSigned(Bureaucrat const &bureaucrat);

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
		bool				_sign;
		unsigned int		_gradeSign;
		unsigned int		_gradeExec;
};
std::ostream        &operator<<(std::ostream &cout, Form const &i);
#endif
