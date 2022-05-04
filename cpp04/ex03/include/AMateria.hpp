#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		virtual ~AMateria(void);
		AMateria(AMateria const &src);
		AMateria(std::string const &type);

		AMateria			&operator=(AMateria const & rhs);

		virtual AMateria	*clone() const = 0;
		virtual void 		use(ICharacter &target);
		std::string const	&getType() const;

	protected:
		std::string	_type;
};
#endif
