/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 07:03:52 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:24 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {

	private:

		std::string	_name;
		AMateria	*_slots[4];

	public:

		AMateria	*tmp;

		Character( void );
		Character( const std::string& name );
		Character( const Character& other );
		Character&	operator=( const Character& other );
		~Character( void );

		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
