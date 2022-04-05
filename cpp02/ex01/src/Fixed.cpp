#include "Fixed.hpp"

Fixed::Fixed(void) : _integerf(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_integerf = i << _integerc;
	return;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_integerc = roundf(f * (1 << _integerf));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::toInt(void) const
{
	return (int(this->_raw_bits >> _integerf));
}

float	Fixed::toFloat(void) const
{
	return (float(this->_raw_bits) / float(1 << _binary_point));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integerf);
}

void	Fixed::setRawBits(int const raw)
{
	this->_integerf = raw;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_integerf = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
