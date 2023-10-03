#include "Zombie.hpp"

int    main(void)
{
	std::string ZombieName;
	int        NumberZombie;
	Zombie  *zombies;

	while (1)
	{
		std::cout << "Enter a name for your zombie: ";
		std::getline(std::cin, ZombieName);
		if (ZombieName.length() == 0)
			std::cout << "The Zombie must have a name" << std::endl;
		else
			break ;
	}
	std::cout << "Enter a number of zombies: ";
	std::cin >> NumberZombie;
	if (NumberZombie <= 0)
	{
		std::cout << "No Zombies where created, tip: input a valid number" << std::endl;
		return (1);
	}
	zombies = zombieHorde(NumberZombie, ZombieName);
	for (int i = 0; i < NumberZombie; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;

}