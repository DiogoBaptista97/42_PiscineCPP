#include "Zombie.hpp"

Zombie *zombieHorde(int NumberZombie, std::string name)
{
    Zombie *zombies = new Zombie[NumberZombie];
    for (int i = 0; i < NumberZombie; i++)
    {
        zombies[i].setName(name);
    }
    return (zombies);
}