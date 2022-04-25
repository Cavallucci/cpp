#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
   public:
      Brain(void);
      ~Brain(void);
      Brain(Brain const & src);

      Brain &       operator=(Brain const & rhs);

  private:
      std::string	_ideas[100];
};
#endif
