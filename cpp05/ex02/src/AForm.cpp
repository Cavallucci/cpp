#include "AForm.hpp"

AForm::AForm(std::string const name, unsigned int sgrade, unsigned int egrade) :
	_name(name), _sign(false), _gradeSign(sgrade), _gradeExec(egrade)
{
	if (_gradeSign < 1 || _gradeSign < 1) throw AForm::GradeTooHighException();                                     
    else if (_gradeExec > 150 || _gradeExec > 150) throw AForm::GradeTooLowException();
	std::cout << "Constructor Form" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Desctructor Form" << std::endl;
}

AForm::AForm(AForm const & src) :
_name(src._name), _sign(src._sign), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	std::cout << "Copy Form" << std::endl;
	*this = src;
}

AForm &    AForm::operator=(AForm const & rhs)
{
	_sign = rhs._sign;
	return (*this);
}

std::string const	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSign() const
{
	return (this->_sign);
}

unsigned int	AForm::getGradeSign() const
{
	return (this->_gradeSign);
}

unsigned int	AForm::getGradeExec() const
{
	return (this->_gradeExec);
}

std::ostream	&operator<<(std::ostream &cout, AForm const &i)
{
	cout << BLUE << i.getName() << NOC << ", is sign " << RED << i.getSign();
	cout << NOC << ", grade sign is " << RED << i.getGradeSign() << NOC;
	cout << " and grade execution is " << RED << i.getGradeExec() << NOC << std::endl;
	return (cout);
}

void	AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	this->_sign = true;
}

void	AForm::beExecuted(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException();
}

const char  *AForm::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char  *AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}

void	AForm::checkExec(Bureaucrat const &executor) const
{
	if (this->_sign == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException();
}
