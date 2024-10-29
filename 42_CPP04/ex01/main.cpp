#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

    // Animal *tab[4];

    // for (int i = 0; i < 4; i++) {
    //     if (i < 2)
    //         tab[i] = new Dog();
    //     else
    //         tab[i] = new Cat();
    //     std::cout << "tab[" << i << "] " << (i < 2 ? "Dog :" : "Cat : ") << std::ends;
    //     //tab[i]->makeSound();
    // }
    Cat test1;
    Cat test2;
    test2 = test1;
    //test2.makeSound();
    test2.makeSound();
    //delete test2;
    // for (int i = 0; i < 4; i++) {
    //     delete tab[i];
    // }
}