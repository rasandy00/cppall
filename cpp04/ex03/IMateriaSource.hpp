/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 21:22:19 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 16:23:22 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"

class IMateriaSource {

	public:

		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria *n ) = 0;
		virtual AMateria* createMateria( std::string const& type ) = 0;
};

#endif
