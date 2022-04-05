#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_integerf;
	const static int	_integerc = 8;
public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const i);
	Fixed(float const f);
	~Fixed(void);
	Fixed	&operator=(Fixed const &rhs);
	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	float	toFloat(void) const;
	int 	toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
