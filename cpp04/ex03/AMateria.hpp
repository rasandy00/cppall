/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:21:14 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:35 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;

class AMateria {

	protected:

		std::string	type;

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( const AMateria& other );
		AMateria&	operator=( const AMateria& other );
		virtual ~AMateria( void );

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
