/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/19 10:13:07 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) : type("Animal") {
	std::cout << "Default Animal constructor called!" << std::endl;
}

Animal::Animal( const std::string name ) : type(name) {
	std::cout << "Overloading Animal constructor called!" << std::endl;
}

Animal::Animal( const Animal& other ) {
	std::cout << "Copy Animal constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Animal&	Animal::operator=( const Animal& other ) {
	std::cout << "Copy assignment Animal called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << "Animal Destructor called!" << std::endl;
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal sound!" << std::endl;
}

std::string	Animal::getType( void ) const {
	return (this->type);
}
