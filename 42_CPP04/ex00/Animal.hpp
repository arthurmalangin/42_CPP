#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>

class Animal {
    public:
        Animal(void);
        Animal(const Animal &obj);
        virtual ~Animal(void);
        Animal &operator=(const Animal &obj);
        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};

#endif