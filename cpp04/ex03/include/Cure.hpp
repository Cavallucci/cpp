#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure(Cure const & src);
		
		Cure		&operator=(Cure const &rhs);
		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);		
	private:
};
#endif
