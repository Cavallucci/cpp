#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string type);
		~Dog(void);
		Dog(Dog const & src);

		Dog &       operator=(Dog const & rhs);
		virtual void	makeSound(void) const;
	private:
		Brain	*_brain;
};
#endif
