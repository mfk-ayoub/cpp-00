/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 05:04:16 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/02/22 05:04:17 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main(int ac,char **av)
{
	std::string command;
	PhoneBook phonebook;
	((void)ac,(void)av);

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
    	std::getline(std::cin, command);
		if (std::cin.eof())
			return (1);
		if (command.compare("ADD") == 0)
			phonebook.addContact();
		else if  (command.compare("EXIT") == 0)
		{
			std::cout << "GOOD BYE!\n";
			break;
		}
		else if  (command.compare("SEARCH") == 0)
			phonebook.SearchInContact();
		else
			std::cout << "Invalid command try again! \n";
	}
	return (0);
}
