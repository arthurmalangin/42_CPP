#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    public:
        Brain(void);
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
        ~Brain(void);

        std::string ideas[100];
    private:
};

#endif