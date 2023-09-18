/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbraga-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:08:28 by dbraga-b          #+#    #+#             */
/*   Updated: 2023/09/14 16:08:29 by dbraga-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
    	int numb;
    	Contact contacts[8];
		bool full;
    public:
    	PhoneBook(void);
    	~PhoneBook(void);
    	void add(void);
    	void search(void);
};

#endif
