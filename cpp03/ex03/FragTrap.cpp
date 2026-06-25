/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liranaiv <liranaiv@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 08:57:07 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/20 13:20:46 by liranaiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << BROWN << "[ FragTrap default constructor ]\t"
		<< "A nameless shadow entered the arena.\n" << RESET;
	_name = "FragTrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << BROWN << "[ FragTrap name constructor ]\t"
		<< "A wild " << name << " appears!\n" << RESET;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << BROWN << "[ FragTrap copy constructor ]\t"
		<< "Duplicating player data from " << other._name
		<< ".\n" << RESET;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	std::cout << BROWN << "[ FragTrap copy assignment operator ]\t"
		<< "Overwriting " << _name << " with data from "
		<< other._name << ".\n" << RESET;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_hitPoints == 0)
	{
		std::cout << SOFT_RED << _name << "'s already gone. Cannot high-five.\n(◞‸◟；)\n" << RESET;
		return ;
	}
	std::cout << PURPLE << "FragTrap " << _name <<
		" excitedly asks: 'Come on guys, who wants a HIGH-FIVE?'.\n(*･∀･)／\n" << RESET;
}

FragTrap::~FragTrap(void)
{
	std::cout << ORANGE << "[ FragTrap destructor ]\t"
		<< "Connection lost. " << _name <<
		" disconnected.\n" << RESET;
}
