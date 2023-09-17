#include "Zombie.hpp"

int    main(void)
{
	std::string ZombieName;
	int        NumberZombie;
	Zombie  *zombies;

	std::cout << "Enter a name for your zombie: ";
	std::getline(std::cin, ZombieName);
	std::cout << "Enter a number of zombies: ";
	std::cin >> NumberZombie;
	zombies = zombieHorde(NumberZombie, ZombieName);
	for (int i = 0; i < NumberZombie; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;

}