#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string const name, unsigned int sgrade, unsigned int egrade);
		virtual ~AForm(void);
		AForm(AForm const & src);

		AForm &       operator=(AForm const & rhs);
		std::string const		getName() const;
		bool					getSign() const;
		unsigned int			getGradeSign() const;
		unsigned int			getGradeExec() const;
		void					beSigned(Bureaucrat const &bureaucrat);
		virtual void			execute(Bureaucrat const &executor) const = 0;
		void					checkExec(Bureaucrat const &executor) const;

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
		class FormNotSignedException : public std::exception
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
std::ostream        &operator<<(std::ostream &cout, AForm const &i);
#endif
