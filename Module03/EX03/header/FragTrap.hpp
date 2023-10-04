#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../header/ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		void attack(const std::string &target);
		void highFiveGuys(void);
		int get_dmg_Frag();
		int get_hitpoints_Frag();
	  	int get_energy_Frag();
};

#endif //FRAGTRAP_HPP