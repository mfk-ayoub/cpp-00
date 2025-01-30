#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main(int ac,char **av)
{
	std::string command;
	(void)ac;
	(void)av;
	while (true)
	{
		std::cout << "Enter a command: ";
    	std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			break;
		if (command.compare("EXIT") == 0)
			break;
	}
	return (0);
}
