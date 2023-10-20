#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../header/ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap& operator=(const FragTrap &copy);

		void attack(const std::string &target);
		void highFiveGuys(void);
};

#endif //FRAGTRAP_HPP