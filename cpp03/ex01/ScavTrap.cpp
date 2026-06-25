/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liranaiv <liranaiv@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:01:52 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/20 15:48:01 by liranaiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << MINT << "[ ScavTrap default constructor ]\t"
		<< "A nameless shadow entered the arena.\n" << RESET;
	_name = "ScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	std::cout << MINT << "[ ScavTrap name constructor ]\t"
		<< "A wild " << _name << " appears!\n" << RESET;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	std::cout << MINT << "[ ScavTrap copy constructor ]\t"
		<< "Duplicating player data from " << other._name
		<< ".\n" << RESET;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << MINT << "[ ScavTrap copy assignment operator ]\t"
		<< "Overwriting " << _name << " with data from "
		<< other._name << ".\n" << RESET;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout << SOFT_RED << _name << " is already gone. Cannot attack.\n" << RESET;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << RED << _name << " is so exhausted! Cannot attack.\n" << RESET;
		return ;
	}
	std::cout << YELLOW << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!\n" << RESET;
	_energyPoints--;
}

void	ScavTrap::guardGate(void)
{
	if (_hitPoints == 0)
	{
		std::cout << SOFT_RED << _name << " not found. Cannot guard the gate.\n" << RESET;
		return ;
	}
	std::cout << BLUE << "ScavTrap " << _name <<
		"  is now in Gate keeper mode.\nᕙ(⌐■_■)ᕤ\n" << RESET;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << SOFT_RED << "[ ScavTrap destructor ]\t"
		<< "Connection lost. " << _name <<
		" disconnected.\n" << RESET;
}
