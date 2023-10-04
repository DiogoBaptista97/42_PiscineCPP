#include "./header/ClapTrap.hpp"
#include "./header/FragTrap.hpp"
#include "./header/ScavTrap.hpp"
#include "./header/DiamondTrap.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    DiamondTrap carlos("Carlos");
    carlos.whoAmI();
    carlos.attack("jao");
}