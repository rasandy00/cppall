/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:34:00 by landriam          #+#    #+#             */
/*   Updated: 2026/06/20 11:34:30 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void ) {
	std::cout << "Default Brain constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = std::string("");
}

Brain::Brain( const Brain& other ) {
	std::cout << "copy Brain constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Brain&	Brain::operator=( const Brain& other ) {
	std::cout << "Copy assignment Brain called!" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] =  other.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called!" << std::endl;
}

std::string	Brain::getThought( unsigned int index ) const {
	if (index >= 100)
		return (std::string(""));
	return (this->ideas[index]);
}

void Brain::setThought( const std::string& thought ) {
	for (int i = 0; i < 100; i++)
	{
		if ((this->ideas[i]).empty())
		{
			this->ideas[i] = thought;
			return ;
		}
	}
	std::cout << "No memory available!" << std::endl;
}
