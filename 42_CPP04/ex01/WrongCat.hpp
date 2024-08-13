#ifndef WRONGCAT_CPP
#define WRONGCAT_CPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(const WrongCat &obj);
        ~WrongCat(void);
        WrongCat &operator=(const WrongCat &obj);
        void makeSound(void) const;
    protected:
};

#endif