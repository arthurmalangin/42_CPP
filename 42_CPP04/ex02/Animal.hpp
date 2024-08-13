#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>

class Animal {
    public:
        Animal &operator=(const Animal &obj);
        virtual ~Animal(void);
    protected:
        Animal(void);
        Animal(const Animal &obj);
        virtual void makeSound(void) const;
        std::string getType(void) const;
        std::string type;
};

#endif