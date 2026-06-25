/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landriam <landriam@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:56:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/18 18:02:53 by landriam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
		std::string	type;

	public:
		Animal( void );
		Animal( const std::string name );
		Animal( const Animal& other );
		Animal&	operator=( const Animal& other );

		virtual void	makeSound( void ) const;
		virtual std::string	getType( void ) const;

		virtual ~Animal( void );
};

#endif
