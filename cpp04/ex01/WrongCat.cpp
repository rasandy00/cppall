/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/17 18:06:26 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal("WrongCat") {
	std::cout << "Copy WrongCat constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Destructor called!" << std::endl;
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Woem Woem Woem!" << std::endl;
}

std::string	WrongCat::getType( void ) const {
	return (this->type);
}
