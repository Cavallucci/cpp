#include "Form.hpp"

Form::Form(std::string const name, unsigned int sgrade, unsigned int egrade) :
	_name(name), _sign(false), _gradeSign(sgrade), _gradeExec(egrade)
{
	if (_gradeSign < 1 || _gradeSign < 1)
		throw Form::GradeTooHighException();
	else if (_gradeExec > 150 || _gradeExec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Constructor Form" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Desctructor Form" << std::endl;
}

Form::Form(Form const & src) :
_name(src._name), _sign(src._sign), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	std::cout << "Copy Form" << std::endl;
	*this = src;
}

Form &    Form::operator=(Form const & rhs)
{
	this->_sign = rhs._sign;
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
	this->_sign = true;
}

const char  *Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char  *Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}
