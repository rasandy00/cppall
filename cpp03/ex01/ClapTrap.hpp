/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liranaiv <liranaiv@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 09:50:19 by liranaiv          #+#    #+#             */
/*   Updated: 2026/06/19 12:04:18 by liranaiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <climits>

# define LAVENDER "\033[38;5;147m"
# define RED "\033[31m"
# define SOFT_RED "\033[38;5;217m"
# define GREEN "\033[38;5;114m"
# define MINT "\033[38;5;121m"
# define BLUE "\033[38;5;117m"
# define PURPLE "\033[38;5;141m"
# define ORANGE "\033[38;5;209m"
# define GREY "\033[38;5;248m"
# define YELLOW "\033[38;5;229m"
# define BROWN "\033[38;5;216m"
# define RESET "\033[0m"

class	ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap&	operator=(const ClapTrap& other);
		~ClapTrap(void);
		const std::string&	getName(void) const;
		int					getHitPoints(void) const;
		int					getEnergyPoints(void) const;
		int					getAttackDamage(void) const;
		void				setName(const std::string& name);
		void				setAttackDamage(unsigned int amount);
		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};

#endif
