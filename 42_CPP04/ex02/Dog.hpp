#ifndef DOG_CPP
#define DOG_CPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    public:
        Dog(void);
        Dog(const Dog &obj);
        ~Dog(void);
        Dog &operator=(const Dog &obj);
        void makeSound(void) const;
    protected:
        Brain *brain;
};

#endif