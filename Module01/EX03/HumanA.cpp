#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack(){
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon){
    this->_name = name;
    this->_weapon = &weapon;
}

HumanA::~HumanA()
{
}