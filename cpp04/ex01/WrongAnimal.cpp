/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/17 18:06:28 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
	std::cout << "Default WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string name ) : type("WrongAnimal_" + name) {
	std::cout << "Overloading WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	std::cout << "Copy WrongAnimal constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Destructor called!" << std::endl;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound!" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	return (this->type);
}
