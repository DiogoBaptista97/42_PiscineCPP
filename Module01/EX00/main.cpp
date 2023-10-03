#include "Zombie.hpp"

int	main(void)
{
	std::string ZombieName;
	std::string Chump;
	Zombie *zombie;

	while(1)
	{
		std::cout << "Enter a name for your zombie: ";
		std::getline(std::cin, ZombieName);
		if (ZombieName.length() == 0)
			std::cout << "The Zombie must have a name" << std::endl;
		else
			break ;
	}
	zombie = newZombie(ZombieName);
	//used the anouce outside of the funciont scope
	zombie->announce();

	while(1)
	{
		std::cout << "Random Chump" << std::endl;
		std::getline(std::cin, Chump);
		if (Chump.length() == 0)
			std::cout << "The Zombie must have a name" << std::endl;
		else
			break ;
	}
	//used the anouce inside of the funciont scope
	randomChump(Chump);

	delete zombie;
}