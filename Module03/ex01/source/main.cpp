#include "./header/ClapTrap.hpp"
#include "./header/ScavTrap.hpp"

#include <iostream>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    ScavTrap clap("Diogo");
    
    clap.attack("Miguel");
    clap.takeDamage(10);
    clap.beRepaired(2);
    clap.guardGate();
}