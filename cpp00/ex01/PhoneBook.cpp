#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <cstdlib>

typedef bool	(*Validator)(const std::string &);

PhoneBook::PhoneBook(void) : _numContacts(0), _oldestIndex(0) {}

PhoneBook::~PhoneBook(void) {}

static bool	isDigits(const std::string &p)
{
	for (size_t i = 0; i < p.length(); i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(p[i])))
		{
			std::cout << "Error: non-digit character '" << p[i]
					  << "' at position " << i << std::endl;
			return false;
		}
	}
	return true;
}

static bool	isPrintable(const std::string &p)
{
	for (size_t i = 0; i < p.length(); i++)
	{
		if (!std::isprint(static_cast<unsigned char>(p[i])))
		{
			std::cout << "Error: non-printable" << std::endl;
			return false;
		}
	}
	return true;
}

static std::string	_truncateField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

static std::string	_getInput(const std::string &prompt,  Validator valid = NULL)
{
	std::string input;
	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return "";
		}
		if (input.empty())
			continue;
		if (valid && !valid(input))
			continue;
		break;
	}
	return input;
}

void PhoneBook::addContact(void)
{
	if (_numContacts < MAX_CONTACTS)
		_oldestIndex = _numContacts;
	else
	{
		for (int i = 7; i > 0; i--)
			_contacts[i] = _contacts[i - 1];
		_oldestIndex = 0;
	}

	Contact &c = _contacts[_oldestIndex];

	c.setFirstName(_getInput("First name: ", &isPrintable));
	c.setLastName(_getInput("Last name: ", &isPrintable));
	c.setNickname(_getInput("Nickname: ", &isPrintable));
	c.setPhoneNumber(_getInput("Phone number: ", &isDigits));
	c.setDarkestSecret(_getInput("Darkest secret: ", &isPrintable));

	if (_numContacts < MAX_CONTACTS)
		_numContacts++;
}

void PhoneBook::searchContacts(void) const
{
	if (_numContacts == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < _numContacts; i++)
	{
		std::ostringstream idx;
		idx << i;
		std::cout << std::setw(10) << idx.str() << "|"
				  << std::setw(10) << _truncateField(_contacts[i].getFirstName()) << "|"
				  << std::setw(10) << _truncateField(_contacts[i].getLastName()) << "|"
				  << std::setw(10) << _truncateField(_contacts[i].getNickname()) << std::endl;
	}

	std::string input = _getInput("Enter index: ", &isDigits);

	std::istringstream iss(input);
	int index;
	iss >> index;

	if (index < 0 || index >= _numContacts)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}

	std::cout << "First name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
}
