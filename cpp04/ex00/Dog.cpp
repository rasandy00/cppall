/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/19 10:15:28 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Default Dog constructor called!" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal("Dog") {
	std::cout << "Copy Dog constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout << "Copy assignment Dog called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor called!" << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof Woof!" << std::endl;
}

std::string	Dog::getType( void ) const {
	return (this->type);
}
