#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & src);
		Cat &       operator=(Cat const & rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
