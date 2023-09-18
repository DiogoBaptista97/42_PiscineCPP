/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraga-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:08:05 by dbraga-b          #+#    #+#             */
/*   Updated: 2023/09/14 16:08:06 by dbraga-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	Invalid_msg(std::string str)
{
	std::cout << "Invalid Input ";
	std::cout << str << std::endl;
}

int valid(std::string str)
{
	if(str == "ADD" || str == "SEARCH" || str == "EXIT")
		return (0);
	else
	{
		std::cin.clear();
		std::cout << "Invalid command" << std::endl;
		return (1);
	}
}

void	start(void)
{
	std::string str;
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << std::endl;
	std::cout << "\t\t\t\t" << std::endl;
	std::cout << "\t----------------------------------\t" << std::endl;
	std::cout << "\t\tPhonebook of DBRAGA-B\t\t" << std::endl;
	std::cout << "\t----------------------------------\t" << std::endl;
	std::cout << "\t\t\t\t" << std::endl;
	std::cout << "\t\tPick an option bellow\t\t" << std::endl;
	std::cout << "1. ADD" << std::endl;
	std::cout << "2. SEARCH" << std::endl;
	std::cout << "3. EXIT" << std::endl;
}

int main(void)
{
	PhoneBook PhoneBook;
	std::string str;
	while (1)
	{
		start();
		getline(std::cin, str);
		if (valid(str) == 0)
		{
			if (str == "ADD")
			{
				PhoneBook.add();
			}
			else if (str == "SEARCH")
			{
				PhoneBook.search();
			}
			else if (str == "EXIT")
			{
				std::cout << "Closing PhoneBook\nBye!" << std::endl;
				break;
			}
		}
	}
	return (0);
}
