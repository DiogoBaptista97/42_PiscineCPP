#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << "Zombie created" << std::endl;
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie ";
    std::cout << this->_name;
    std::cout << " Destroyed" <<std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}