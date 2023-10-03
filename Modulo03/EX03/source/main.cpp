#include "./header/ClapTrap.hpp"
#include "./header/FragTrap.hpp"
#include "./header/ScavTrap.hpp"
#include "./header/DiamondTrap.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    FragTrap clap("Diogo");
    ScavTrap scav("Tiago");
    DiamondTrap carlos("Carlos");
    clap.attack("Miguel");
    clap.takeDamage(2);
    clap.beRepaired(2);
    clap.highFiveGuys();
    scav.guardGate();
    carlos.attack("jao");
}