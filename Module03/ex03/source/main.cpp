#include "./header/ClapTrap.hpp"
#include "./header/FragTrap.hpp"
#include "./header/ScavTrap.hpp"
#include "./header/DiamondTrap.hpp"
#include <iostream>

int main(void)
{

    DiamondTrap carlos("Carlos");
    carlos.whoAmI();
	carlos.attack("joao");
	carlos.beRepaired(2);
 //   carlos.attack("jao");
}