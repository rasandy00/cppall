/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:21:14 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:30 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {

	public:

		Ice( void );
		Ice( const Ice& other );
		Ice&	operator=( const Ice& other );
		~Ice( void );

		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
