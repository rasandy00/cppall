/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/19 10:15:03 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Default Cat constructor called!" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal("Cat") {
	std::cout << "Copy Cat constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "Copy assignment Cat called!" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor called!" << std::endl;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow Meow!" << std::endl;
}

std::string	Cat::getType( void ) const {
	return (this->type);
}
