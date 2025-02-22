/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:44:59 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/02/22 05:01:35 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <cstdlib>

class PhoneBook
{
private:
	Contact contact[8];
	int index;
	int numberofcontact;
	
public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void SearchInContact();
	void DisplayContacts();
};




#endif