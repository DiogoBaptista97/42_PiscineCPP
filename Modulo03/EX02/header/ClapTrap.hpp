#ifndef CLAPTRAP_HPP
#include <iostream>
#include <string>
#define CLAPTRAP_HPP

class ClapTrap
{
	protected:
		std::string name;
		int			hit_points;
		int			energy;
		int			attack_dmg;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name(void);
		std::string get_dmg(void);
};
#endif // CLAPTRAP_HPP
