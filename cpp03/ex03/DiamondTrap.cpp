/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liranaiv <liranaiv@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 15:16:54 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/20 15:17:06 by liranaiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):
	ClapTrap("DiamondTrap_clap_name"), FragTrap("DiamondTrap"), ScavTrap("DiamondTrap")
{
	std::cout << LAVENDER << "[ DiamondTrap default constructor ]\t"
		<< "A nameless shadow entered the arena.\n" << RESET;
	_name = "DiamondTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const std::string& name):
	ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << LAVENDER << "[ DiamondTrap name constructor ]\t"
		<< "A wild " << _name << " appears!\n" << RESET;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):
	ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	std::cout << LAVENDER << "[ DiamondTrap copy constructor ]\t"
		<< "Duplicating player data from " << other._name
		<< ".\n" << RESET;
	_name = other._name;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << LAVENDER << "[ DiamondTrap copy assignment operator ]\t"
		<< "Overwriting " << _name << " with data from "
		<< other._name << ".\n" << RESET;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return (*this);
}

const std::string&	DiamondTrap::getName(void) const
{
	return (_name);
}

void	DiamondTrap::setName(const std::string& name)
{
	_name = name;
	ClapTrap::setName(name + "_clap_name");
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << RESET << "Hi there! My name is " << _name
		<< YELLOW << ".\nAnd my ClapTrap name is "
		<< ClapTrap::_name << RESET << ".\n";
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << RED << "[ DiamondTrap destructor ]\t"
		<< "Connection lost. " << _name <<
		" disconnected.\n" << RESET;
}
