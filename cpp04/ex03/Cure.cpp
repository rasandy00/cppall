/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:45:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:08 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure( void ) : AMateria("cure") {
	std::cout << "Default Cure constructor called!" << std::endl;
}

Cure::Cure( const Cure& other) : AMateria("cure") {
	std::cout << "Copy Cure constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Cure&	Cure::operator=( const Cure& other ) {
	std::cout << "Copy Cure assignment called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor called!" << std::endl;
}

std::string const&	Cure::getType() const {
	return (this->type);
}

AMateria* Cure::clone() const {
	Cure	*copy = new Cure(*this);
	return (copy);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
