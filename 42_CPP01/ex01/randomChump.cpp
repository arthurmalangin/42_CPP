#include "Zombie.hpp"

void randomChump( std::string Name ) {
    Zombie zombie(Name);
    zombie.announce();
}