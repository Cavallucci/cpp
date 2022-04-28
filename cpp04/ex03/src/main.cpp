#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter	*me = new Character("me");
	
	AMateria	*tmp;
	
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;

	ICharacter	*bob = new Character("bob");

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
