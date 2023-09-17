#include "Phonebook.hpp"

int Phonebook::add_contact(void)
{
	int contact_count = 0;
	std::string first_name;
	std::cout << "Please enter the first name: " << std::endl;
	std::cin >> first_name;
	if (first_name.length() == 0)
	{
		std::cout << "Invalid first name" << std::endl;
		return(1);
	}
	std::string last_name;
	std::cout << "Please enter the last name: " << std::endl;
	std::cin >> last_name;
	if (last_name.length() == 0)
	{
		std::cout << "Invalid last name" << std::endl;
		return(1);
	}
	std::string nickname;
	std::cout << "Please enter the nickname: " << std::endl;
	std::cin >> nickname;
	if (nickname.length() == 0)
	{
		std::cout << "Invalid nickname" << std::endl;
		return(1);
	}
	int phone_number;
	std::cout << "Please enter the phone number: " << std::endl;
	std::cin >> phone_number;
	if (phone_number <= 0)
	{
		std::cout << "Invalid phone number" << std::endl;
		return(1);
	}
	std::string darkest_secret;
	std::cout << "Tell us the dark secret" << std::endl;
	std::cin >> darkest_secret;
	if (darkest_secret.length() == 0)
	{
		std::cout << "Invalid darkest secret" << std::endl;
		return(1);
	}
	this->id++;
	contact_count = this->id;
	this->contacts[id] = Contact(contact_count, first_name, last_name, nickname, phone_number, darkest_secret);
//	this->contacts[id] = display_contact();
	return (0);
}

Contact::Contact(int id, std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret)
{
	set_id(id);
	set_first_name(first_name);
	set_last_name(last_name);
	set_nickname(nickname);
	set_phone_number(phone_number);
	set_darkest_secret(darkest_secret);
}

/* Contact::displaycontact(void){
	std::cout << "Contact info" << std::endl;
	std::cout << "ID: " << get_id() << std::endl;
	std::cout << "First name: " << get_first_name() << std::endl;
	std::cout << "Last name: " << get_last_name() << std::endl;
	std::cout << "Nickname: " << get_nickname() << std::endl;
	std::cout << "Phone number: " << get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << get_darkest_secret() << std::endl;
} */