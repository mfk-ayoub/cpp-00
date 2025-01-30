/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:41:38 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/01/30 06:03:34 by ayel-mou         ###   ########.fr       */
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
	getline(std::cin,FirstName);
	if (FirstName.empty())
	{
		std::cout << "please enter First Name \n";
		return ;
	}
	std::cout << "enter Last Name: ";
	getline(std::cin,LastName);
	if (LastName.empty())
	{
		std::cout << "please enter Last Name\n";
		return ;
	}
	std::cout << "enter Phone Number: ";
	getline(std::cin,PhoneNumber);
	if (PhoneNumber.empty())
	{
		std::cout << "please enter Phone Number\n";
		return ;
	}
	std::cout << "enter Nick Name: ";
	getline(std::cin,NickName);
	if (NickName.empty())
	{
		std::cout << "please enter Nick Name \n";
		return ;
	}
	std::cout << "enter Darkest Secret: ";
	getline(std::cin,DarkestSecret);
	if (DarkestSecret.empty())
	{
		std::cout << "please enter Darkest Secret\n";
		return ;
	}
}