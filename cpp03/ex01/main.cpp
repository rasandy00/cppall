/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andriamr <andriamr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:13:40 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/21 15:17:24 by andriamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static void	displayInfo(const FragTrap& fragTrap)
{
	std::cout << std::string(52, '_') << "\n";
	std::cout << fragTrap.getName()
		<< "\t" << fragTrap.getHitPoints()
		<< "\t\t" << fragTrap.getEnergyPoints()
		<< "\t\t" << fragTrap.getAttackDamage()
		<< "\n";
}

int	main(void)
{
	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "\t\tCONSTRUCTORS\n";
	std::cout << std::string(52, '_') << RESET << "\n\n";
	FragTrap	a;
	FragTrap	b(a);
	FragTrap	c("Bob");

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << YELLOW << std::string(52, '_') << RESET << "\n\n";
	a.setName("Amelia");
	b = c;
	c.setName("Carl");

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
	for (int i = 0; i < 99; i++)
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

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	b.highFivesGuys();

	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "\t\tDESTRUCTORS\n";
	std::cout << std::string(52, '_') << RESET << "\n\n";
	return (0);
}
