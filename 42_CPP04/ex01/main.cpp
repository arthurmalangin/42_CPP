#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

    Animal *tab[50];

    for (int i = 0; i < 50; i++) {
        if (i < 25)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
        std::cout << "tab[" << i << "] " << (i < 25 ? "Dog :" : "Cat : ") << std::ends;
        tab[i]->makeSound();
    }


    for (int i = 0; i < 50; i++) {
        delete tab[i];
    }
}