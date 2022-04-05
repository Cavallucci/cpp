#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int					_integerf;
	const static int	_integerc = 8;
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed	&operator=(Fixed const &rhs);
	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
};

#endif
