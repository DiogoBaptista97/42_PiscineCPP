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
		ScavTrap(const ScavTrap &copy);

    	void guardGate();
		void attack(const std::string &target);
		ScavTrap& operator=(const ScavTrap &copy);

};
#endif // SCAVTRAP_HPP
