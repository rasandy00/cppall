/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andriamr <andriamr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 16:05:04 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 19:12:14 by andriamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main()
{
	int	N = 10;
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	std::cout << "--------------------------------------------" << std::endl;
	i->makeSound();
	j->makeSound();
	AAnimal*	nonconst = const_cast<AAnimal*>(i);
	Cat	*d = dynamic_cast<Cat*>(nonconst);
	
	std::cout << "--------------------------------------------" << std::endl;
	Cat	ff(*d);
	std::cout << "           -----------------------          " << std::endl;
	Cat	gg;
	std::cout << "           -----------------------          " << std::endl;
	gg = ff;

	std::cout << "--------------------------------------------" << std::endl;
	d->setBrain("Freedom");
	std::cout << d->getBrain(0) << std::endl;
	std::cout << ff.getType() << std::endl;
	std::cout << gg.getType() << std::endl;

	std::cout << "--------------------------------------------" << std::endl;
	AAnimal *animal[N];
	for (int k = 0; k < N/2; k++)
		animal[k] = new Dog();
	for (int k = 5; k < N; k++)
		animal[k] = new Cat();
	std::cout << "           -----------------------          " << std::endl;
	for (int k = 0; k < N; k++)
		std::cout << animal[k]->getType() << "  ";
	std::cout << std::endl;

	std::cout << "--------------------------------------------" << std::endl;
	for (int k = 0; k < N; k++)
		delete animal[k];

	std::cout << "--------------------------------------------" << std::endl;
	delete j;
	delete i;
	return (0);
}
