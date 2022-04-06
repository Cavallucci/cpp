#include "Fixed.hpp"

Fixed::Fixed(void) : _raw(0)
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
	this->_raw = i << _integerc;
	return;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(f * (1 << _integerc));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::toInt(void) const
{
	return (int(this->_raw >> _integerc));
}

float	Fixed::toFloat(void) const
{
	return (float(this->_raw) / float(1 << _integerc));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_raw = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_raw > rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->_raw < rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_raw >= rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_raw <= rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->_raw == rhs._raw)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_raw != rhs._raw)
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

















