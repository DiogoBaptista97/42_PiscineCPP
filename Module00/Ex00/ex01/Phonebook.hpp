#include <iostream>
#include <string>
#ifndef Phonebook_HPP
# define Phonebook_HPP

class Phonebook
{
private:
	Contact contacts[8];
	int id;
public:

	Phonebook();
	~Phonebook();
	int add_contact(void);
	void search_contact(void);
};

Phonebook::Phonebook(void)
{
	this->id = 0;
}

Phonebook::~Phonebook()
{
}

class Contact
{
	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		int id;
		int phone_number;
		std::string darkest_secret;
	public :
		Contact(int id, std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret);
		~Contact();
		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_id(int id);
		void set_phone_number(int phone_number);
		void set_darkest_secret(std::string darkest_secret);
		void displaycontact(void);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_darkest_secret();
		int get_id();
		int get_phone_number();
		std::string get_first_name(){
			return (this->first_name); 
		}
		std::string get_last_name(){
			return (this->last_name); 
		}
		std::string get_nickname(){
			return (this->nickname); 
		}
		std::string get_darkest_secret(){
			return (this->darkest_secret); 
		}
		int get_id(){
			return (this->id); 
		}
		void set_first_name(std::string first_name){
			this->first_name = first_name;
		}
		void set_last_name(std::string last_name){
			this->last_name = last_name;
		}
		void set_nickname(std::string nickname){
			this->nickname = nickname;
		}
		void set_id(int id){
			if (id < 1)
				this->id = 1;
			else if (id > 8)
				this->id = 8;
			else
				this->id = id;
		}
		void set_phone_number(int phone_number){
			this->phone_number = phone_number;
		}
		void set_darkest_secret(std::string darkest_secret){
			this->darkest_secret = darkest_secret;
		}
};

#endif