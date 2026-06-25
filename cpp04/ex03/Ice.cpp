/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:45:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:10 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria("ice") {
	std::cout << "Default Ice constructor called!" << std::endl;
}

Ice::Ice( const Ice& other) : AMateria("ice") {
	std::cout << "Copy Ice constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Ice&	Ice::operator=( const Ice& other ) {
	std::cout << "Copy Ice assignment called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor called!" << std::endl;
}

std::string const&	Ice::getType() const {
	return (this->type);
}

AMateria* Ice::clone() const {
	Ice	*copy = new Ice(*this);
	return (copy);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
