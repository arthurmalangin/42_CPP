#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    Animal *tab[100];

    for (int i = 0; i <= 100; i++) {
        if (i < 50)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }

    for (int i = 0; i < 100; i++) {
        delete tab[i];
    } 
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " ;" << std::endl;
    // std::cout << i->getType() << " ;" << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    // const WrongAnimal *wrongMan = new WrongAnimal();
    // const WrongAnimal *wrongCat = new WrongCat();

    // std::cout << wrongMan->getType() << " ;" << std::endl;
    // std::cout << wrongCat->getType() << " ;" << std::endl;

    // wrongMan->makeSound();
    // wrongCat->makeSound();

    // delete wrongCat;
    // delete wrongMan;
    // delete meta;
    // delete j;
    // delete i;
    // return (0);
}