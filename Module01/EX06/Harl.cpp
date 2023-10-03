#include "Harl.hpp"

void	Harl::complain(std::string level)
{
    void (Harl::*func[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    size_t n;
    std::string lev[4];
    
    lev[0] = "DEBUG";
    lev[1] = "INFO";
    lev[2] = "WARNING";
    lev[3] = "ERROR"; 
    n = 0;
    while (n < 4)
    {
        if (lev[n] == level)
            (this->*func[n])();
        n++;
    }
}
void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout <<"This is unacceptable! I want to speak to the manager now." << std::endl;
}