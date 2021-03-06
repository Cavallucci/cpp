#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(Ice const & src);

		Ice		&operator=(Ice const &rhs);
		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
	private:
};
#endif
