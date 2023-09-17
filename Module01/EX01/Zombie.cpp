#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie created" << std::endl;
}

Zombie* newZombie(std::string name)
{
    return (new Zombie(name));
}
void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}

Zombie::~Zombie()
{
    std::cout << "Zombie ";
    std::cout << this->_name, std::cout << " Destroyed" <<std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}
