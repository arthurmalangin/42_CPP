#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *k = new WrongAnimal();
	const WrongAnimal *l = new WrongCat();
	WrongCat c = WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	l->makeSound();
	c.makeSound();

	delete meta;
	delete j;
	delete i;
	delete k;
	delete l;
	return 0;
}