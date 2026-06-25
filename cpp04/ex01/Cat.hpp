/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:56:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/18 23:47:57 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

	private:

		Brain	*brain;

	public:

		Cat( void );
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );

		void	makeSound( void ) const;
		std::string	getType( void ) const;

		void	setBrain( std::string thought );
		std::string	getBrain( unsigned int index ) const;

		~Cat( void );
};

#endif
