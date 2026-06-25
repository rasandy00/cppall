/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/20 11:15:24 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal( void ) : type("Animal") {
	std::cout << "Default Animal constructor called!" << std::endl;
}

AAnimal::AAnimal( const std::string name ) : type(name) {
	std::cout << "Overloading Animal constructor called!" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other ) {
	std::cout << "Copy Animal constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

AAnimal&	AAnimal::operator=( const AAnimal& other ) {
	std::cout << "Copy assignment Animal called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal( void ) {
	std::cout << "Animal Destructor called!" << std::endl;
}

std::string	AAnimal::getType( void ) const {
	return (this->type);
}
