#include "ScavTrap.hpp"

int main( void ) {
    ClapTrap pablo("Pabito");
    ClapTrap igor("Igor");
    ScavTrap michel("Michel");

    igor.attack("Pablito");
    pablo.takeDamage(0);
    igor.beRepaired(5);
    
    igor.takeDamage(100);
    igor.beRepaired(100);

    michel.attack("a random wall");
    michel.takeDamage(10);
    michel.beRepaired(10);
    michel.guardGate();
}