#include "Zombie.hpp"

int	main(void)
{
	std::string ZombieName;
	std::string chump;
	Zombie *zombie;

	std::cout << "Enter a name for your zombie: ";
	std::getline(std::cin, ZombieName);
	zombie = newZombie(ZombieName);
	//used the anouce outside of the funciont scope
	zombie->announce();
	std::cout << "Random Chump" << std::endl;
	std::getline(std::cin, chump);
	//used the anouce inside of the funciont scope
	randomChump(chump);

	delete zombie;
}