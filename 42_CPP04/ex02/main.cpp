#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Animal *errorAnimal = new Animal();
	Animal *chien = new Dog();
	Animal *chat = new Cat();

	chien->makeSound();
	chat->makeSound();

	delete chien;
	delete chat;
}