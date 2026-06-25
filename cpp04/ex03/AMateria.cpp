/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:45:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:06 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void ) : type(std::string("")){
	std::cout << "Default AMateria constructor called!" << std::endl;
}

AMateria::AMateria( std::string const& type ) : type(type) {
	std::cout << "Overloading AMateria constructor called!" << std::endl;
}

AMateria::AMateria( const AMateria& other) {
	std::cout << "Copy AMateria constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

AMateria&	AMateria::operator=( const AMateria& other ) {
	std::cout << "Copy AMateria assignment called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria destructor called!" << std::endl;
}

std::string const&	AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter& target) {
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *\n";
	else
		std::cout << "No Material!" << std::endl;
}
