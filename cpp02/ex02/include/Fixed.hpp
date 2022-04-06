#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_raw;
	const static int	_integerc = 8;
public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(void);
	
	Fixed	&operator=(Fixed const &rhs);

	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	Static Fixed	&min(Fixed &a, Fixed &b);
	Static Fixed const	&min(Fixed const &a, Fixed const &b);
	Static Fixed	&max(Fixed &a, Fixed &b);
	Static Fixed const	&max(Fixed const &a, Fixed const &b);
	
	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	float	toFloat(void) const;
	int 	toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
