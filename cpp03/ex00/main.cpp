/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andriamr <andriamr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 10:13:40 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/21 14:49:34 by andriamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static void	displayInfo(const ClapTrap& clapTrap)
{
	std::cout << std::string(52, '_') << "\n";
	std::cout << clapTrap.getName()
		<< "\t" << clapTrap.getHitPoints()
		<< "\t\t" << clapTrap.getEnergyPoints()
		<< "\t\t" << clapTrap.getAttackDamage()
		<< "\n";
}

int	main(void)
{
	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "\t\tCONSTRUCTORS\n";
	std::cout << std::string(52, '_') << RESET << "\n\n";
	ClapTrap	a;
	ClapTrap	b(a);
	ClapTrap	c("Bob");

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << YELLOW << std::string(52, '_') << RESET << "\n\n";
	a.setName("Amelia");
	b = c;
	c.setName("Carl");
	a.setAttackDamage(3);
	b.setAttackDamage(5);
	c.setAttackDamage(2);

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "		READY? GO!" << YELLOW << "   ε=ε=ε=ε=┌(;￣▽￣)┘\n" << LAVENDER;
	std::cout << std::string(52, '_') << RESET << "\n\n";
	a.attack("Bob");
	b.takeDamage(3);
	b.attack("Carl");
	c.takeDamage(5);
	c.beRepaired(3);

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << RESET << "\n\n";
	b.attack("Carl");
	c.takeDamage(5);
	b.attack("Carl");
	c.takeDamage(5);

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << RESET << "\n\n";
	c.attack("Amelia");
	c.beRepaired(5);
	for (int i = 0; i < 9; i++)
	{
		a.attack("Carl");
		c.takeDamage(3);
	}
	a.attack("Bob");
	a.beRepaired(5);

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);

	std::cout << LAVENDER << std::string(52, '_') << RESET << "\n\n";
	b.beRepaired(40);

	std::cout << std::string(52, '_') << "\n\n";
	std::cout << "	hitPoints	energyPoints	attackDamage\n";
	displayInfo(a);
	displayInfo(b);
	displayInfo(c);
	
	c.beRepaired(1);

	std::cout << LAVENDER << std::string(52, '_') << "\n\n";
	std::cout << "\t\tDESTRUCTORS\n";
	std::cout << std::string(52, '_') << RESET << "\n\n";
	return (0);
}
