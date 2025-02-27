/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 06:44:27 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/02/27 03:46:02 by ayel-mou         ###   ########.fr       */
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

void PhoneBook::DisplayContacts()
{
    if (numberofcontact == 0)
    {
        std::cout << "Invalid Contact\n" << std::endl;
        return;
    }

    std::cout << "|" << std::setw(10) << std::left << "index"
              << "|" << std::setw(10) << "first name"
              << "|" << std::setw(10) << "last name"
              << "|" << std::setw(10) << "nickname"
              << "|" << std::endl;
    std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
    std::cout << std::setfill(' ');

    int i = 0;
    while (i < numberofcontact)
    {
        std::string firstName = contact[i].getFirstName();
        std::string lastName = contact[i].getLastName();
        std::string nickName = contact[i].getNickName();

        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        if (nickName.length() > 10)
            nickName = nickName.substr(0, 9) + ".";

        std::cout << "|" << std::setw(10) << std::left << (i + 1)
                  << "|" << std::setw(10) << std::left << firstName
                  << "|" << std::setw(10) << std::left << lastName
                  << "|" << std::setw(10) << std::left << nickName
                  << "|" << std::endl;
        i++;
    }
}

void PhoneBook::SearchInContact()
{
    DisplayContacts();

    if (numberofcontact == 0)
        return;

    std::string get_index;
    int place;

    std::cout << "\nEnter an index to view contact: ";
    std::getline(std::cin, get_index);
    place = std::atoi(get_index.c_str());
    std::cin.clear();

    if (place > 0 && place <= numberofcontact)
    {
        place -= 1;
        std::cout << "First Name: " << contact[place].getFirstName() << std::endl;
        std::cout << "Last Name: " << contact[place].getLastName() << std::endl;
        std::cout << "Phone Number: " << contact[place].getPoneNumber() << std::endl;
        std::cout << "Nick Name: " << contact[place].getNickName() << std::endl;
        std::cout << "Darkest Secret: " << contact[place].getDarkestSecret() << std::endl;
		std::cout << std::endl;
    }	
    else
    {
        std::cout << "Invalid index!" << std::endl;
    }
}
