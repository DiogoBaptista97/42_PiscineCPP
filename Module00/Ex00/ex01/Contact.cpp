/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraga-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:07:56 by dbraga-b          #+#    #+#             */
/*   Updated: 2023/09/14 16:07:58 by dbraga-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact(void){
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string dark_secret){
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->number = number;
	this->dark_secret = dark_secret;
}

void Contact::display_contact(void)
{
	std::cout << "\t\t-----Contact Info-----\t\t" << std::endl;
	std::cout << "First Name: " << get_first_name() << std::endl;
	std::cout << "Last Name: " << get_last_name() << std::endl;
	std::cout << "Nick Name: " << get_nickname() << std::endl;
	std::cout << "Number: " << get_number() << std::endl;
	std::cout << "Dark_Secret: " << get_dark_secret() << std::endl;
}

std::string truncate(std::string str, size_t width)
{
	if (str.length() > width)
	{
		return (str.substr(0, width - 1) + ".");
	}
	return (str);

}

void	Contact::display_search(void){
	int	len;
	std::string name;

	name = get_first_name();
	name = truncate(name, 10);
	len = name.length();
	while (len++ < 10)
		std::cout << "-";
	std::cout << name;
	std::cout << "|";
	
	
	name = get_last_name();
	name = truncate(name, 10);
	len = name.length();
	while (len++ < 10)
		std::cout << "-";
	std::cout << name;
	std::cout << "|";
	

	name = get_nickname();
	name = truncate(name, 10);
	len = name.length();
	while (len++ < 10)
		std::cout << "-";
	std::cout << name;
	std::cout << "|" << std::endl;

}

std::string Contact::get_first_name(void){
	return(this->first_name);
}

std::string Contact::get_last_name(void){
	return(this->last_name);
}

std::string Contact::get_nickname(void){
	return(this->nickname);
}

std::string	Contact::get_number(void){
	return (this->number);
}

std::string Contact::get_dark_secret(void){
	return (this->dark_secret);
}

Contact::~Contact(void){

}
