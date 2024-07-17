#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap pablo("Pabito");
    ClapTrap igor("Igor");

    igor.attack("Pablito");
    pablo.takeDamage(0);
    igor.beRepaired(5);
    
    igor.takeDamage(100);
    igor.beRepaired(100);

}