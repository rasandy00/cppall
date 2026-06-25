/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liranaiv <liranaiv@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:13:40 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/20 15:11:09 by liranaiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

static void	displayInfo(const DiamondTrap& diamondTrap)
{
	std::cout << std::string(52, '_') << "\n";
	std::cout << diamondTrap.getName()
		<< "\t" << diamondTrap.getHitPoints()
		<< "\t\t" << diamondTrap.getEnergyPoints()
		<< "\t\t" << diamondTrap.getAttackDamage()
		<< "\n";
}

int	main(void)
{
	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "\t\tCONSTRUCTORS\n";
	std::cout << std::string(52, '_') << RESET << "\n\n";
	DiamondTrap	a;
	DiamondTrap	b(a);
	DiamondTrap	c("Bob");

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << YELLOW << std::string(52, '_') << RESET << "\n\n";
	a.setName("Amelia");
	b = c;
	c.setName("Carl");
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "		READY? GO!" << YELLOW << "   ε=ε=ε=ε=┌(;￣▽￣)┘\n" << LAVENDER;
	std::cout << std::string(52, '_') << RESET << "\n\n";
	a.attack("Bob");
	b.takeDamage(30);
	b.attack("Carl");
	c.takeDamage(30);
	c.beRepaired(3);
	a.highFivesGuys();
	c.guardGate();

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << RESET << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		b.attack("Carl");
		c.takeDamage(30);
	}

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << RESET << "\n\n";
	c.attack("Amelia");
	c.beRepaired(5);
	for (int i = 0; i < 49; i++)
	{
		a.attack("Carl");
		c.takeDamage(30);
	}
	a.attack("Bob");
	a.beRepaired(5);

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << RESET << "\n\n";
	b.beRepaired(310);
	b.highFivesGuys();
	b.guardGate();

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "\t\tDESTRUCTORS\n";
	std::cout << std::string(52, '_') << RESET << "\n\n";
	return (0);
}
