#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);

		WrongAnimal &       operator=(WrongAnimal const & rhs);
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string	_Type;
};
#endif
