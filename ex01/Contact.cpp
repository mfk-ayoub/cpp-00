/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:41:38 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/01/30 06:16:04 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::Setcontact()
{
	std::cout << "enter First Name: ";
	getline(std::cin, FirstName);
	
	std::cout << "enter Last Name: ";
	getline(std::cin, LastName);
	
	std::cout << "enter Phone Number: ";
	getline(std::cin, PhoneNumber);
	
	std::cout << "enter Nick Name: ";
	getline(std::cin, NickName);
	
	std::cout << "enter Darkest Secret: ";
	getline(std::cin, DarkestSecret);
	
	if (FirstName.empty() || DarkestSecret.empty() || LastName.empty()
		|| PhoneNumber.empty() || NickName.empty())
	{
		std::cout << "Error: Contact not saved.\n";
		return ;
	}
}
