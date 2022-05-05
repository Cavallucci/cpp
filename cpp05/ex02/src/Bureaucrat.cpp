#include "Bureaucrat.hpp"

Bureaucrat ::Bureaucrat (std::string const name, unsigned int grade) : _name(name), _grade(grade) 
{
	std::cout << "Constructor Bureaucrat" << std::endl;
	return;
}
 
Bureaucrat ::~Bureaucrat (void)
{
	std::cout << "Destructor Bureaucrat" << std::endl;
}
 
Bureaucrat ::Bureaucrat (Bureaucrat  const & src)
{
	std::cout << "Copy Bureaucrat" << std::endl;
	*this = src;
}
 
Bureaucrat 	&Bureaucrat ::operator=(Bureaucrat  const &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::decrease(void)
{
	this->_grade++;
	if (this->_grade > 150)
	{
		this->_grade = 150;
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::increase(void)
{
	this->_grade--;
	if (this->_grade < 1)
	{
		this->_grade = 1;
		throw Bureaucrat::GradeTooLowException();
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

std::ostream	&operator<<(std::ostream &cout, Bureaucrat const &i)
{
	cout << BLUE <<  i.getName() << NOC << ", bureaucrat grade " << i.getGrade() << std::endl;
	return (cout);
}

void	Bureaucrat::signForm(AForm &f) const
{
	try
	{
	 	f.beSigned(*this);
		std::cout << BLUE << this->_name << NOC << " signed " << RED << f.getName() << NOC << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << BLUE << this->_name << NOC << " couldn't sign " << RED << f.getName() << NOC << " because " << GREEN << e.what() << NOC << std::endl;
	}
}
