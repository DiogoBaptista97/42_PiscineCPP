#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../header/ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();

		void attack(const std::string &target);
		void highFiveGuys(void);
};

#endif //FRAGTRAP_HPP