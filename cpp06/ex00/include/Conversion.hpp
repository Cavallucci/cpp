#ifndef CONVERSION_HPP
# define CONVERSION_HPP

class Conversion
{
	public:
		Conversion(void);
		~Conversion(void);
		Conversion(Conversion const & src);

		Conversion		&operator=(Conversion const &rhs);

	private:
};
#endif
