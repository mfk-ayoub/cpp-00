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
		if (command.compare("ADD") == 0)
			phonebook.addContact();
		else if  (command.compare("EXIT") == 0)
		{
			std::cout << "GOOD BYE!\n";
			break;
		}
		else
			std::cout << "Invalid command try again! \n";
	}
	return (0);
}
