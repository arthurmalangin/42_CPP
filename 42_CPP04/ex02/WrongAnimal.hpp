#ifndef WRONGANIMAL_CPP
#define WRONGANIMAL_CPP

#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &obj);
        ~WrongAnimal(void);
        WrongAnimal &operator=(const WrongAnimal &obj);
        void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};

#endif