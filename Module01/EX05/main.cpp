#include "Harl.hpp"

int main(void)
{
    Harl guy;

    std::cout << "First Level" << std::endl;
    guy.complain("DEBUG");
    std::cout << "Improve the Level" << std::endl;
    guy.complain("INFO");
    std::cout << "Improve the Level" << std::endl;    
    guy.complain("WARNING");
    std::cout << "Improve the Level" << std::endl;
    guy.complain("ERROR");

    
}