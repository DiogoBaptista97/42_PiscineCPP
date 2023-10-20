#include "./header/ClapTrap.hpp"
#include <iostream>

int main()
{

    ClapTrap clap("Diogo");

    clap.attack("Miguel");
    clap.takeDamage(1);
    clap.beRepaired(2);
//    clap.takeDamage(1);
}