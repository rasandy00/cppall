/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 11:00:35 by landriam          #+#    #+#             */
/*   Updated: 2026/06/20 11:34:32 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : AAnimal("Cat"), brain(new Brain()) {
	std::cout << "Default Cat constructor called!" << std::endl;
}

Cat::Cat( const Cat& other ) : AAnimal("Cat"), brain(new Brain()) {
	std::cout << "Copy Cat constructor called!" << std::endl;
	if (this != &other)
		*this = other;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "Copy assignment Cat called!" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor called!" << std::endl;
	delete this->brain;
	this->brain = NULL;
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow Meow!" << std::endl;
}

std::string	Cat::getType( void ) const {
	return (this->type);
}

void	Cat::setBrain( std::string thought ) {
	(this->brain)->setThought( thought );
}

std::string	Cat::getBrain( unsigned int index ) const {
	return ((this->brain)->getThought(index));
}
