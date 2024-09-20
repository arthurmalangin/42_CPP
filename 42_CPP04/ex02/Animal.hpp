#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        Animal &operator=(const Animal &obj);
        virtual ~Animal(void);
    protected:
        Animal(void);
        Animal(const Animal &obj);
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
        std::string type;
};

#endif