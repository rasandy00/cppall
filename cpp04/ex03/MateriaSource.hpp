/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 07:03:52 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:20 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:

		AMateria	*_slots[4];

	public:

		MateriaSource( void );
		MateriaSource( const MateriaSource& other );
		MateriaSource&	operator=( const MateriaSource& other );
		~MateriaSource( void );

		void learnMateria( AMateria *n );
		AMateria* createMateria( std::string const & type );
};

#endif
