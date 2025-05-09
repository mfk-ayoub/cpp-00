/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:41:38 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/02/27 05:26:26 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int is_print(std::string& str)
{
	size_t i;

	i = 0;
	while (i < str.length())
	{
		if (!isprint(str[i]))
			return (1);
		i++;
	}
	return (0);
}

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
	if (is_print(FirstName) ||is_print(LastName) || is_print(PhoneNumber)
		|| is_print(NickName) || is_print(DarkestSecret))
	{
		std::cout << "Error: Contact not saved.\n";
		return ;
	}
}

void Contact::GetContact()
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

std::string Contact::getFirstName() const 
{
    return FirstName;
}

std::string Contact::getLastName() const
{
	return LastName;
}

std::string Contact::getNickName() const
{
	return NickName;
}

std::string Contact::getPoneNumber() const
{
	return PhoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return DarkestSecret;
}