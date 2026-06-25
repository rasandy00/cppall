/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/19 10:12:39 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal("Dog"), brain(new Brain()) {
	std::cout << "Default Dog constructor called!" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal("Dog"), brain(new Brain) {
	std::cout << "Copy Dog constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout << "Copy assignment Dog called!" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor called!" << std::endl;
	delete this->brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof Woof!" << std::endl;
}

std::string	Dog::getType( void ) const {
	return (this->type);
}
