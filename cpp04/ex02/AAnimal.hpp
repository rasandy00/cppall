/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andriamr <andriamr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 10:56:25 by landriam          #+#    #+#             */
/*   Updated: 2026/06/21 19:11:45 by andriamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal {
	protected:
		std::string	type;

	public:
		AAnimal( void );
		AAnimal( const std::string name );
		AAnimal( const AAnimal& other );
		AAnimal&	operator=( const AAnimal& other );

		virtual void	makeSound( void ) const = 0;
		virtual std::string	getType( void ) const;

		virtual ~AAnimal( void );
};

#endif
