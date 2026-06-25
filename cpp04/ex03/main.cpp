/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 18:14:04 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:03 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main( void )
{
	std::cout << "-----------------AMATERIA------------------" << std::endl;
	{
		AMateria	*A = new Ice();
		AMateria	*B;
		std::cout << "-----------------------------------" << std::endl;
		AMateria	*C = new Cure();
		AMateria	*D;
	
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "--------------ICE------------------" << std::endl;
		std::cout << A->getType() << std::endl;
		B = A->clone();
		std::cout << B->getType() << std::endl;
		delete B;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "--------------CURE-----------------" << std::endl;
		std::cout << C->getType() << std::endl;
		D = C->clone();
		std::cout << D->getType() << std::endl;
		delete D;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "------------CHARACTER--------------" << std::endl;
		Character	avatar("Jim");
		C->use(avatar);

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		delete C;
		delete A;
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "-----------------ICHARACTER------------------" << std::endl;
		ICharacter	*Jim = new Character("Jim");
		ICharacter	*Lar = new Character("Lar");

		std::cout << Jim->getName() << std::endl;
		Jim->equip(new Cure());
		Jim->use(0, *Lar);
		Jim->equip(new Ice());
		Jim->use(1, *Lar);
		Jim->equip(new Cure());
		Jim->use(2, *Lar);
		Jim->equip(new Ice());
		Jim->use(3, *Lar);

		std::cout << std::endl;
		Jim->unequip(2);
		Jim->use(0, *Lar);
		Jim->use(1, *Lar);
		Jim->use(2, *Lar);
		Jim->use(3, *Lar);

		std::cout << std::endl;
		Character	*jim = dynamic_cast<Character*>(Jim);
		std::cout << "-----------------------------------" << std::endl;
		Character	Tom;
		Tom = *jim;
		Tom.unequip(0);
		Tom.use(0, *Lar);
		Tom.use(1, *Lar);
		Tom.use(2, *Lar);
		Tom.use(3, *Lar);

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		delete Jim;
		delete Lar;
	}
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "-----------------MATERIASOURCE-----------------" << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");

		std::cout << "-----------------------------------" << std::endl;
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		std::cout << "-----------------------------------" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		delete bob;
		delete me;
		delete src;
	}
	return (0);
}
