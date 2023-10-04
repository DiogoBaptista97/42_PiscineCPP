#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void guardGate();
    int get_dmg_Scav();
    int get_hitpoints_Scav();
    int get_energy_Scav();
};
#endif // SCAVTRAP_HPP
