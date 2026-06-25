#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
    std::string cmd;
    const std::string commands[3] = {"ADD", "SEARCH", "EXIT"};

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break ;
        }
        if (cmd == commands[0])
            phonebook.addContact();
        else if (cmd == commands[1])
            phonebook.searchContacts();
        else if (cmd == commands[2])
        {
            std::cout << "Exit!" << std::endl;
            break ;
        }
		else if (!cmd.empty())
			std::cout << "Invalid command" << std::endl;
        if (std::cin.eof())
            break ;
    }
    return 0;
}
