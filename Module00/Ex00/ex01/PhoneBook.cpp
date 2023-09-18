/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraga-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:10:43 by dbraga-b          #+#    #+#             */
/*   Updated: 2023/09/14 16:08:22 by dbraga-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>
void	Invalid_msg(std::string str);

/* int	isdigit(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return 0;
} */

int	ft_isalpha(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!isalpha(str[i]))
			return (-1);
		i++;
	}
	return (0);
}

void    PhoneBook::add(void){
	
	this->numb++;
	std::string first_name, last_name, nickname, dark_secret, number;
	std::cout << "--------------------------" << std::endl;
	std::cout << "\t\t Enter the Follow Informations" << std::endl;
	std::cout << "--------------------------" << std::endl;
	while (1)
	{
		std::cout << "First Name: " << std::endl;
		getline(std::cin, first_name);
		if (first_name.length() == 0 || ft_isalpha(first_name) != 0)
			Invalid_msg("must have a valid name");
		else
			break;
		first_name.clear();
	}
	while (1)
	{
		std::cout << "Last Name: " << std::endl;
		getline(std::cin, last_name);
		if (last_name.length() == 0 || ft_isalpha(last_name) != 0)
			Invalid_msg("must have a valid name");
		else
			break;
		last_name.clear();
	}
	while (1)
	{
		std::cout << "NickName: " << std::endl;
		getline(std::cin, nickname);
		if (nickname.length() == 0)
			Invalid_msg("must have a name");
		else
			break;
		nickname.clear();
	}
	while(1)
	{
		std::cout << "Number: " << std::endl;
		getline(std::cin, number);
		if (number.length() == 9 && number.find_first_not_of("0123456789") == std::string::npos)
			break;
		else
			Invalid_msg("must have a valid number");
		number.clear();
	}
	while (1)
	{
		std::cout << "Dark Secret: " << std::endl;
		getline(std::cin, dark_secret);
		if (dark_secret.length() == 0)
			Invalid_msg("must have a secret");
		else
			break;
		dark_secret.clear();
	}
	
	this->contacts[this->numb % 8] = Contact(first_name, last_name, nickname, number, dark_secret);
}

void	PhoneBook::search(void){
	std::string input;
	int in;
	std::string enter;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "----------------Search Info------------------" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|---Index--|---First--|---Last---|-Nickname-|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	if (this->numb == -1)
	{
		std::cout << "No info to display" << std::endl;
		getline(std::cin, enter);
		//std::cin.ignore(100000, '\n');
		return ;
	}
	if (this->numb > 7)
		this->full = true;
	for(int i = 0; i <= this->numb && i < 8; i++)
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|---------";
		std::cout << i;
		std::cout << "|";
		this->contacts[i].display_search();
		std::cout << "|-------------------------------------------|" << std::endl;
	}

	while(1)
	{
		std::cout << "Select Index" << std::endl;
		getline(std::cin, input);
		std::istringstream iss(input);
		iss >> in;
		if (iss.fail() || in < 0){
			std::cout << "Not a valid number" << std::endl;
			continue ;
		}
		if (this->full == false){
			if (in > (this->numb % 8)){
				std::cout << "Must choose an available index" << std::endl;
				continue ;
			}
		}
		else
			if (in > 7){
				std::cout << "Must choose an available index" << std::endl;
				continue ;
			} 
		this->contacts[in].display_contact();
		std::cout << "Press enter to continue" << std::endl;
		getline(std::cin, enter);
		if (enter != "\n")
			std::cout << "Press Enter" << std::endl;
		else 
			std::cout << "Enter Pressed" << std::endl;
		break ;
	}
}

PhoneBook::PhoneBook(void) : numb(-1), full(false){
}

PhoneBook::~PhoneBook(void){
}
