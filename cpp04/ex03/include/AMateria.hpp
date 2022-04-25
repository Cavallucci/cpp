#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria
{
	public:
		AMateria(void);
		~AMateria(void);
		AMateria(AMateria const & src);

		AMateria &       operator=(AMateria const & rhs);
		
		virtual AMateria	*clone() const = 0;
		virtual void use(ICharacter &target);
		std::string const	&getType() const = 0;

	protected:
		std::string	_type;
};
#endif
