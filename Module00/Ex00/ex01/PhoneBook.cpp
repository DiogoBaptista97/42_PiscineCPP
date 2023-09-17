#include "Phonebook.hpp"




void display_error_msg(void)
{
	std::cout << "Invalid contact" << std::endl;
	std::cout << "Please enter a command: " << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
}

int main()
{
	Phonebook phonebook;
	std::cout << "My Phonebook" << std::endl;
	std::cout << "Please enter a command: " << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	while(1)
	{
		std::string command;
		std::cin >> command;
		if (command == "ADD")
		{
			if (phonebook.add_contact() == 1)
			{
				display_error_msg();
				continue;
			}
		}
		else if (command == "SEARCH")
		{
			
		}
		else if (command == "EXIT")
		{
			
			break;
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
		
	}
}