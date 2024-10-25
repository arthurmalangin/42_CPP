#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &obj);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator=(const WrongAnimal &obj);
        void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};

#endif