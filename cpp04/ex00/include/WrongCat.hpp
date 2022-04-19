#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
   public:
           WrongCat(void);
           ~WrongCat(void);
           WrongCat(WrongCat const & src);

          WrongCat &       operator=(WrongCat const & rhs);
		virtual void	makeSound(void) const;
  private:
};
#endif
