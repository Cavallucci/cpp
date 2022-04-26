#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character
{
	public:
		Character(void);
		~Character(void);
		Character(Character const & src);

		Character		&operator=(Character const &rhs);

	private:
		AMateria	*inventory[4];
		std::string	_name;
};
#endif
