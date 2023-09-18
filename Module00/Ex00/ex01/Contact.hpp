/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraga-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:08:40 by dbraga-b          #+#    #+#             */
/*   Updated: 2023/09/14 16:08:41 by dbraga-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	number;
		std::string dark_secret;
	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string number, std::string dark_secret);
		~Contact(void);
		std::string get_first_name(void);
		std::string get_last_name(void); 
		std::string get_nickname(void);
		std::string	get_number(void);
		std::string	get_dark_secret(void);
		void		display_contact(void);
		void		display_search(void);
};

#endif
