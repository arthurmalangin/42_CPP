#ifndef CAT_CPP
#define CAT_CPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat(const Cat &obj);
        ~Cat(void);
        Cat &operator=(const Cat &obj);
        void makeSound(void) const;
    protected:
        Brain *brain;
};

#endif