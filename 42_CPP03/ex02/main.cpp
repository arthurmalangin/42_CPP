#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
    ClapTrap pablo("Pabito");
    ClapTrap igor("Igor");
    ScavTrap michel("Michel");
    FragTrap gilou("Gilou");

    igor.attack("Pablito");
    pablo.takeDamage(0);
    igor.beRepaired(5);
    
    igor.takeDamage(100);
    igor.beRepaired(100);

    michel.attack("a random wall");
    michel.takeDamage(10);
    michel.beRepaired(10);
    michel.guardGate();

    gilou.attack("a random door");
    gilou.takeDamage(10);
    gilou.beRepaired(10);
    gilou.highFivesGuys();
}