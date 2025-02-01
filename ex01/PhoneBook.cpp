/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:44:27 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/02/01 04:40:42 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook() : index(0), numberofcontact(0) {}
PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
    contact[index].Setcontact();
	index = (index + 1) % 8;
	if (numberofcontact < 8)
		numberofcontact++;
}

void PhoneBook::SearchInContact()
{
	if (numberofcontact == 0)
	{
		std::cout << "Invalid Contact\n" << std::endl;
		return ;
	}
	else
	{
		for (int i = 0; i < numberofcontact ; i++)
		{
			contact[i].DisplayContact();
			
		}
	}
}