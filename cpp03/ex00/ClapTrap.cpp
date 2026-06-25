/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liranaiv <liranaiv@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 09:51:43 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/20 15:31:21 by liranaiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("ClapTrap"),
		_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREY << "[ Default constructor ]\t"
		<< "A nameless shadow entered the arena.\n" << RESET;
}

ClapTrap::ClapTrap(const std::string& name): _name(name),
		_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREY << "[ Name constructor ]\t"
		<< "A wild " << _name << " appears!\n" << RESET;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << GREY << "[ Copy constructor ]\t"
		<< "Duplicating player data from " << other._name
		<< ".\n" << RESET;
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << GREY << "[ Copy assignment operator ]\t"
		<< "Overwriting " << _name << " with data from "
		<< other._name << ".\n" << RESET;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

const std::string&	ClapTrap::getName(void) const
{
	return (_name);
}

int		ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

int		ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

void	ClapTrap::setName(const std::string& name)
{
	_name = name;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout << SOFT_RED << _name << " not found. Cannot attack.\n" << RESET;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << RED << _name << " is so tired! Cannot attack.\n" << RESET;
		return ;
	}
	std::cout << YELLOW << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage!\n" << RESET;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << GREY << "No effect on " << _name << ".\n╮( ˘ ､ ˘ )╭\n" << RESET;
		return ;
	}
	std::cout << RED << "Ouch, clapTrap " << _name << " got hit and lost "
		<< amount << " hitPoints!\n" << RESET;
	_hitPoints -= amount;
	if (amount >= INT_MAX || _hitPoints < 0)
	{
		_hitPoints = 0;
		std::cout << GREY << _name << " passed away.\n" << RESET;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << RED << "Huh, " << _name << " is already dead. Do not disturb.\n" << RESET;
		return ;
	}
	if (_energyPoints == 0)
	{
		std::cout << SOFT_RED << _name << " don't even have energy to get healthier.\n( – ⌓ – )\n" << RESET;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << _name << " have been repaired, and got "
		<< amount << " hitPoints!\n" << RESET;
	_hitPoints += amount;
	if ((amount >= INT_MAX) || (_hitPoints < 0) || (_hitPoints > 10))
		_hitPoints = 10;
	_energyPoints--;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "[ Destructor ]\t"
		<< "Connection lost. " << _name <<
		" disconnected.\n" << RESET;
}
