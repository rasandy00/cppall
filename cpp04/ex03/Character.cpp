/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 07:20:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:13 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character( void ) : _name("Noname"), tmp(NULL) {
	std::cout << "Default Character constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character( const std::string& name ) : _name(name), tmp(NULL) {
	std::cout << "Overloading Character constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

Character::Character( const Character& other ) {
	std::cout << "Copy Character constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Character&	Character::operator=( const Character& other ) {
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (other._slots[i])
			{
				delete this->_slots[i];
				this->_slots[i] = (other._slots[i])->clone();
			}
		}
	}
	return (*this);
}

Character::~Character( void ) {
	std::cout << "Character destructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete (this->_slots[i]);
	}
	if (tmp)
		delete tmp;
}

std::string const&	Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	std::string	type;

	if (!m)
		return ;
	type = m->getType();
	if (type == "ice" || type == "cure")
	{
		for (int i = 0; i < 4; i++)
		{
			if (!(this->_slots[i]))
			{
				this->_slots[i] = m;
				return ;
			}
		}
	}
	if (tmp)
	{
		delete tmp;
		tmp = NULL;
	}
	tmp = m;
}

void	Character::unequip( int idx ) {
	if (idx > 3 || idx < 0)
		return ;
	if (tmp)
	{
		delete tmp;
		tmp = NULL;
	}
	tmp = this->_slots[idx];
	this->_slots[idx] = NULL;
	if (idx == 3)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->_slots[i] = this->_slots[i + 1];
		this->_slots[i + 1] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx > 3 || idx < 0)
	{
		std::cout << "Slot exceeded!" << std::endl;
		return ;
	}
	if (this->_slots[idx])
		(this->_slots[idx])->use(target);
}
