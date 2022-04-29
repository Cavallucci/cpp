#ifndef BUREAUCRAT _HPP
# define BUREAUCRAT _HPP

class Bureaucrat 
{
	public:
		Bureaucrat (std::string const name, unsigned int grade);
		~Bureaucrat (void);
		Bureaucrat (Bureaucrat  const & src);

		Bureaucrat 		&operator=(Bureaucrat  const &rhs);

	private:
		std::string const	_name;
		unsigned int		_grade;

	Class TooHighException : public Bureaucrat
	{

	}
	Class GradeTooLowException : public Bureaucrat
	{

	}
};
#endif
