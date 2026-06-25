/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 07:20:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:15 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "Default MateriaSource constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
	std::cout << "Copy MateriaSource constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {
	if (this != &other)
	{
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

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete (this->_slots[i]);
	}
}

void	MateriaSource::learnMateria( AMateria *n ) {
	int			i = 0;

	if (!n)
		return ;
	while (i < 4)
	{
		if (!(this->_slots[i]))
			break ;
		i++;
	}
	if (i > 3)
		return ;
	this->_slots[i] = n;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	AMateria	*res;

	for (int i = 0; i < 4; i++)
	{
		if ((this->_slots[i])->getType() == type)
		{
			res = this->_slots[i];
			return (res->clone());
		}
			
	}
	return (NULL);
}
