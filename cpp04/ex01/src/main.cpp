#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	Animal		*animal[10];

	delete j;//verify leaks
	delete i;
	
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		if (i % 2)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;

	for (int j = 0; j < 4; j++)
		delete animal[j];
return 0;
}