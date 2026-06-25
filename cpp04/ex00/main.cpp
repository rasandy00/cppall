/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andriamr <andriamr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:05:04 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 18:47:32 by andriamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main()
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	const WrongAnimal	*k = new WrongCat();

	std::cout << "-------------------------------------------";
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "-------------------------------------------";
	std::cout << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();

	std::cout << "-------------------------------------------";
	std::cout << std::endl;

	delete k;
	delete i;
	delete j;
	delete meta;
	return (0);
}
