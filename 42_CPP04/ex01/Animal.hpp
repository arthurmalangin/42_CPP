#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        Animal(void);
        Animal(std::string type);
        Animal(const Animal &obj);
        virtual ~Animal(void);
        Animal &operator=(const Animal &obj);
        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};

#endif