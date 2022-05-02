#include "Form.hpp"

Form::Form(std::string const name, unsigned int sgrade, unsigned int egrade) :
	_name(name), _sign(false), _gradeSign(sgrade), _gradeExec(egrade)
{
	std::cout << "Constructor Form" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Desctructor Form" << std::endl;
}

Form::Form(Form const & src)
{
	std::cout << "Copy Form" << std::endl;
	*this = src;
}

Form &    Form::operator=(Form const & rhs)
{
	this->_gradeSign = rhs.getGradeSign();
	this->_gradeExec = rhs.getGradeExec();
	return (*this);
}

std::string const	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSign() const
{
	return (this->_sign);
}

unsigned int	Form::getGradeSign() const
{
	return (this->_gradeSign);
}

unsigned int	Form::getGradeExec() const
{
	return (this->_gradeExec);
}

std::ostream	&operator<<(std::ostream &cout, Form const &i)
{
	cout << BLUE << i.getName() << NOC << ", is sign " << RED << i.getSign();
	cout << NOC << ", grade sign is " << RED << i.getGradeSign() << NOC;
	cout << " and grade execution is " << RED << i.getGradeExec() << NOC << std::endl;
	return (cout);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_gradeSign = true;
}

const char  *Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char  *Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}
