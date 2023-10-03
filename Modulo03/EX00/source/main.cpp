#include "./header/ClapTrap.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    ClapTrap clap("Diogo");

    clap.attack("Miguel");
    clap.takeDamage(1);
    clap.beRepaired(2);
//    clap.takeDamage(1);
}