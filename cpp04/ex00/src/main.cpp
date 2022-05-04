#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *a= new WrongAnimal();
	const WrongAnimal *w = new WrongCat();

	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;

	std::cout << std::endl;

	i->makeSound();//cat
	j->makeSound();//dog
	meta->makeSound();//animal
	w->makeSound();//wrongcat
	a->makeSound();//wronganimal

	
return 0;
}
