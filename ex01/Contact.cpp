/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:41:38 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/01/31 05:06:19 by ayel-mou         ###   ########.fr       */
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

void Contact::DisplayContact()
{
	std::cout << "First Name is: " ;
	std::cout << FirstName << std::endl;
	std::cout << "Last Name is: " ;
	std::cout << LastName << std::endl;
	std::cout << "Phone Number is: " ;
	std::cout << PhoneNumber << std::endl;
	std::cout << "Nick Name is: " ;
	std::cout << NickName << std::endl;
	std::cout << "Darkest Secret: is: " ;
	std::cout << DarkestSecret << std::endl;
}